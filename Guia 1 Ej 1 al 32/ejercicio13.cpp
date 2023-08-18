  #include <iostream>
  using namespace std;

  int main ()
  { system("cls");
    int n, m, sumatoria, mayor, menor;
    
    cout << "Ingrese n";
    cin  >> n;

    cout << "Ingrese m";
    cin  >> m;
    
    sumatoria = 0;

    if ( m<n ) 
    {

      menor = m;
      mayor = n;

    }
    else 
    {

      mayor = m;
      menor = n;

      }

    for (int i = 0; i <= menor -1 ; i + 1)
    {
        sumatoria = sumatoria += mayor;
    }


      cout << "El resultado de N x M es: " << sumatoria;


  return 0;
  }