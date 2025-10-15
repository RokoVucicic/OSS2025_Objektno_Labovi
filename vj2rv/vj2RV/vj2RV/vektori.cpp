#include <iostream>
#include "vektori.h"
using namespace std;

Vektor* vektor_new(size_t init) {
	Vektor* vek = new Vektor;
	vek->elementi = new int[init];
	vek->logickaVelicina = 0;
	vek->fizickaVelicina = init;
	return vek;
}

void vektor_delete(Vektor* vek)
{
	delete[] vek->elementi;
	delete vek;
}

void vektor_push_back(Vektor* vek, int value) {
	if (vek->logickaVelicina >= vek->fizickaVelicina) {
		size_t novaVelicina = (vek->fizickaVelicina == 0) ? 1 : vek->fizickaVelicina * 2;
		int* noviNiz = new int[novaVelicina];
		for (size_t i = 0; i < vek->logickaVelicina; i++) {
			noviNiz[i] = vek->elementi[i];
		}
		delete[] vek->elementi;
		vek->elementi = noviNiz;
		vek->fizickaVelicina = novaVelicina;
	}
	vek->elementi[vek->logickaVelicina] = value;
	vek->logickaVelicina++;
}

void vektor_pop_back(Vektor* vek)
{
	if (vek->logickaVelicina > 0) {
		vek->logickaVelicina--;
	}
}

int vektor_front(Vektor* vek)
{
	if (vek->logickaVelicina == 0) {
		return 0;
	}
	return vek->elementi[0];
}

int vektor_back(Vektor* vek)
{
	if (vek->logickaVelicina == 0) {
		return 0;
	}
	return vek->elementi[vek->logickaVelicina - 1];
	
}

size_t vektor_size(Vektor* vek)
{
	return vek->logickaVelicina;
}



