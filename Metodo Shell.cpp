#include <stdlib.h>
#include <iostream>

using namespace std;

void metodoShell(int vec[], int n1){
	int entero;
	int i;
	int aux;
	bool comprobar;
	
	entero = n1;
	
	while(entero>1){
		entero=(entero/2);
		comprobar=true;
		while(comprobar==true){
			comprobar=false;
			i=0;
			while((i+entero)<n1){
				if (vec[i]>vec[i+entero]){
					aux=vec[i];
					vec[i]=vec[i+entero];
					vec[i+entero]=aux;
					comprobar=true;
				}
				i++;
			}
		}
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
	
	
	metodoShell(vector,num);
	
	
	cout<<"Numeros Ordenados de Menor a Mayor con metodo Shell\n";
	for(int i=0; i<num;i++){
		cout<<vector[i]<<" ";
	}

	return 0;
}
