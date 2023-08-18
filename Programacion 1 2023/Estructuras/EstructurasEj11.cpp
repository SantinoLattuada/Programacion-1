/*Ej. 11: Una aplicación para descargas de Series posee la información en un conjunto de datos Episodios,
con un registro por cada episodio, ordenado ascendente por Id_Serie y Número de temporada, con el
siguiente diseño:
1) Id_Serie ( 9 dígitos )
3) Número de temporada (1..12)
5) Cantidad de descargas (long)
2) Título del episodio (cadena)
4) Número de episodio (int)
6) Fecha de última descarga (aaaammdd)
Se pide desarrollar la metodología necesaria para escribir un algoritmo emita el siguiente listado:*/

#include <iostream>
using namespace std;

struct Episodios{
    int idSerie;
    int numTemporada;
    int cantDescargas;
    string tituloEpisodio;
    int numEpisodio;
    int fechaUltDescarga; //AAAAMMDD
};
void pedirDatos(int &n){
    cout << "Ingrese cantidad de episodios" << endl;
    cin  >> n << endl;

}
void llenar(Episodios vec[], int cantEpisodios){
    for (int i = 0; i < cantEpisodios; i++){
        cout << "Ingrese Id de serie " << endl;
        cin  >> vec[i].idSerie;

        cout << "Ingrese num de temp " << endl;
        cin  >> vec[i].numTemporada;

        cout << "Ingrese cant descargas " << endl;
        cin  >> vec[i].cantDescargas;

        cout << "Ingrese titulo de episodio " << endl;
        cin  >> vec[i].tituloEpisodio;

        cout << "Ingrese num episodio " << endl;
        cin  >> vec[i].numEpisodio;

        cout << "Ingrese fecha ult descarga " << endl;
        cin  >> vec[i].fechaUltDescarga;
    }
    
}
void imprimirFecha(Episodios vec[], int i){
    int AAAAMMDD = vec[i].fechaUltDescarga;
    int dia = AAAAMMDD % 100;
    int mes = (AAAAMMDD % 10000) / 100;
    int anio = AAAAMMDD / 10000;
    cout << dia << "/" << mes << "/" << anio << endl;
    return;
}
void imprimirSeries(Episodios vec[], int cant){
    int i = 0;
    int key;
    int key2;

    int totalDeSeries = 0;

    while (i < cant){
        cout << "Serie: " << vec[i].idSerie << endl;
        key = vec[i].idSerie;

        int cantTotalEpSerie = 0;
        int descargasXSerie = 0;

        while (i < cant && key == vec[i].idSerie){
            cout << "Temporada: " <<  vec[i].numTemporada;
            key2 = vec[i].numTemporada;

            int cantTotalEpTemp = 0;
            int descargasXTEMP = 0;
            cout << "N de episodio \t Titulo episodio \t Cant descargas \t Fecha ult descarga " << endl;

            while (i < cant && key == vec[i].idSerie && key2 == vec[i].numTemporada){
                cout << vec[i].numEpisodio << "\t" << vec[i].tituloEpisodio << "\t" << vec[i].cantDescargas << "\t" << imprimirFecha(vec, i) << endl;
                cantTotalEpTemp++;
                descargasXTEMP += vec[i].cantDescargas;
                i++;
            }
            cout << "Cant total de Episodios temporada: " << cantTotalEpTemp << endl;
            cout << "Total descargas de la temporada: " << descargasXTEMP << endl;

            cantTotalEpSerie += cantTotalEpTemp;
            descargasXSerie += descargasXTEMP;
        }
        cout << "Cant total de episodios de la serie: " << cantTotalEpSerie << endl;
        cout << "Total descargas de la serie: " << descargasXSerie << endl; 
        totalDeSeries++;
    }
    cout << "Total general de Series: " << totalDeSeries << endl;   
}
int main () {
    int cantEpisodios;
    pedirDatos(cantEpisodios);

    Episodios episodio[cantEpisodios];
    llenar(episodio, cantEpisodios);

    imprimirSeries(episodio, cantEpisodios);

 return 0;
}