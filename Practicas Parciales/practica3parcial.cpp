//datos de entrada direccion (f, b, l o r) y cantidad de metros en direccion x
// bateria 1000
//while bateria == 0 || direccion == 'e'

//datos de salida
//a. Cantidad total de metros recorridos.
//b. Cantidad total de metros avanzados.
//c. La dirección en la que se recorrió el trayecto más largo.
#include <iostream> 
using namespace std;



void datoDireccion(string mensaje, char &a)
{
    cout << mensaje << endl;
    cin  >> a;
    return;
}
void datoMetros(string mensaje, int &a)
{
    cout << mensaje << endl;
    cin  >> a;
    return;
}

int main(){

 int bateria = 1000;
 char direccion;
 int cantidadMetros;
 int totalMetrosRecorridos = 0;
 int cantidadTotalMetrosAvanzados = 0;
 int mayorCantidadDeMetrosRecorridos = 0;
 int direccionEnQueSeRecorrioTrayectoLargo = 0;
 int contadorVuelta = 0;

 datoDireccion("Ingrese en que direccion quiere ir. (f=Adelante, b=Atras, l=Izquierda y r=Derecha ", direccion);

 while (bateria > 0 && direccion != 'e')
 {  
    contadorVuelta++;
    datoMetros("Ingrese la cantidad de metros a recorrer en dicha direccion ", cantidadMetros);

    //bateria
    if (cantidadMetros % 2 == 0)
    {
        bateria = bateria - (cantidadMetros / 4);
    }
    else if (cantidadMetros % 2 != 0)
    {
        bateria = bateria - (cantidadMetros / 3);
    }
    
    //metrosRecorridos = izquierda - o derecha +
    if (direccion == 'r')
    {
        totalMetrosRecorridos = totalMetrosRecorridos + cantidadMetros;
    }
    else if (direccion == 'l')
    {
        totalMetrosRecorridos = totalMetrosRecorridos - cantidadMetros;
    }
    
    //cantidad de metros avanzados
    if (direccion == 'f')
    {
        cantidadTotalMetrosAvanzados = cantidadTotalMetrosAvanzados + cantidadMetros;
    }
    else if (direccion == 'b')
    {
        cantidadTotalMetrosAvanzados = cantidadTotalMetrosAvanzados - cantidadMetros;
    }
    
    //direccion en la que se recorrio el trayecto mas largo
    if (contadorVuelta == 1)
    {
        mayorCantidadDeMetrosRecorridos = cantidadMetros;
        direccionEnQueSeRecorrioTrayectoLargo = direccion;
    }
    else if (mayorCantidadDeMetrosRecorridos < cantidadMetros)
    {
        mayorCantidadDeMetrosRecorridos = cantidadMetros;
        direccionEnQueSeRecorrioTrayectoLargo = direccion;
    }
    


    datoDireccion("Ingrese en que direccion quiere ir. (f=Adelante, b=Atras, l=Izquierda y r=Derecha ", direccion);
 }
    //a
    cout << "La cantidad total de metros recorridos fueron: " << totalMetrosRecorridos << endl;
    //b
    cout << "La cantidad total de metros avanzados fueron: " << cantidadTotalMetrosAvanzados << endl;
    //c
    cout << "La dirección en la que se recorrió el trayecto más largo fue: " << direccionEnQueSeRecorrioTrayectoLargo << endl;


    system("pause");
    return 0;
}