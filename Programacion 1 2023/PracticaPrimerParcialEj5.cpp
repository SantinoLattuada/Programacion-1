/* 5) Desarrollar una aplicación que dado un número aleatorio, obtenido mediante la invocación a la función
generaNumeroAleatorio (ya creada), permita al usuario adivinar cuál es dicho número. Para esto el usuario contará
con 3 oportunidades. La aplicación deberá proporcionar pistas al usuario por cada jugada. Estas pistas deberán
indicar si el número ingresado es mayor o menor que el número.
Si en alguno de esos intentos el usuario acierta el número, la aplicación mostrará un mensaje felicitando al usuario.
Si al finalizar los 3 intentos el usuario no acertó, la aplicación mostrará el siguiente mensaje
"Juego Finalizado. El número era: <número>" */

#include <iostream>
using namespace std;

void generaNumeroAleatorio(){

}

int main () {

    int intentos = 3;
    int numIngresado;

    int numeroAleatorio = generaNumeroAleatorio();

    while (intentos > 0){
        cout << "Ingrese un numero " << endl;
        cin  >> numIngresado;

        if (numIngresado == numeroAleatorio){
            cout << "Felicitaciones, ganaste :D " << endl;
            return 0;
        }
        else if (numIngresado < numeroAleatorio){
            cout << "El numero aleatorio es mayor al numero que ingresaste " << endl;
        }
        else{
            cout << "El numero aleatorio es menor al numero que ingresaste " << endl;
        }
        intentos--;
    }
    
    cout << "Juego finalizado. El numero era: " << numeroAleatorio << endl;


 return 0;
}