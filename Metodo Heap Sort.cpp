#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	int aux;
	int k;
	int entero;
	int num;
	cout << "Indique la cantidad de elementos: ";
	cin >> num;
	int vector[num];
	int i, j;
	cout << "Establecio una cantidad de " << num << " elementos en el vector" << endl;
	for(i = 1; i <=num; i++) 
	{		
		cout << "Dame un entero: ";
		cin >> vector[i];
	}
	for (k=num;k>0;k--){
		for (i=1;i<=k;i++){
			entero=vector[i];
			j=i/2;
			while(j>0 && vector[j]<entero){
				vector[i]=vector[j];
				i=j;
				j=j/2;
			}
			vector[i]=entero;
		}
		aux=vector[1];
		vector[1]=vector[k];
		vector[k]= aux;
	}
	cout<<"Numeros Ordenados de Menor a Mayor con metodo HeapSort: "<<endl;
	for(i=1;i<=num;i++){
		cout<<vector[i]<<" ";
	}

	return 0;
}
