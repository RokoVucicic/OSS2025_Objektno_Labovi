#ifndef VEKTORI_H
#define VEKTORI_H

struct Vektor {
	int *elementi;
	size_t logickaVelicina;
	size_t fizickaVelicina;
};

Vektor* vektor_new(size_t init);

void vektor_delete(Vektor* vek);

void vektor_push_back(Vektor* vek, int value);

void vektor_pop_back(Vektor* vek);

int vektor_front(const Vektor* vek);

int vektor_back(const Vektor* vek);

size_t vektor_size(const Vektor* vek);

size_t vektor_capacity(const Vektor* vek);

int vektor_empty(const Vektor* vek); 

int vektor_at(const Vektor* vek, size_t index);


#endif