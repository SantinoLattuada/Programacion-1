#include <iostream>
using namespace std;

int aaaammdd(int &dia, int &mes, int &anio)
{
    int resultado;
    resultado = anio * 10000 + mes * 100 + dia;
    return resultado;
}

void diaDeNacimiento() 
{
    cout << "Ingrese su dia de nacimiento (2 digitos): " << endl;
    return;
}
void mesDeNacimiento()
{
    cout << "Ingrese su mes de nacimiento (2 digitos): " << endl;
    return;
}
void anioDeNacimiento()
{
    cout << "Ingrese su año de nacimiento (4 digitos): " << endl;
    return;
}
void sexo()
{
    cout << "Ingrese su sexo con M o F " << endl;
    return;
}

int main () {   
 int diaNacimiento, mesNacimiento, anioNacimiento;
 char sexoMoF;
 int nacimientosOctubre = 0;
 int nacimientosAntesJulio90 = 0;
 int fechaAAAAMMDD;
 int mujeresPrimavera = 0;
 int personaMayor, sexoPersonaMayor;
 int contadorWhile = 0;
    diaDeNacimiento();
    cin >> diaNacimiento;

    mesDeNacimiento();
    cin >> mesNacimiento;
 
    anioDeNacimiento();
    cin >> anioNacimiento;

    sexo();
    cin >> sexoMoF;

 while (diaNacimiento != 0)
 { 
     contadorWhile++;
    //1) Cuántos nacimientos hubo en el mes de octubre de todos los años.
    if (mesNacimiento == 10)
    {
        nacimientosOctubre++;
    }

    //2) Cuántos nacimientos hubo antes del 9 de julio de 1990.
    fechaAAAAMMDD = aaaammdd(diaNacimiento, mesNacimiento, anioNacimiento); ;

    if (fechaAAAAMMDD <= 19900709)
    {
        nacimientosAntesJulio90++;
    }

    //3) Cuántos nacimientos de mujeres hubo en la primavera del 1982.
    if (sexoMoF == "F" && fechaAAAAMMDD >=19820921 && fechaAAAAMMDD <=19821220)
    {
        mujeresPrimavera++;
    }
    
    //4) Sexo de la persona más vieja (solo existe una).
    if (contadorWhile == 1)
    {
        personaMayor = fechaAAAAMMDD;
        sexoPersonaMayor = sexoMoF;
    }
    else if (personaMayor < fechaAAAAMMDD)
    {
        personaMayor = fechaAAAAMMDD;
        sexoPersonaMayor = sexoMoF;
    }
    diaDeNacimiento();
    cin >> diaNacimiento;

    mesDeNacimiento();
    cin >> mesNacimiento;
 
    anioDeNacimiento();
    cin >> anioNacimiento;

    sexo();
    cin >> sexoMoF; 

 }

 cout << "El el mes de octubre hubo " << nacimientosOctubre << " nacimientos " << endl;
 cout << "Antes del 9 de julio de 1990 hubo " << nacimientosAntesJulio90 << " nacimientos " << endl;
 cout << "En la primavera del 1982 nacieron " << mujeresPrimavera << " mujeres" << endl;
 cout << "El sexo de la persona mas vieja es: " << sexoPersonaMayor << endl;
 system("pause"); 
 return 0;
}