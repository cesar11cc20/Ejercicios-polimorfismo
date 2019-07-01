#include <iostream>
#include "Definiciones.h"
#include "Agente.h"
#include "Angente_Natural.h"
#include "Agente_Pequenio.h"

using namespace std;

int main() {
    Letras Nombre, Direccion;
    Numero1 Telefono, KM, RE, DE, M;
    Numero1 Opcion;
    Letras Email;
    Numero1 POS;

    Agente *pAgente = nullptr;
    do{
        cout << "Ingrese el tipo de agente" << endl;
        cout << "Angente natural (1)" << endl;
        cout << "Agente pequenio (2)" << endl;
        cin >> Opcion;
    }while(Opcion < 1 or Opcion > 2);

    cout << "Ingrese nombre: ";cin >> Nombre;
    cout << "Ingrese Direccion: ";cin >> Direccion;
    cout << "Ingrese Telefono: ";cin >> Telefono;
    cout << "Ingrese Distancia al banco: ";cin >> KM;
    cout << "Ingrese Cantidad total de retiros: ";cin >> RE;
    cout << "Ingrese Cantidad total de depositos: "; cin >> DE;
    cout << "Ingrese Monto total recaudado: ";cin >> M;

    switch (Opcion){
        case 1:
            pAgente = new Angente_Natural(Nombre,Direccion,Telefono,DE,RE,DE,M);
            break;
        case 2:
            cout << "Ingrese Email: ";cin >> Email;
            cout << "Ingrese Numero de POS: ";cin >> POS;
            pAgente = new Agente_Pequenio(Nombre,Direccion,Telefono,KM,RE,DE,M,Email,POS);
            break;
    }

    cout << "La comision es: " << pAgente->Comision();

    delete pAgente;
    pAgente = nullptr;

    return 0;
}