#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
int main(){
    int i, j, der, izq, aux, num, vector[30];
        
        cout << "Indique la cantidad de elementos: ";
        cin>>num;
        
        j=num;
        izq=2;
        der=num;
        
        for(i=1;i<=num;i++){
            cout<<"dame un entero: ";      
            cin>>vector[i];
        }
        do{
            for(i=der;i>=izq;i--){
                if(vector[i-1]>vector[i]){
                    aux=vector[i-1];
                    vector[i-1]=vector[i];
                    vector[i]=aux;
                    j=i;
                }
        }
            izq=j+1;
            for(i=izq;i<=der;i++)
                if(vector[i-1]>vector[i]){
                    aux=vector[i-1];
                    vector[i-1]=vector[i];
                    vector[i]=aux;
                    j=i;
                }
            der=j-1;
        }while(izq<der);
        
    	cout<<"Ordenamiento por metodo de Shaker Sort de Menor a Mayor: \n";
        
        for(i=1;i<=num;i++)
            cout<<vector[i]<<" ";
            cout<<endl;
        
        system("pause");
        return 0;
        getch();
}
