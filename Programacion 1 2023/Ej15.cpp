/*Ej. MI-15: Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. De cada infracción se
tomó nota de los siguientes datos:
- Tipo de Infracción (1, 2, 3, ó 4)
- Motivo de la infracción
- Valor de la multa
- Gravedad de la infracción (‘L’,‘M’, ‘G’)
Se pide informar al final del proceso:
• Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
• La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.*/

#include <iostream>
using namespace std;

int main () {

    //Declaro los datos a pedir al usuario
    int tipoInfraccion;
    string motivoInfraccion;
    float valorMulta;
    char gravedadInfraccion;

    //Declaro e inicializo acumuladores y el contador
    float totalMultaL = 0;
    float totalMultaM = 0;
    float totalMultaG = 0;

    int mayorGravedad = 0;

    for (int i = 0; i < 20; i++){
        cout << "Tipo de Infracción (1, 2, 3, ó 4) " << endl;
        cin  >> tipoInfraccion;     

        cout << "Motivo de la infracción " << endl;
        cin  >> motivoInfraccion;

        cout << "Valor de la multa " << endl;
        cin  >> valorMulta;

        cout << "Gravedad de la infracción ('L','M', 'G') " << endl;
        cin  >> gravedadInfraccion;

        if (gravedadInfraccion == 'L'){
            totalMultaL += valorMulta;
        }
        else if (gravedadInfraccion == 'M'){
            totalMultaM += valorMulta;
        }
        else{
            totalMultaG += valorMulta;
            if (tipoInfraccion == 3 || tipoInfraccion == 4){
                mayorGravedad++;
            }
            
        }
    }
    
    cout << "El total de multa de gravedad L es: " << totalMultaL << endl;
    cout << "El total de multa de gravedad M es: " << totalMultaM << endl;
    cout << "El total de multa de gravedad G es: " << totalMultaG << endl;

    if (mayorGravedad > 3){
        cout << "Clausurar Fabrica " << endl;
    }

 return 0;
}