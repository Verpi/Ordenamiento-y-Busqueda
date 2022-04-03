#include <stdlib.h>
#include <iostream>

using namespace std;

void metodoBurbuja(){
	int num;
	cout << "Indique la cantidad de elementos: ";
	cin >> num;
	int vector[num];
	int i, j;
	cout << "Establecio una cantidad de " << num << " elementos en el vector" << endl;
	for(i = 0; i < num; i++) 
	{		
		cout << "Dame un entero: ";
		cin >> vector[i];
	}
	
	int aux;
	for(i=0;i<num;i++){
		for(j=0;j<num-1;j++){
			if (vector[j]>vector[j+1]){
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
	cout<<"Ordenamiento por metodo de burbuja de Menor a Mayor: \n";
	for(i=0;i<num;i++){
		cout<<vector[i]<<" ";
	}
}

int main(){
		
	metodoBurbuja();

	return 0;
}


