/*Crear una funcion que sume una unidad a un valor
ingresado hasta que sume 10. Condicion no se puede
poner valores mayores a 10 sin usar for ni while*/
# include <iostream>
using namespace std;

void functionRecursiva(int &numero){
    if (numero<10){
        numero += 1; // numero = numero +1
        functionRecursiva(numero);
    }
}

int main(){
    int num;
    cin>>num;
    functionRecursiva(num);
    cout<<num<<endl;
    return 0;
}

/*#include <iostream>
using namespace std;

4) Realizar una función que reciba dos valores enteros positivos y devuelva la multiplicación de ambos por sumas
sucesivas (sin usar la multiplicación!):
a. Realizar la función utilizando ciclos de iteración
b. Realizar la función utilizando una función recursiva*/

/*void funcionRecursiva(int &num1, int &num2, int sumaAmbos)
{   int multiplicacion;
    multiplicacion = num1 * num2;

    if (num1 + num2 != multiplicacion)
    {
        num1 = num1 + 1;
        num2 = num2 + 1;
        funcionRecursiva(num1, num2);
    }
    
    

    
}
int main () {
 
 int numero1 = 5;
 int numero2 = 4;
 int sumaAmbos = 0;
 funcionRecursiva(numero1, numero2, sumaAmbos);



 system("pause");
 return 0;
}*/
