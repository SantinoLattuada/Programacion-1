/*1. Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual las mismas
contengan los primeros números naturales pares e imprimirlo.*/

/*#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
}

int main () {
    int n;
    pedirDatos("Ingrese n ", n);

    int vector[n];
    //Lleno las posiciones del vector
    int acumulador = 0;

    for (int i = 0; i < n; i++){

        vector[i] = acumulador;
        cout << vector[i] << endl;
        acumulador += 2;
    }
 return 0;
}*/

/*2. Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último
elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los demás.*/

/*#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
}

int main () {
    int n;
    pedirDatos("Ingrese n menor que 30 ", n);

    int vector[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero" << endl;
        cin >> vector[i];
    }

    if (vector[n-1] < 10)
    {
        for (int i = 0; i < n; i++)
        {
            if (vector[i] < 0)
            {
                cout << "Negativos " << vector[i] << "  ";
            }
            
        }
        
    }
    else if (vector[n-1] >= 10)
    {
        for (int i = 0; i < n; i++)
        {
            if (vector[i] >= 0)
            {
                cout << "positivos " << vector[i] << " ";
            }
            
        }
        
    }
 return 0;
}*/

/*3. Ingresar un valor entero N (< 20). 
A continuación ingresar un conjunto VEC de N componentes. 
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento homólogo de VEC. 
Finalmente imprimir ambos vectores a razón de un valor de cada uno por renglón

#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
}
void llenar(int vec[], int cantidad){
    for (int i = 0; i < cantidad; i++){
        cout << "Ingrese los numeros" << endl;
        cin >> vec[i];
    }
    return;
}
int factorial(int num){
    int fact = 1;
    for (int i = 0; i < num; i++){
        fact = fact * (i + 1);
    }
    return fact;
}
int main () {
    int cantidad;
    pedirDatos("Ingrese la cantidad de elementos", cantidad);

    int vec[cantidad];
    int fact[cantidad];

    llenar(vec,cantidad);

    for (int i = 0; i < cantidad; i++){
        fact[i] = factorial(vec[i]);
    }
    for (int i = 0; i < cantidad; i++){
        cout << "El factorial de " << vec[i] << " es: " << fact[i] << endl;
    }
    
    
 return 0;
}*/

/*4. Ingresar un valor entero N (< 25). 
A continuación ingresar un conjunto VEC de N componentes. 
Si la suma de las componentes resulta mayor que cero imprimir las de índice impar, sino los otros elementos.


#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
}

int main () {
    int cantidad;
    pedirDatos("Ingrese la cantidad de elementos", cantidad);
    int vec[cantidad];
    int acumulador = 0;

    for (int i = 0; i < cantidad; i++){
        cout << "Ingrese un numero" << endl;
        cin >> vec[i];
        acumulador = acumulador + vec[i];
    }
    if (acumulador > 0){
        for (int i = 0; i < cantidad; i++){
            if (vec[i] % 2 != 0) {
                cout << "Impar " << vec[i] << " ";
            }
            
        }
        
    }
    else if (acumulador < 0){
        for (int i = 0; i < cantidad; i++) {
            if (vec[i] % 2 == 0) {
                cout << "Par " << vec[i] << " ";
            }
            
        }
        
    }
    

 return 0;
} */

/*5. Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro
conjunto DOS, ambos de N componentes. Generar e imprimir otro conjunto TRES intercalando los
valores de posición impar de DOS y los valores de posición par de UNO.

#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
}
int main () {
    //Declaro y pido cantidad de elementos
    int cantidad;
    pedirDatos("Ingrese la cantidad de elementos", cantidad);
    
    //Declaro los vectores
    int conjuntoUno[cantidad];
    int conjuntoDos[cantidad];
    int conjuntoTres[cantidad];

    //Lleno conjunto A
    for (int i = 0; i < cantidad; i++){
        cout << "Ingrese numero/s para conjunto Uno " << endl;
        cin  >> conjuntoUno[i];
    }

    //Lleno conjunto B
    for (int i = 0; i < cantidad; i++){
        cout << "Ingrese numero/s para conjunto Dos " << endl;
        cin  >> conjuntoDos[i];
    }
    
    //Imprimo los resultados
    for (int i = 0; i < cantidad; i++){
        if (conjuntoDos[i] % 2 != 0){
            conjuntoTres[i] = conjuntoDos[i];
            cout << "Posicion impar de conjunto dos: " << conjuntoTres[i] << endl;
        }
        if (conjuntoUno[i] % 2 == 0)
        {
            conjuntoTres[i] = conjuntoUno[i];
            cout << "Posicion par de conjunto uno: " << conjuntoTres[i] << endl;
        }
        
    }

 return 0;
}*/

/*6. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto. Si el máximo
no es único, imprimir todas las posiciones en que se encuentra.

#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
}
int main () {

    //Declaro y pido cantidad de elementos
    int cantidad;
    int numeroMayor;
    int posicionMayor;
    pedirDatos("Ingrese la cantidad de elementos", cantidad);

    //Declaro vector y asigno cantidad
    int vectorValor[cantidad];

    //Lleno el vector
    for (int i = 0; i < cantidad; i++){
        cout << "Ingrese valor para la posicion " << i << endl;
        cin  >> vectorValor[i];
    }
    //Analizo el maximo valor y la posicion
    for (int i = 0; i < cantidad; i++){
        if (i == 0)
        {
            numeroMayor = vectorValor[i];
            posicionMayor = i;
        }
        else if (numeroMayor < vectorValor[i])
        {
            numeroMayor = vectorValor[i];
            posicionMayor = i;
        }
    }
    for (int i = 0; i < cantidad; i++){
        if (vectorValor[i] == numeroMayor){
            cout << "La posicion/es en que se encuentra el maximo valor es: " << i << endl;
        }
        
    }
    
    //Imprimo el mejor valor y la posicion
    cout << "El valor maximo es: " << numeroMayor << endl;

 return 0;
}*/

/*7. Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos.
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor
valor de DATO y el segundo el siguiente mayor (puede ser el mismo si está repetido). Imprimir el
conjunto MEJORDATO con identificación.

#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
}
int main () {
    //Declaro y pido cantidad de elementos
    int cantidad;
    int mejorPosicion;
    int segundaMejorPosicion;
    pedirDatos("Ingrese la cantidad de elementos", cantidad);

    //Declaro vector y asigno cantidad
    int dato[cantidad];
    int mejorDato[1];

    //Lleno el vector dato
    for (int i = 0; i < cantidad; i++){
        cout << "Ingrese valor para la posicion " << i << endl;
        cin  >> dato[i];
    }
    
    //Analizo los mejores datos y los guardo en mejor dato
    for (int i = 0; i < cantidad; i++){
        if (i == 0){
            mejorDato[0] = dato[i];
        }
        else if (mejorDato[1] <= dato[i]){
            if (mejorDato[1] <= dato[i]){
                mejorDato[0] = dato[i];
                mejorPosicion = i;
            }
            else{
                mejorDato[1] = dato[i];
                segundaMejorPosicion = i;
            }
        }
        
    }
    //Imprimo los resultados
    cout << "El mejor valor es: " << mejorDato[0] << " Identificacion " << mejorPosicion << endl;
    cout << "El segundo mejor valor es: " << mejorDato[1] << " Identificacion " << segundaMejorPosicion << endl;
 return 0;
}*/

/*8. Ingresar un valor entero N (< 25). A continuación ingresar un conjunto GG de N elementos.
Imprimir el arreglo en orden inverso generando tres estrategias para imprimir los elementos a
razón
de: a) Uno por línea, b) Diez por línea, c) Cinco por línea con identificación*/


#include <iostream>
using namespace std;

void pedirDatos(string mensaje, int &a){
    cout << mensaje << endl;
    cin  >> a;
    return;
}
void llenar(int vec[], int cant){
    for (int i = 0; i < cant; i++){
        cout << "Ingrese valor para la posicion " << i << endl;
        cin  >> vec[i];
    }
    
}
int main () {
    //Defino variable y pido N
    int cantidad;
    
    pedirDatos("Ingrese la cantidad de elementos", cantidad);

    //Declaro los vectores y asigno cantidad
    int GG[cantidad];

    //Lleno el vector
    llenar(GG,cantidad);

    //Imprimo uno por linea
    for (int i = cantidad - 1; i >= 0; i--){
        cout << GG[i] << endl;
    }
    //Imprimo diez por linea
    int contadorDiez = 0;
    for (int i = cantidad - 1; i >= 0 ; i--){
        contadorDiez++;
        if (contadorDiez == 11){
            cout << endl;
            cout << GG[i];
            contadorDiez = 1;
        }
        else{
            cout << GG[i] << " ";
        }
    }
    //Imprimo 5 por linea con identificacion
    int contadorCinco = 0;
    for (int i = cantidad - 1; i >= 0; i--){
        contadorCinco++;
        if (contadorCinco == 5){
            cout << endl;
            cout << GG[i];
            contadorCinco = 1;
        }
        else{
            cout << GG[i] << " Iden " << i << "  ";
        }
    }
    


 return 0;
}