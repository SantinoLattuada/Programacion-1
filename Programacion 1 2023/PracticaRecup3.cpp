/*1) Realizar codificación de una función o procedimiento según crea conveniente que pueda calcular la edad de
una persona recibiendo su fecha de nacimiento.

2) Un boliche ha decidido finalmente reemplazar al personal de seguridad por un sistema que controle la edad 
y cantidad de personas máximas admitidas en el local.
Realizar el diagrama dea cargar la capacidad l algoritmo que permitmáxima del local 
y las fechas de nacimiento de las personas que desean ingresar.
Solo se permitirá el ingreso en caso que la persona sea mayor de edad (más de 18 años) 
y el local no haya alcanzado la capacidad máxima. La carga de datos finalizará con una fecha de nacimiento igual a cero*/

#include <iostream>
using namespace std;

int calcularEdad(int AAAAMMDD){
    //FECHA HOY
    int dia = 5;
    int mes = 7;
    int anio = 2023;

    //FECHA NACIMIENTO
    int diaNac = AAAAMMDD % 100;
    int mesNac = (AAAAMMDD % 10000) / 100;
    int anioNac = AAAAMMDD / 10000;

    int edad;
    edad = anio - anioNac;

    if (mes < mesNac || ((mes == mesNac) && dia < diaNac)){
        edad--;
    }
    return edad;
}
void entradas(int capacidadMaxima){
    int fechaNacimiento;
    int edad;
    int cantPersonas;
    cout << "Ingrese la fecha de nacimiento " << endl;
    cin  >> fechaNacimiento;

    while (fechaNacimiento != 0){
        edad = calcularEdad(fechaNacimiento);

        if (edad >= 18 && cantPersonas < capacidadMaxima){
            cantPersonas++;
        }
        cout << "Ingrese la fecha de nacimiento " << endl;
        cin  >> fechaNacimiento;
    }
    
}
/*3) Un meteorólogo amateur necesita de nuestra ayuda para procesar los datos que ha relevado. 
Los datos que ha registrado son la temperatura (en grados centígrados) y precipitaciones (o sea lluvia en milímetros cúbicos) por hora.
Realice el diagrama del algoritmo que le permita cargar 
los datos registrados durante una semana (7 días) a cada hora (las 24 horas del día) y luego informe:
a. El día y hora con menor temperatura registrada.
b. El día con mayor cantidad de lluvia registrada (la sumatoria de la lluvia de cada hora) 
c. La temperatura máxima de la semana*/
void datos(){
    int temperatura;
    int precipitaciones;

    //A 
    int diaMenorTemp;
    int horaMenorTemp;
    int menorTemperatura = 999999999999;

    //B
    int diaMasLluvia;
    int cantidadLluvia = 0;
    int cantidadLluviaDia = -1;

    //C 
    int temperaturaMaximaHora = -1;
    int temperaturaMaximaSemana = -1;

    for (int i = 1; i < 8; i++){
        
        for (int j = 0; j < 24; j++){
            cout << "Ingrese temperatura " << endl;
            cin  >> temperatura;
            cout << "Ingrese precipitaciones (1 si llovio, 0 si no llovio)" << endl;
            cin  >> precipitaciones;

            //A
            if (temperatura < menorTemperatura){
                menorTemperatura = temperatura;
                diaMenorTemp = i;
                horaMenorTemp = j;
            }
            //B
            cantidadLluvia += precipitaciones;

            //C
            if (temperaturaMaximaHora < temperatura){
                temperaturaMaximaHora = temperatura;
            }
            
        }
        //B
        if (cantidadLluviaDia < cantidadLluvia){
            cantidadLluviaDia = cantidadLluvia;
            diaMasLluvia = i;
        }
        //C
        if (temperaturaMaximaSemana < temperaturaMaximaHora){
            temperaturaMaximaSemana = temperaturaMaximaHora;
        }
        
    }
    //A
    cout << "Dia menor temp: " calcularDia(diaMenorTemp) << " Hora menor temp " << horaMenorTemp << endl;  

    //B 
    cout << "Dia mayor cant lluvia: " << calcularDia(cantidadLluviaDia) << endl;

    //C
    cout << "Temperatura maxima semana: " << temperaturaMaximaSemana << endl;
}
/*4) Realizar la codificación de una función que reciba dos valores enteros positivos 
y devuelva la multiplicación de ambos por sumas sucesivas (sin usar la multiplicación!):

a. Realizar la función utilizando ciclos de iteración
b. Realizar la función utilizando una función recursiva*/
int sumasSucesivas(int a, int b){
    int resultado = 0;

    for (int i = 0; i < b; i++){
        resultado = resultado + a;
    }
    return resultado;
}
int recursividad(int a, int b){

    if (b == 0 || b == 1){
        return 1;
    }
    return a + recursividad(a, b--);
}
int main () {

    int cant;
    cout << "Ingrese la cant de personas admitidas en el local " << endl;
    cin  >> cant;



 return 0;
}