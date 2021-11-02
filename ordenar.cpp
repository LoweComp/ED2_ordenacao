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

// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge_(int vet[], int p, int q, int r)
{
	int tam_pq = q - p + 1;
	int tam_qr = r - q;

	// Create arrays
	int leftArray[tam_pq], rightArray[tam_qr];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (int i = 0; i < tam_pq; i++)
		leftArray[i] = vet[p + i];
	for (int j = 0; j < tam_qr; j++)
		rightArray[j] = vet[q + 1 + j];

	int index_p = 0, // Initial index of first sub-array
		index_r = 0; // Initial index of second sub-array
	int index_merged = p; // Initial index of merged array

	// Merge the temp arrays back into array[left..right]
	while (index_p < tam_pq && index_r < tam_qr) {
		if (leftArray[index_p] <= rightArray[index_r]) {
			vet[index_merged] = leftArray[index_p];
			index_p++;
		}
		else {
			vet[index_merged] = rightArray[index_r];
			index_r++;
		}
		index_merged++;
	}
	// Copy the remaining elements of
	// left[], if there are any
	while (index_p < tam_pq) {
		vet[index_merged] = leftArray[index_p];
		index_p++;
		index_merged++;
	}
	// Copy the remaining elements of
	// right[], if there are any
	while(index_r < tam_qr){
		vet[index_merged] = rightArray[index_r];
		index_r++;
		index_merged++;
	}
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int vet[], int p, int r)
{
	if (p >= r)
		return; // Returns recursively

	int q = p + (r - p) / 2;
	mergeSort(vet, p, q);
	mergeSort(vet, q + 1, r);
	merge_(vet, p, q, r);

	for(int i=0; i < 8;i++){
    cout << vet[i] << " ";
    }

    cout << endl;

}

