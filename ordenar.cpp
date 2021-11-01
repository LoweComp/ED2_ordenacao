#include <iostream>
#include <stdio.h>

using namespace std;

void bubble_sort (int vetor[], int n){
    int k, j, aux;

    for (k = 1; k < n; k++) {
        printf("\n[%d] ", k);

        for (j = 0; j < n - 1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
        for(int i = 0; i < n; i++){
                cout << vetor[i] << " ";
        }
    }
}


void selection_sort(int vetor[],int max){
  int i, j, min, aux;

  for (i = 0; i < (max - 1); i++){
    /* O minimo é o primeiro número não ordenado ainda */
    min = i;
    for (j = i+1; j < max; j++) {
      /* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (vetor[j] < vetor[min]){
   min = j;
      }
    }
    /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != min){
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }

    int indice = i+1;
    printf("\n[%d] ", indice);
    for(int k = 0; k < max; k++){
        cout << vetor[k] << " ";
    }

  }
    //for(int i = 0; i < max; i++){
    //    cout << vetor[i] << " ";
    //}
}


void inserction_sort(int vetor[], int n){
int k, j, aux;

   for (k = 1; k <= n - 1; k++){
      printf("\n[%d] ", k);

      aux = vetor[k];
      j = k - 1;
      while (j >= 0 && aux < vetor[j]) {
         vetor[j+1] = vetor[j];
         j--;
      }
      vetor[j+1] = aux;

      for(int i = 0; i < n; i++){
          cout << vetor[i] << " ";
      }

   }
}


void merge_(int p, int q, int r, int v[])
{
   int i = p, j = q;
   int k = 0;
   int *aux;

   while (i < q && j < r){
      if (v[i] < v[j]){
            aux[k] = v[i];
            i++;
      }
      else{
            aux[k] = v[j];
            j++;
      }
      k++;
   }
   while (i < q){
        aux[k] = v[i];
        i++;
        k++;
   }
   while (j < r){
        aux[k] = v[j];
        j++;
        k++;
   }
   for (i = p; i < r; i++)  v[i] = aux[i-p];
}

void mergesort(int p, int r, int v[])
{
   if (p < r-1) {
      int q = (p + r)/2;
      mergesort (p, q, v);
      mergesort (q, r, v);
      merge_(p, q, r, v);
   }
}

