#ifndef VEKTORI_H
#define VEKTORI_H

struct Vektor {
	int* elementi;
	size_t logickaVelicina;
	size_t fizickaVelicina;
};

Vektor* vektor_new(size_t init);

void vektor_delete(Vektor* vek);

void vektor_push_back(Vektor* vek, int value);

void vektor_pop_back(Vektor* vek);

int vektor_front(Vektor* vek);

int vektor_back(Vektor* vek);

size_t vektor_size(Vektor* vek);

#endif#pragma once
