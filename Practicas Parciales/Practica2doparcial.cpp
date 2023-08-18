#include <iostream>
using namespace std;

void distintos(int vecA, int n, vecB, int m, int vecC, int &c){
    int i = 0;
    int j = 0;
    while (i < n && j < m){
        if (vecA[n] == vecB[m]){
            i++;
            j++;
        }
        else{
            if (vecA[i] < vecB[m]){
            vecC[c] = vecA[i];
            i++;
        }
        else{
            vecC[c] = vecB[j];
            j++;
        }
        i++;
        }
    }

    
}
int main () {
    
    int n = 4;
    int m = 5;
    int vecA[n];
    int vecB[m];
    int c = 0;
    int vecC[c];
    distintos(vecA, n, vecB, m, vecC, c);

 return 0;
}