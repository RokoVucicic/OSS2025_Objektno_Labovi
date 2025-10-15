#include <iostream>
#include "vektori.h"
using namespace std;

int main() {
	Vektor* vek = vektor_new(2);

	vektor_push_back(vek, 10);
	vektor_push_back(vek, 20);
	vektor_push_back(vek, 30);

	cout << vektor_size(vek)<< endl;
	cout << vektor_front(vek)<< endl;
	cout << vektor_back(vek)<< endl;

	vektor_pop_back(vek);

	vektor_delete(vek);
	return 0;
}