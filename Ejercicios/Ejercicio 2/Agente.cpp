#include "Agente.h"
Agente::Agente(Letras nombre, Letras direccion, Numero1 telefono, Numero1 distancia, Numero1 cantret, Numero1 cantdep, Numero1 total) {
    Nombre = nombre;
    Direccion = direccion;
    Telefono = telefono;
    Distancia = distancia;
    CantRet = cantret;
    CantDep = cantdep;
    Total = total;
}

Numero2 Agente::Comision() {
    return (Dinero()*Bonificacion());
}