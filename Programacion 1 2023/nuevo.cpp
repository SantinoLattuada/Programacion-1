#include <iostream>
using namespace std;

int ordenadoAscendente(int vec[], int cant){
    cant = cant - 1;
    for (int i = 0; i < cant; i++){
        if (vec[i] > vec[i + 1]){
            return 0;
        }
    }
    return 1;
}

int main () {
 
 return 0;
}