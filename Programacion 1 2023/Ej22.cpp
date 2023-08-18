/*Ej. MI-22: Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un Nombre =
‘FIN’, informar el nombre de la persona con mayor edad y el de la más joven.*/

#include <iostream>
using namespace std;


int main () {

    string nombres;
    int fechas;

    string nombreMayor;
    string nombreMenor;
    int fechaMayor;
    int fechaMenor;
    int contador = 0;

    cout << "Ingrese nombre del individuo " << endl;
    cin  >> nombres;

    while (nombres != 'fin' || nombres != 'FIN'){

        cout << "Ingrese fecha de nacimiento AAAAMMDD " << endl;
        cin  >> fechas;

        if (contador == 0){
            fechaMayor = fechaMenor = fechas;
            nombreMayor = nombreMenor = nombres
        }
        else if (fechaMayor > fechas){
            fechaMenor = fechas;
            nombreMenor = nombres;
        }
        else if (fechaMenor ){
            /* code */
        }

        cout << "Ingrese nombre del individuo " << endl;
        cin  >> nombres;

        contador++;
    }
    




 return 0;
}