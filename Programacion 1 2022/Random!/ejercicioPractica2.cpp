/* 
Una ciudad desea implementar un sistema público de bicicletas gratuitas, y nos ha pedido ayuda en procesar algunos datos. 

El sistema se compone de estaciones automatizadas que permiten que los usuarios tomen y devuelvan las bicicletas. 

Se cuenta con el conjunto ya cargado de "ESTACIONES", donde de cada estación se conoce: 

• Id de la estación, es un número del 1 al 80 (actualmente hay 80 estaciones en total) 
• Nombre de la estación 
• La cantidad máxima de bicicletas que pueden estacionarse en la estación. 
• Cantidad de bicicletas disponibles inicialmente, es la cantidad de bicicletas al inicio del día. 

También contamos con el conjunto cargado de "USUARIOS", de cada usuario del sistema se conoce su DNI y su Nombre y Apellido. 

En esta etapa piloto las bicicletas prestadas deben devolverse como máximo una hora después del inicio del préstamo, sino el usuario se considera en infracción. 

La empresa encargada de administrar las estaciones generará diariamente la lista de los préstamos registrados (ordenados en forma ascendente por DNI). 

Cada préstamo se compone de: 

DNI del usuario 
    • Id estación retiro: Estación de la cual el usuario tomó la bici. 
    • Id estación devolución: Estación donde el usuario devolvió la bici.
Tiempo de uso: Cantidad de minutos que duró el préstamo. 
    a) Definir las estructuras necesarias para soportar los conjuntos precargados y solucionar lo pedido Realizar diagrama o codificación del procedimiento procesarPrestamos que a partir de los conjuntos de Estaciones, Usuarios y los Préstamos permita: 
    b) Actualizar el conjunto Estaciones para que refleje el estado final de cada estación. 
    c) Informar DNI, Nombre y Apellido y tiempo excedido total de los usuarios infractores. 
    d) Informar ld y Nombre de las estaciones con más retiros que devoluciones. 

Consideraciones: 
    • Los usuarios ya están cargados en forma ascendente por DNI. 
    • Las estaciones ya están cargadas y están todas de la 1 a la 80 en forma ascendente por Id. 
Restricciones:
    • Solo se puede recorrer los préstamos una vez. 
    • No es posible buscar secuencialmente un usuario ni una estación.

*/

#include <iostream>

using namespace std;

struct Estacion {
    int id; // Numero entre 1 al 80
    string nombre; 
    int cantMaximaBicicletas;
    int cantBicicletasDisp; // Es la cantidad de bicicletas al inicio del día. 
};

struct Usuario {
    int dni;
    string nombre;
    string apellido;
};

struct Prestamo {
    int dniUsuario;
    int idEstacionDev;
    int idEstacionRetiro;
    int tiempoUso;
};

int buscarUsuario(Usuario usuarios[], int cantUsuarios, int dniUsuario){
    int inicio = 0;
    int fin = cantUsuarios-1;

    while (inicio <= fin) // Mientras tenga valores para buscar
    {
        int medio = inicio + (fin-inicio) / 2 ;

        // Veo si me coincide el "medio" con el dato actual (ESTE ME VA A DEVOLVER LA POSICIÓN)
        if(usuarios[medio].dni == dniUsuario){
            return medio;
        }
        
        // Solamente cambio valores inicio/fin hasta poder encontrar en el paso anterior el dato.
        if(usuarios[medio].dni < dniUsuario){
            fin = medio - 1;
        }else{
            inicio = medio + 1;
        }
    
    }
    return -1;
}

void procesarPrestamos(Prestamo prestamos[], int cantPrestamos, Estacion estaciones[], int cantEstaciones, Usuario usuarios[], int cantUsuarios){

    /* Recorrer los prestamos y procesarlos */
    int i = 0;
    int key = 0;
    int tiempoExcedido = 0;
    int retiros[cantEstaciones] = {0};
    int devoluciones[cantEstaciones] = {0};

    // Mientras tenga prestamos que procesar
    while (i < cantPrestamos)
    {
        // Key DNI usuario.
        key = prestamos[i].dniUsuario;

        // Reinicio el contador de tiempo excedido cada vez que cambio de Usuario.
        tiempoExcedido = 0;

        // Mientras sea el mismo usuario... procesamos.
        while (i < cantPrestamos && key == prestamos[i].dniUsuario)
        {
            // Si se excedio en tiempo, sumamos en el "acumulador de tiempo excedido".
            if(prestamos[i].tiempoUso > 60){
                tiempoExcedido += (prestamos[i].tiempoUso - 60);
            }
                
            // Actualizar "stock" donde que estación se retiro una bici y a que estación se devolvió
            int idEstacionRetiro = prestamos[i].idEstacionRetiro;
            int idEstacionDev    = prestamos[i].idEstacionDev;

            // Accedemos por PUP (Posición única predecible).
            estaciones[idEstacionRetiro-1].cantBicicletasDisp--;
            estaciones[idEstacionDev-1].cantBicicletasDisp++;

            // Sabemos que cada préstamo tiene un retiro y una devolución, entonces en la estación correspondiente a la cual le quito o le agrego "stock" de bicicleta, le sumo 1.
            retiros[idEstacionRetiro-1]++;
            devoluciones[idEstacionDev-1]++;

            // Procesé un préstamo, incremento i++;
            i++;
        }

        // Si el usuario se excedió con el tiempo de entrega, informamos.
        if(tiempoExcedido > 0){
            cout << "Usuario con infraccion: \n";
            //Buscar el usuario por el DNI para informar los datos.
            int posUsuario = buscarUsuario(usuarios, cantUsuarios, prestamos[i].dniUsuario);
            cout << "DNI\tApellido\tNombre\tTiempo excedido";
            cout << usuarios[posUsuario].dni << "\t" << usuarios[posUsuario].apellido << "\t" << usuarios[posUsuario].nombre << "\t" << tiempoExcedido << "\n";
        }
    }

    // Imprimir estado actualizado de cada estación.
    cout << "Listado actualizado de estaciones: \n";
    cout << "Id\tNombre\tCantidad maxima\tCantidad disponible\n";
    for (int i = 0; i < cantEstaciones; i++)
    {
        cout << estaciones[i].id << "\t" << estaciones[i].nombre << "\t" << estaciones[i].cantMaximaBicicletas << "\t" << estaciones[i].cantBicicletasDisp << "\n";
    }

    // Una vez que procesamos todos los préstamos, comparamos la cantidad de retiros/devoluciones por estación de para informar cual tuvo mas retiros.
    for (int i = 0; i < cantEstaciones; i++)
    {
        // Retiros[i] == estaciones[i] -> que es una estación.
        if(retiros[i] > devoluciones[i]){
            cout << "La estacion " << estaciones[i].nombre << " tuvo mas retiros que devoluciones\n";
        }
    }
    
    return ;
}

int main() {

    int cantPrestamos  = 0; // Cantidad dada por el sistema.
    int cantEstaciones = 0; // Cantidad dada por el sistema.
    int cantUsuarios   = 0; // Cantidad dada por el sistema.

    Estacion estaciones[cantEstaciones];
    Prestamo prestamos[cantPrestamos];
    Usuario usuarios[cantUsuarios];

    procesarPrestamos(prestamos, cantPrestamos, estaciones, cantEstaciones, usuarios, cantUsuarios);

    return 0;
}