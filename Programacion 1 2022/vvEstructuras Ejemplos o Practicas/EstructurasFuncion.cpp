#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int fechaAAAAMMDD;
};
void leer(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void pedirDatos(int cant, Persona personas[]){
    for (int i = 0; i < cant; i++){
        cout << "Ingrese el nombre de la persona " << endl;
        cin  >> personas[i].nombre;

        cout << "Ingrese la fecha de nacimiento (AAAAMMDD) " << endl;
        cin  >> personas[i].fechaAAAAMMDD;
    }
    return;
}
int main () {
    //Declaro y pido cantidad
    int cantidad;
    leer("Ingrese la cantidad de datos ", cantidad);
    Persona misPersonas[cantidad];

    //Le paso datos a la funcion
    pedirDatos(cantidad, misPersonas);

 return 0;
}