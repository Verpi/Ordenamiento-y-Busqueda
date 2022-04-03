#include <stdlib.h>
#include <iostream>

using namespace std;

void Quicksort(int* vec, int izq, int der){
	int i = izq, j = der, aux;
	int p = vec[(izq + der)/2];
	while(i <=j){
		while (vec[i]<p)i++;
		while (vec[j]>p)j--;
		if (i<=j){
			aux = vec[i];
			vec[i] = vec[j];
			vec[j] = aux;
			i++; j--;
		}
	}
	if(izq<j){
		Quicksort(vec, izq, j);
	}
		if (i<der){
			Quicksort(vec, i, der);
		}
}

int main(){
			
	int num;
	cout << "Indique la cantidad de elementos: ";
	cin >> num;
	int vector[num];
	cout << "Establecio una cantidad de " << num << " elementos en el vector" << endl;
	for(int i = 0; i < num; i++) 
	{		
		cout << "Dame un entero: ";
		cin >> vector[i];
	}
	Quicksort(vector,0,num-1);

	cout<<"Numeros Ordenados de Menor a Mayor con metodo Quicksort\n";	
	for(int i=0;i<num;i++){
		cout<<vector[i]<<" ";
	}
	
	return 0;
}

