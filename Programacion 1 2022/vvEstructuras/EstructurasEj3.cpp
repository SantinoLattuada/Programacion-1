/*Ej. 3: Realice diagrama y codificación para el desarrollo del siguiente enunciado.
Enunciado: Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un
Nombre = “FIN”, informar el nombre de la persona de mayor edad.*/

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int fechaAAAAMMDD;
};

void pedirDatos(Persona personas[],int &j){

    cout << "Ingrese el nombre de la persona " << endl;
    cin  >> personas[j].nombre;

    while (personas[j].nombre != "FIN" || personas[j].nombre != "fin"){
        cout << "Ingrese fecha de nacimiento formato AAAAMMDD " << endl;
        cin  >> personas[j].fechaAAAAMMDD;

        j++;
        cout << "Ingrese el nombre de la persona " << endl;
        cin  >> personas[j].nombre;
    }
    return;
}
string personaMayor(Persona personas[],int j){

    int fechaMenor = personas[0].fechaAAAAMMDD;
    string nombreMayor = personas[0].nombre;

    for (int i = 0; i < j; i++){
        if (fechaMenor > personas[i].fechaAAAAMMDD){
            fechaMenor = personas[i].fechaAAAAMMDD;
            nombreMayor = personas[i].nombre;
        }
    }
    return nombreMayor;
}
int main () {
    //Declaro vector
    int j = 0;
    Persona misPersonas[j];

    //Le paso datos a la funcion
    pedirDatos(misPersonas, j);

    //Llamo otra funcion para analizar la persona mayor e imprimo
    cout << "La persona mas vieja es " << personaMayor(misPersonas,j) << endl;

 return 0;
}