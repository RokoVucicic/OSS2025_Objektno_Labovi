//#include<iostream>
//using namespace std;
//
//int *funkcija(int n) {
//	int *niz = new int[n];
//	niz[0] = 1;
//	niz[1] = 1;
//	
//	for (int i = 2; i < n; i++) {
//		niz[i] = niz[i-1] + niz[i-2];
//	}
//	return niz;
//}
//
//
//void main() {
//	int n = 10;
//	int *niz = funkcija(n);
//	for (int i = 0; i < n; i++) {
//		cout << niz[i] << " ";
//	}
//}