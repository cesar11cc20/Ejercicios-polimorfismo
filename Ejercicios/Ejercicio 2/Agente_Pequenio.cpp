#include "Agente_Pequenio.h"
Agente_Pequenio::Agente_Pequenio(Letras nombre, Letras direccion, Numero1 telefono, Numero1 distancia, Numero1 cantret,
                                 Numero1 cantdep, Numero1 total, Letras email, Numero1 numPOS) {
    Nombre = nombre;
    Direccion = direccion;
    Telefono = telefono;
    Distancia = distancia;
    CantRet = cantret;
    CantDep = cantdep;
    Total = total;
    Email = email;
    NumPOS = numPOS;
}

Numero1 Agente_Pequenio::Dinero() {
    return (Total/((CantDep-CantRet)*NumPOS));

}

Numero2 Agente_Pequenio::Bonificacion() {
    Numero2 Bonificacion;
    if(Distancia <= 250)
        Bonificacion = 0.08*(CantRet+CantDep);
    if(Distancia >= 252 or Bonificacion <= 800)
        Bonificacion = 0.1*(CantRet+CantDep);
    if(Distancia > 800)
        Bonificacion = 0.15*(CantRet+CantDep);
    return Bonificacion;
}