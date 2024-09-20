#include <iostream>
using namespace std;

//Funcion
void ingresoNotas(double &nota, const string& mensaje){
    while (true){
        cout << mensaje;
        cin >> nota;
        if (nota >=1 && nota <= 10){
            break;
        }else{
            cout << "La nota ingresada esta fuera del rango....\n";
        }
    }
}

//Main
int main (){
    double deb,trab,prue,exa,res;

    //Ingreso de valores

    ingresoNotas(deb,"Ingrese la nota de deberes: ");

    ingresoNotas(trab,"Ingrese la nota de trabajos: ");

    ingresoNotas(prue,"Ingrese la nota de pruebas: ");

    ingresoNotas(exa,"Ingrese la nota de examen: ");

    //OPERACION
    res = (deb + trab + prue + exa)/4;
    if (res >= 7 && res <=10){
        cout << endl << endl;
        cout << "    " << res << " -----> APROBADO";
    }else if (res >= 5 && res < 7){
        cout << endl << endl;
        cout << "    " << res <<" -----> SUSPENDIDO";
    }else{
        cout << endl << endl;
        cout << "    " << res << " -----> REPROBADO";
    }

    return 0;
}
