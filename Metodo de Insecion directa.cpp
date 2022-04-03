#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	
	int num;
	cout << "Indique la cantidad de elementos: ";
	cin >> num;
	int vector[num];
	int i, j;
	int aux;
	cout << "Establecio una cantidad de " << num << " elementos en el vector" << endl;
	for(i = 0; i < num; i++) 
	{		
		cout << "Dame un entero: ";
		cin >> vector[i];
	}
	
	for(i=0;i<num;i++){
		j=i;
		aux=vector[i];
		
		while((j>0)&&(vector[j-1]>aux)){
			vector[j]=vector[j-1];
			j--;
		}
		vector[j]=aux;
	}

	cout<<"Ordenamiento por metodo de Insecion de Menor a Mayor: \n";
	for(i=0;i<num;i++){
		cout<<vector[i]<<" ";
	}
	
	return 0;
}
