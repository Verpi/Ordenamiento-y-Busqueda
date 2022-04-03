#include<iostream>

using namespace std;

void cambio(int &n1, int &n2){
   int aux;
   aux = n1;
   n1 = n2;
   n2 = aux;
}
void mostrar(int *array, int tamanio) {
   for(int i = 0; i<tamanio; i++)
      cout << array[i] << " ";
   cout << endl;
}
void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   nl = m-l+1; nr = r-m;
   int arrayizq[nl], arrayder[nr];
   for(i = 0; i<nl; i++)
      arrayizq[i] = array[l+i];
   for(j = 0; j<nr; j++)
      arrayder[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   while(i < nl && j<nr) {
      if(arrayizq[i] <= arrayder[j]) {
         array[k] = arrayizq[i];
         i++;
      }else{
         array[k] = arrayder[j];
         j++;
      }
      k++;
   }
   while(i<nl) {
      array[k] = arrayizq[i];
      i++; k++;
   }
   while(j<nr) {
      array[k] = arrayder[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}
int main() {
   int n;
   cout << "Indique la cantidad de elementos: ";
   cin >> n;
   int arr[n];
   cout << "Dame un entero: :" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "El arreglo que ingreso es: \n";
   mostrar(arr, n);
   mergeSort(arr, 0, n-1);
   cout << "Ordenamiento por metodo MergeSort de Menor a Mayor: ";
   mostrar(arr, n);
}
