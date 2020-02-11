#include<iostream>
using namespace std;

void mergeConquer(int* vec, int izq, int med, int der) {
	int l = izq;
	int m = med;
	int n = der - izq + 1;
	int* vecAux = new int[n];
	//---
	for (int i = 0; i < n; i++) {
		if (l >= med) { vecAux[i] = vec[m]; m++; continue; }
		if (m > der) { vecAux[i] = vec[l]; l++; continue; }
		if (vec[l] < vec[m])
		{
			vecAux[i] = vec[l]; l++;
		}
		else
		{
			vecAux[i] = vec[m]; m++;
		}
	}
	//---
	for (int i = 0; i < n; i++)
		vec[i + izq] = vecAux[i];
	delete[] vecAux;
}

void mergeDivide(int* vec, int izq, int der) {
	if (izq >= der) return;
	int medio = (izq + der) / 2;
	mergeDivide(vec, izq, medio);
	mergeDivide(vec, medio + 1, der);
	//mergeSortFusion(vec, izq, medio, der); ERROR
	mergeConquer(vec, izq, medio + 1, der);//Ok
}

void mergeSort(int* vec, int ne) {
	mergeDivide(vec, 0, ne - 1);
}

int main() {
	int v[] = { 18,28,51,2,0 };
	int n = 5;
	mergeSort(v, n);
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";

	cout << endl << endl;
}