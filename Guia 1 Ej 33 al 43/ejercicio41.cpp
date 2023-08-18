//Una bodega quiere lanzar una oferta para terminar con el stock de dos productos. Para ello cuenta con B
//cantidad de cajas de vino blanco y T cantidad de cajas de vino tinto. Desea armar la mayor cantidad posible de paquetes
//con la oferta y que todos los paquetes tengan igual cantidad de cajas de vino blanco y de vino tinto.
//Se pide informar cuántos paquetes se podrán armar como máximo, y cuántas cajas de vino blanco y cuantas de vino tinto
//contendrán cada uno.
//Utilice las funciones desarrolladas en ejercicios anteriores
#include <iostream>
using namespace std;

int maxComDiv (int a, int b)
{   
    int mcd;
    int resto = a % b;

    while (resto != 0)
    {
        resto = a % b;

        if (resto == 0)
        {
            mcd = b;
        }
        else if (resto != 0)
        {
            a = b;
            b = resto;
        }
        
       
    }
    mcd = b;
    return mcd;
}

int main () {
 int VinoBlanco, VinoTinto, cantOfertas;
 int cantidadVinoBlanco = 0, cantidadVinoTinto = 0;
 cout << "Ingrese la cantidad de cajas de vino blanco" << endl;
 cin  >> VinoBlanco;

 cout << "Ingrese la cantidad de cajas de vino tinto" << endl;
 cin  >> VinoTinto;

 cantOfertas = maxComDiv(VinoBlanco, VinoTinto);
 cantidadVinoBlanco = VinoBlanco / maxComDiv(VinoBlanco, VinoTinto);
 cantidadVinoTinto = VinoTinto / maxComDiv(VinoBlanco, VinoTinto);

 cout << "Se van a realizar " << cantOfertas << "." << " Cada oferta va a tener " << cantidadVinoBlanco << " de vino blanco " << " y " << cantidadVinoTinto << " de vino tinto " << endl;

 system("pause");
 return 0;
}