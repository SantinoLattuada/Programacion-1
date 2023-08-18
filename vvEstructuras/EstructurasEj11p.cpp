#include <iostream>
using namespace std;

struct Episodio{
    int idSerie;
    int numTemporada;
    int cantDescargas;
    string tituloEpisodio;
    int numEpisodio;
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
        cin  >> vec[i].cantDescargas;
        cout << "Ingrese titulo del capitulo " << endl;
        cin  >> vec[i].tituloEpisodio;
        cout << "Ingrese numero de episodio" << endl;
        cin  >> vec[i].numEpisodio;
        cout << "Ingrese ultima fecha de descarga " << endl;
        cin  >> vec[i].fechaUltimaDescarga;
    }
    return;
}
void imprimirEpisodio(Episodio vec[], int cant){
    int i = 0;
    //Inicio contador y acumulador
    int cantEpisodioXTemp = 0;
    int totalDescargasXTemp = 0;

    int totalEpisodiosXSerie = 0;
    int totalDescargasDeLaSerie = 0;
    int totalDeSeries = 0;
    while (i < cant){
        int keySerie;
        keySerie = vec[i].idSerie;

        //Inicio contador y acumulador
        cout << "Serie: " << keySerie << endl;
        while (i < cant && keySerie == vec[i].idSerie){ //misma serie
            int keyTemporada;
            keyTemporada = vec[i].numTemporada;

            cout << "Temporada: " << keyTemporada << endl;

            cout << "Nro. episodio \t\t Tit. Episodio \t\t Cant. Descargas \t\t Ult. descarga" << endl;
            while (i < cant && keySerie == vec[i].idSerie && keyTemporada == vec[i].numTemporada){ //misma temporada
                cout << vec[i].numEpisodio << "\t\t" << vec[i].tituloEpisodio << "\t\t" << vec[i].cantDescargas << "\t\t" << vec[i].numTemporada << endl;
                cantEpisodioXTemp++;
                totalDescargasXTemp+= vec[i].cantDescargas;
                i++;
            }
            totalEpisodiosXSerie += cantEpisodioXTemp;
            totalDescargasDeLaSerie += totalDescargasXTemp;

        }
        totalDeSeries++;
        cout << "Cant total de episodios de la serie: " << totalEpisodiosXSerie << endl;
        cout << "Total de descargas de la serie: " << totalDescargasDeLaSerie << endl;
    }
    cout << "Total general de series " << totalDeSeries << endl;
}
int main(){
    int cant;
    pedirDatos("Ingrese cantidad de episodios ", cant);

    Episodio vector[cant];
    llenar(vector, cant);

    imprimirEpisodio(vector, cant);

    return 0;
}