#include <iostream>
#include "Definicioness.h"
#include "Analista.h"
#include "Analista_Senior.h"
#include "Analista_Junior.h"


using namespace std;

int main() {

    Numero1 opcion;
    Numero1 Codigo, SB, HE, TH, NA, PA;
    Letras Nombre;

    Analista *pAnalista = nullptr;

    do {
        cout << "Seleccione el tipo de Analista " << endl;
        cout << "Analista Senior: (1)" << endl;
        cout << "Analista Junior: (2)" << endl;
        cin >> opcion;
    }while (opcion < 1 or opcion > 2);

    cout << "Ingrese Codigo: " ;cin >> Codigo;
    cout << "Ingrese Nombre: " ;cin >> Nombre;
    cout << "Ingrese Sueldo Basico: "; cin >> SB;
    cout << "Ingrese Horas Extra: "; cin >> HE;
    cout << "Ingrese Tarifa de horas extra: "; cin >> TH;

    switch (opcion){
        case 1:
            cout << "Ingrese Numero de acciones: "; cin >> NA;
            cout << "Ingrese Precio de accciones: "; cin >> PA;
            pAnalista = new Analista_Senior(Codigo,Nombre,SB,HE,NA,PA);
            break;
        case 2:
            pAnalista = new Analista_Junior(Codigo,Nombre,SB,HE,TH);
            break;
    }

    cout << "El sueldo neto es: " << pAnalista->Sueldo_Neto();

    delete pAnalista;
    pAnalista = nullptr;

    return 0;
}