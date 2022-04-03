#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Ingrese el numero de elementos que quiere que posea su arreglo: ";
	cin>>n;
	int array[n];
	int i;
	cout << "Se deben ingresar: "<<n <<" numero de elementos \n" << endl;
	for(i = 0; i < n; i++) 
	{		
		cout << "Dame un numero para la posicion: "<<i+1 <<" del arreglo ";
		cin >> array[i];
	}
	int consulta;
	
	cout<<"Ingrese el dato que desea buscar: ";
	cin>>consulta;
	
	char comprobar='F';
	i=0;
	while((comprobar=='F')&&(i<n)){
		if(array[i]==consulta){
			comprobar='V';
		}
		i++;
	}
	
	if(comprobar=='F'){
		cout<<"El dato Ingresado por el usuario no fue encontrado en el arreglo "<<endl;
	}else if(comprobar=='V'){
		cout<<"El dato fue encontrado en la posicion: "<<i<<endl;
	}

	return 0;
}
