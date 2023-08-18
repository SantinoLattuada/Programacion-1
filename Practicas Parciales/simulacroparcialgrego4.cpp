#include <iostream>
using namespace std;

int main(){

    int ancho = 0;
    int alto = 0;

    cout << "Ingrese el ancho: ";
    cin >> ancho;
    cout << "Ingrese el largo: ";
    cin >> alto;

    for (int i = 1; i <= alto; i++){

        if(i == 1 || i == (alto / 2+1) || i == alto){

            for(int a = 1; a <= ancho; a++){

                cout << "# ";
            }
        }else{

            for (int b = 1; b <= ancho; b++){

                if (b== 1 || b == (alto / 2+1) || b == alto){

                    cout << "# ";
                }else{
                    cout << "  ";
                }

            }
        }
        cout << endl;
    }
    return 0;

}