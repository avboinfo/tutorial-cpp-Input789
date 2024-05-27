#include <vector>
#include <iostream>

using namespace std;

int scarta(int M, vector<bool> L, vector<bool> D, vector<bool> N){
	int Cont = 0;
	int t = 0;
	for (int i = 0; i<M; i++){
		if (L[i] == true && D[i] == false && N[i] == false) Cont ++; 
		if (L[i] == false && D[i] == true && N[i] == false) Cont ++;
		if (L[i] == false && D[i] == false && N[i] == true) Cont ++;
		t = M - Cont;
	}
	return t;
}