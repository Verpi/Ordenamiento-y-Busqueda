#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	
	int num, izq, der;
	cout << "Indique la cantidad de elementos: ";
	cin >> num;
	int vector[num];
	int i, j, k;
	int aux;
	cout << "Establecio una cantidad de " << num << " elementos en el vector" << endl;
	for(i = 0; i < num; i++) 
	{		
		cout << "Dame un entero: ";
		cin >> vector[i];
	}
	
	for(i=0;i<num;i++){
		aux=vector[i];
		izq=1;
		der=i-1;
		while(izq<der){
			k=(int((izq+der)/2));
			if (aux<vector[k]){
				der=k-1;
			}else{
				izq=k+1;
			}
		}
		j=i-1;
		while(j>=izq){
			vector[j+1]=vector[j];
			j=j-11;
		}
		vector[izq]=aux;
	}
	
	cout<<"Ordenamiento por metodo de Insercion binaria: \n";
	for(i=0;i<num;i++){
		cout<<vector[i]<<" ";
	}
	
	
	return 0;
}
