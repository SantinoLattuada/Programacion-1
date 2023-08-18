/*Una ciudad desea implementar un sistema público de bicicletas gratuitas, y nos ha pedido ayuda en procesar 
algunos datos. 
El sistema se compone de estaciones automatizadas que permiten que los usuarios tomen y devuelvan las bicicletas. Se cuenta con el conjunto ya cargado de Estaciones, 
donde de cada estación se conoce: 
- Id de la estación, es un número del 1 al 80 (actualmente hay 80 estaciones en total) 
- Nombre de la estación 
- La cantidad máxima de bicicletas que pueden estacionarse en la estación. 
- Cantidad de bicicletas disponibles inicialmente, es la cantidad de bicicletas al inicio del día. 
También contamos con el conjunto cargado de Usuarios, de cada usuario del sistema se conoce su DNI y su Nombre y Apellido.

!!!En esta etapa piloto las bicicletas prestadas deben devolverse como máximo una hora después del inicio del préstamo, sino el usuario se considera en infracción!!! 
La empresa encargada de administrar las estaciones generará diariamente la lista de los préstamos registrados (ordenados en forma ascendente por DNI). 
Cada préstamo se compone de: 
• DNI del usuario 
• Id estación retiro: Estación de la cual el usuario tomó la bici. 
• Id estación devolución: Estación donde el usuario devolvió la bici.
• Tiempo de uso: Cantidad de minutos que duró el préstamo.

a. Definir las estructuras necesarias para soportar los conjuntos precargados y solucionar lo pedido 
Realizar diagrama o codificación del procedimiento procesarPrestamos  que a partir de los conjuntos de Estaciones, Usuarios y los Préstamos 
permita: 
b. Actualizar el conjunto Estaciones para que refleje el estado final de cada estación. 
C. Informar DNI, Nombre y Apellido y tiempo excedido total de los usuarios infractores. 
d. Informar ld y Nombre de las estaciones con más retiros que devoluciones. 

Consideraciones: 
- Los usuarios ya están cargados en forma ascendente por DNI. 
- Las estaciones ya están cargadas y están todas de la 1 a la 80 en forma ascendente por Id. Restricciones 
• Solo se puede recorrer los préstamos una vez. 
• No es posible buscar secuencialmente un usuario ni una estación.*/


#include <iostream>
using namespace std;

struct Estaciones{
    int idEstacion;
    string nombreEstacion;
    int cantMaxBicis;
    int cantBicisDisp;
};
struct Usuarios{
    int dni;
    string nombre;
    string apellido;
};
struct Prestamos{
    int dniUsuario;
    int idEstacionRetiro;
    int idEstacionDevolucion;
    int tiempoUso;
};
void procesarPrestamos(Prestamos prestamo[], int cantPrestamo, Usuarios usuario[], int cantUsuario, Estaciones estacion[], int cantEstacion){
    /*b. Actualizar el conjunto Estaciones para que refleje el estado final de cada estación. 
    C. Informar DNI, Nombre y Apellido y tiempo excedido total de los usuarios infractores. 
    d. Informar ld y Nombre de las estaciones con más retiros que devoluciones. 
    Consideraciones: 
    - Los usuarios ya están cargados en forma ascendente por DNI. 
    - Las estaciones ya están cargadas y están todas de la 1 a la 80 en forma ascendente por Id. Restricciones 
    • Solo se puede recorrer los préstamos una vez. 
    • No es posible buscar secuencialmente un usuario ni una estación.*/

    //Declaro e inicializo contadores y acumuladores
    int i = 0;
    int exceso;

    int retiros[cantEstacion] = {0};
    int devoluciones[cantEstacion] = {0};
    //Ciclo while mientras tenga cantidad de prestamos para procesar
    while(i < cantPrestamo){
        //Armo la key para el dni de usuario
        int keydni = prestamo[i].dniUsuario;

        while(i < cantPrestamo && keydni == prestamo[i].dniUsuario){
            //b) Actualizo el conjunto de estaciones
            estacion[prestamo[i].idEstacionRetiro-1].cantBicisDisp--;
            estacion[prestamo[i].idEstacionDevolucion-1].cantBicisDisp++;

            //
            retiros[prestamo[i].idEstacionRetiro-1]++;
            devoluciones[prestamo[i].idEstacionDevolucion-1]++;

            //c) Analizo si el usuario esta en infraccion
            if (prestamo[i].tiempoUso > 60){
                exceso += prestamo[i].tiempoUso - 60;
            }
            i++;
        }
        //Si es infractor, imprimo los datos que me piden
        if (exceso > 0){
            cout << "Usuario con infraccion: " <<endl;
            int infractor = buscarUsuario(usuario, cantUsuario, prestamo[i].dniUsuario);
            cout << "Dni\tNombre\tApellido\texceso\n ";
            cout <<  usuario[infractor].dni << "\t" << usuario[infractor].nombre << "\t" << usuario[infractor].apellido << "\t" << exceso << endl;
        }

    }

    //b) Actualizo estado actualizado de cada estacion
    cout << "Listado actualizado de estaciones: \n";
    cout << "Id\tNombre\tCantidad maxima\tCantidad disponible\n";
    for (int i = 0; i < cantEstacion; i++){
        cout << estacion[i].nombreEstacion << "\t" << estacion[i].cantMaxBicis << "\t" << estacion[i].cantBicisDisp << endl;
    }
    

    // d)Veo si tuvo mas retiros que devoluciones
    for (int i = 0; i < cantEstacion; i++){
        if (retiros[i] > devoluciones[i] ){
            cout << "La estacion: " << estacion[i].nombreEstacion << "Tuvo mas retiros que devoluciones " << endl;
        }
        
    }
    
}
int buscarUsuario(Usuarios vec[], int cant, int dniUsuario){
    int inicio = 0;
    int fin = cant - 1;
    int medio;

    while (inicio <= fin){
        medio = inicio + (fin - inicio) / 2;
        if (vec[medio] == dniUsuario){
            return medio;
        }
        else{
            if (vec[medio] < dniUsuario){
                fin = medio - 1;
            }
            else{
                inicio = medio + 1;
            }
        }
    }
    return 0;
}



int main () {
 
 return 0;
}