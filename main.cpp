#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenar.cpp"

using namespace std;

void randomizaVet(int v[]){
    for(int i = 0; i < 8; i++){
        int n = 2+( rand() % 15);
        v[i] = n;
    }
    cout << "Vetor: ";
    for(int i = 0; i < 8; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){
int v[8];
srand(time(NULL));

randomizaVet(v);

cout << "\nBUBBLE SORT" << endl;
bubble_sort(v, 8);

cout << "\n\n";

randomizaVet(v);

cout << "\nSELECTION SORT" << endl;
selection_sort(v, 8);

cout << "\n\n";

randomizaVet(v);

cout << "\nINSERCTION SORT" << endl;
inserction_sort(v, 8);

cout << "\n\n";

randomizaVet(v);

cout << "\nMERGE SORT" << endl;
mergesort(0, 7, v);

return 0;
}
