#include "Angente_Natural.h"
Angente_Natural::Angente_Natural(Letras nombre, Letras direccion, Numero1 telefono, Numero1 distancia, Numero1 cantret, Numero1 cantdep, Numero1 total) {
    Nombre = nombre;
    Direccion = direccion;
    Telefono = telefono;
    Distancia = distancia;
    CantRet = cantret;
    CantDep = cantdep;
    Total = total;
}

Numero1 Angente_Natural::Dinero() {
    return (Total/(CantDep-CantRet));
}
Numero2 Angente_Natural::Bonificacion() {
    Numero2 Bonificacion;
    if(Distancia <= 100)
        Bonificacion = 0.05*(CantRet+CantDep);
    if(Distancia >= 101 or Distancia <= 500)
        Bonificacion = 0.08*(CantRet+CantDep);
    if(Distancia > 500)
        Bonificacion = 0.01*(CantRet+CantDep);
    return Bonificacion;
}