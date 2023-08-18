#include <iostream>
using namespace std;




int main () {
 
 int alto, ancho;

 cout << "Ingrese el alto" << endl;
 cin  >> alto;
 cout << "Ingrese el ancho" << endl;
 cin  >> ancho;

 for (int i = 1; i <= alto; i++){

    if (i == 1|| i == (alto/2) +1|| i == alto){
        for (int a = 1; a <= alto; a++){
            cout << "#" << endl;
        }
    }
    else{
        for (int b = 1; b <= alto; b++){
            cout << " " << endl;
        }
        
    }
    for (int c = 1; c <= ancho; i++){

        if (c == 1|| c == ancho){
            for (int d = 1; d < ancho; d++){
                cout << "#";
            }
            
        }
        else{
            for (int e = 1; i <= ancho; e++)
            {
                /* code */
            }
            
            cout << " " << endl;
        }
    }
    
 }
 


 system("pause");
 return 0;
}