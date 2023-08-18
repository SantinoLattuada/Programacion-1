#include <iostream>
using namespace std;

int main () {
 system("cls");

 int tipo, clausura;
 char motivo, gravedad, L, M, G;
 float totalLeve, totalMedia, totalGrave, valor;
 
  
  for (int i = 0; i < 20; i++)
  {
      cout << "Ingrese el tipo de infracción";
      cin  >> tipo;

      cout << "Ingrese el motivo de la infracción";
      cin  >> motivo;

      cout << "Ingrese el valor de la infracción";
      cin  >> valor;

      cout << "Ingrese la gravedad de la infracción con l en caso de leve, m en caso de media y g en caso de grave";
      cin  >> gravedad;
      
      switch (gravedad)
      {
      case 'L':
          totalLeve = totalLeve + valor;
          break;
      case 'M':
          totalMedia = totalMedia + valor;
          break;
      default:
          totalGrave = totalGrave + valor;
          
          if (tipo >= 3)
          {
              clausura = clausura + 1;
          }
          break;
         }



    }
  
     cout << "Los valores totales son: " << totalLeve << " media: " << totalMedia << " grave: " << totalGrave;
   
     if (clausura >= 3)
     {
         cout << "Clasurar fabrica";
     }
     




 return 0;
}