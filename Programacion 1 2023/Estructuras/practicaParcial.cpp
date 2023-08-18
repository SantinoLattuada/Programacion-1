#include <iostream>
using namespace std;

struct FICHADAS_MES{
    int legajo;
    int fecha; //AAAAMMDD
    float horaEntada; //HHMM
    float horaSalida; //HHMM
};
struct FICHADA_DIARIA{
    int fecha;
    int legajo;
    int hora; //HHMM
    char evento; // "E" o "S"
};
void burbuejoMejorado(FICHADA_DIARIA arr[], int m)
{
    int aux;
    int i = 0;
    bool ordenado = false;
    while (i < m && !ordenado)
    {
        ordenado = true; // Arranco asumiendo que si esta ordenado
        // Los ultimos i elementos ya estan ordenados
        for (int j = 0; j < m - i - 1; j++)
        {
            if (arr[j].legajo > arr[j + 1].legajo)
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                ordenado = false; // Cambio el flag si hice un swap
            }
        }
        i++;
    }
}
void apareo(FICHADAS_MES vec[], int n, FICHADA_DIARIA vec2[], int m, FICHADAS_MES vec3[], int o){
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m){
        if (vec[i].legajo < vec2[j].legajo){
            vec3[k].legajo = vec[i].legajo;
            vec3[k].fecha = vec[i].fecha;
            vec3[k].horaEntada = vec[i].horaEntada;
            vec3[k].horaSalida = vec[i].horaSalida;
            i++;
        }
        else{
            vec3[k].legajo = vec[j].legajo;
            vec3[k].fecha = vec[j].fecha;
            calcularHora(vec2, j, vec3, k);
            j + 2;
        }
        k++;
    }
    while (i < n){
        vec3[k].legajo = vec[i].legajo;
        vec3[k].fecha = vec[i].fecha;
        vec3[k].horaEntada = vec[i].horaEntada;
        vec3[k].horaSalida = vec[i].horaSalida;
        i++;
        k++;
    }
    while (j < m){
        vec3[k].legajo = vec[j].legajo;
        vec3[k].fecha = vec[j].fecha;
        calcularHora(vec2, j, vec3, k);
        j + 2;
        k++;
    }
    
}
void calcularHora(FICHADA_DIARIA vec2[], int j, FICHADAS_MES vec3[], int k){
    int horaEntrada;
    int HoraSalida;

    if (vec2[j].evento = 'E'){
        horaEntrada = vec2[j].hora;
        HoraSalida = vec2[j + 1].hora;
        vec3[k].horaEntada = horaEntrada;
        vec3[k].horaSalida = HoraSalida;

    }
    else{
        HoraSalida = vec2[j].hora;
        horaEntrada = vec2[j + 1].hora;
        vec3[k].horaSalida = HoraSalida;
        vec3[k].horaEntada = horaEntrada;
    }
}
void horaMinutos(FICHADAS_MES vec[], int n,){
    float hh1;
    float hh2;
    float mm1;
    float mm2;
    float totalMinutos1;
    float totalMinutos2;
    for (int i = 0; i < n; i++){
        hh1 = vec[i].horaEntada / 100; //Extraigo Hora
        hh2 = vec[i].horaSalida % 100; //Extraigo Minutos
        mm1 = vec[i].horaSalida / 100; //Extraigo Hora
        mm2 = vec[i].horaSalida % 100; //Extraigo Minutos

        totalMinutos1 = (hh1 * 60) + hh2;
        vec[i].horaEntada = totalMinutos1;

        totalMinutos2 = (mm1 * 60) + mm2;
        vec[i].horaSalida = totalMinutos2;
    }
}
void horaMinutos2(FICHADA_DIARIA vec[], int m){
    float hh;
    float mm;

    float totalMinutos;
    for (int i = 0; i < m; i++){
        hh = vec[i].hora / 100; //Extraigo Hora
        mm = vec[i].hora % 100; //Extraigo Min

        totalMinutos = (hh * 60) + mm;
        vec[i].hora = totalMinutos;
    }
    

}
void imprimirListado(FICHADAS_MES vec[], int o){
    int key;
    int i = 0;
    int valorHora = 500;

    int horas;
    float jornal;
    float remuneracion;
    float totalRemuneraciones = 0;
    int cantEmpleados = 0;

    while (i < o){
        cout << "Legajo: " << vec[i].legajo << endl;
        cout << "FECHA \t HORAS TRABAJADAS \t JORNAL " << endl;
        key = vec[i].legajo;
        
        remuneracion = 0;
        while (i < o && key = vec[i].legajo){
            horas = calcularHoras(vec, i);
            jornal = calcularJornal(horas, valorHora);

            cout << imprimirFecha(vec, i) << horas << jornal; 
            
            remuneracion += jornal;
            i++;
        }
        cantEmpleados++;
        cout << "REMUNERACIÓN: " << remuneracion << endl;
        totalRemuneraciones += remuneracion;
    }
    cout << "Cantidad empleados: " << cantEmpleados;
    cout << "Total remuneraciones " << totalRemuneraciones;
    cout << "Remuneracion promedio " << totalRemuneraciones / cantEmpleados;
}
float calcularHoras(FICHADAS_MES vec[], int i){
    float horaEntrada = vec[i].horaEntada;
    float horaSalida = vec[i].horaSalida;

    float hora = (horaSalida - horaEntrada) / 60;

    return hora;
}
float calcularJornal(float horas, int valorHora){
    float jornal = horas * valorHora;
    return jornal;
}
void imprimirFecha(FICHADAS_MES vec[], int i){
    int AAAAMMDD = vec[i].fecha;
    cout << AAAAMMDD % 100 << "/" << (AAAAMMDD % 10000) / 100 << "/" << AAAAMMDD / 10000;
    return;
}
int main () {
    int n = 5;
    int m = 5;

    FICHADAS_MES vec[n];
    FICHADA_DIARIA vec2[m];

    //Mandamos el vector de fichada diaria a ordenar por numero de legajo
    burbuejoMejorado(vec2, m);

    //Creamos el tercer vector de estructura de fichada mes
    int o = n + m;
    FICHADAS_MES vec3[o];

    //Pasamos la hora de ambos vectores a minutos
    horaMinutos(vec, n);
    horaMinutos2(vec2, m);


    //Llamamos al apareo
    apareo(vec, n, vec2, m, vec3, o);

    //Imprimimos lo que nos pide el ejercicio
    imprimirListado(vec3, o);


 return 0;
}