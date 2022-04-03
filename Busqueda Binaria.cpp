#include <stdlib.h>
#include <iostream>

using namespace std;


int main(){
	
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
	cout<<"Los datos ordenados se ven de la siguiente manera: \n";
	for(i=0;i<num;i++){
		cout<<vector[i]<<" ";
	}
	
	int inf,sup,mit,consulta;
	char comprobar='F';
	
	cout<<endl;
	cout<<"Ingrese el dato que desea buscar: ";
	cin>>consulta;
	
	inf=0;
	sup=num;
	i=0;
	
	while((inf<=sup)&&(i<num)){
		mit=(inf+sup)/2;
		if(vector[mit]==consulta){
			comprobar='V';
			break;
		}
		if(vector[mit]>consulta){
			sup=mit;
			mit=(inf+sup)/2;
		}
		if(vector[mit]<consulta){
			inf=mit;
			mit=(inf+sup)/2;
		}
		i++;
	}
	
	if (comprobar=='V'){
		cout<<"El numero fue encontrado en la posicion: "<<mit+1<<endl;
	}else{
		cout<<"El numero no fue encontrado en el arreglo :(";
	}
	
	return 0;
}
