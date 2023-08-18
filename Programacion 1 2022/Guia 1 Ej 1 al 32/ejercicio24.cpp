//a) por cada sublote el promedio de valores
//b) el total de sublotes procesados
//c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición relativa del mismo dentro
//del sublote
//d) valor mínimo de cada sublote



#include <iostream>
using namespace std;

void mensaje()
{
    cout << "Ingrese un numero" << endl;
    return;
}


int main () {
 system("cls");

 int numero;
 int contadorSublotes = 0;
 float sumaSublote = 0, contadorSublote = 0;
 float promedio;
 int contadorTotalSublotesProcesados = 0;
 int valorMaximoConjunto;
 int loteDondeSeEncuentraValorMaximo, posicionRelativaDentroDelSublote;
 int valorMinimoCadaSublote;

 mensaje();
 cin >> numero;


 while (numero >= 0)
 {
    if (numero == 0)
    {
        promedio = sumaSublote / contadorSublote;

        //A
        cout << "El promedio del sublote es: " << promedio << endl;
        //D
        cout << "El valor minimo del sublote es: " << valorMinimoCadaSublote << endl;


        sumaSublote = 0;
        contadorSublote = 0;
        valorMinimoCadaSublote = 0;
        contadorTotalSublotesProcesados++;
    }
    sumaSublote = sumaSublote + numero;
    contadorSublote++;

    if (contadorSublote == 1)
    {
        valorMaximoConjunto = numero;
        valorMinimoCadaSublote = numero;
    }
    else if (valorMaximoConjunto < numero)
    {
        valorMaximoConjunto = numero;
        loteDondeSeEncuentraValorMaximo = contadorTotalSublotesProcesados;
        posicionRelativaDentroDelSublote = contadorSublote;
    }
    if (valorMinimoCadaSublote > numero)
    {
        valorMinimoCadaSublote = numero;
    }
    
    
    

  mensaje();
  cin >> numero;

 }
 
 //B
 cout << "El total de sublotes procesados es: " << contadorTotalSublotesProcesados << endl;
 //C
 cout << "El valor maximo del conjunto es: " << valorMaximoConjunto << "Se encontro en el sublote: " << loteDondeSeEncuentraValorMaximo << "Y la posicion relativa es: " << posicionRelativaDentroDelSublote << endl;


 system("pause");
 return 0;
}