/*Ej. 11: Una aplicación para descargas de Series posee la información en un conjunto de datos Episodios,
con un registro por cada episodio, ordenado ascendente por Id_Serie y Número de temporada, con el
siguiente diseño:
1) Id_Serie ( 9 dígitos )
3) Número de temporada (1..12)
5) Cantidad de descargas (long)
2) Título del episodio (cadena)
4) Número de episodio (int)
6) Fecha de última descarga (aaaammdd)
Se pide desarrollar la metodología necesaria para escribir un algoritmo emita el siguiente listado:  */
#include <iostream>
using namespace std;

struct Episodio{
    int idSerie;
    int numTemporada;
    long descargas;
    string titulo;
    int numero;
    int fechaUltimaDescarga;
};
void pedirDatos(string mensaje, int &val){
    cout << mensaje << endl;
    cin  >> val;
    return;
}
void llenar(Episodio vec[], int cant){
    for (int i = 0; i < cant; i++){
        cout << "Ingrese el id de la serie " << endl;
        cin  >> vec[i].idSerie;
        cout << "Ingrese numero de temporada " << endl;
        cin  >> vec[i].numTemporada;
        cout << "Ingrese numero de descargas " << endl;
        cin  >> vec[i].descargas;
        cout << "Ingrese titulo del capitulo " << endl;
        cin  >> vec[i].titulo;
        cout << "Ingrese numero " << endl;
        cin  >> vec[i].numero;
        cout << "Ingrese ultima fecha de descarga " << endl;
        cin  >> vec[i].fechaUltimaDescarga;
    }
    return;
}
void corteControl(Episodio vec[], int n){
    int i = 0;
    int keySerie;
    int keyTemporada;
    int totalGeneralSeries = 0;
    while(i < n){
        keySerie = vec[i].idSerie;

        cout << "Serie: " << keySerie << endl;
        int cantTotalEpSerie = 0;
        int totalDescargasSerie = 0;
        totalGeneralSeries = 0;

        while (i < n && keySerie == vec[i].idSerie){
            keyTemporada = vec[i].numTemporada;
            totalGeneralSeries++;

            cout << "Temporada: " << keyTemporada << endl;
            cout << "N Episodio \t Tit Episodio \t cant descargas \t f ult desc " << endl;

            int episodiosTemporada = 0;
            int totalDescargasTemporada = 0;

            while(i < n && keySerie == vec[i].idSerie && keyTemporada == vec[i].numTemporada){
                cout << vec[i].numero << "\t\t" << vec[i].titulo << "\t\t" << vec[i].descargas << "\t\t" << vec[i].fechaUltimaDescarga << endl;

                episodiosTemporada++;
                totalDescargasTemporada += vec[i].descargas;

                cantTotalEpSerie++;
                totalDescargasSerie += totalDescargasTemporada;
                i++;
            }
            cout << endl;
            cout << "Cant de episodios de la temporada: " << episodiosTemporada << endl;
            cout << "Total Descargas de la temporada: " << totalDescargasTemporada << endl;
        }
        cout << endl;
        cout << "Cantidad de episodios de la serie: " << cantTotalEpSerie << endl;
        cout << "Total descargas de la serie: " << totalDescargasSerie << endl;
    }
    cout << endl;
    cout << "Total general Series: " << totalGeneralSeries << endl;
    return;
}
int main () {
    //Declaro y pido cantidad de episodios
    int cantEpisodios;
    pedirDatos("Ingrese cantidad de episodios ", cantEpisodios);

    //Declaro y lleno vector
    Episodio episodios[cantEpisodios];
    llenar(episodios, cantEpisodios);

    corteControl(episodios, cantEpisodios);

 return 0;
}