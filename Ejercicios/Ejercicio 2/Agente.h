#ifndef EJERCICIO_2_AGENTE_H
#define EJERCICIO_2_AGENTE_H

#include "Definiciones.h"

class Agente {
protected:
    Letras Nombre;
    Letras Direccion;
    Numero1 Telefono;
    Numero1 Distancia;
    Numero1 CantRet;
    Numero1 CantDep;
    Numero1 Total;
public:
    Agente(){};
    Agente(Letras nombre, Letras direccion, Numero1 telefono, Numero1 distancia, Numero1 cantret, Numero1 cantdep, Numero1 total);
    virtual ~Agente(){};

    Numero2 Comision();
    virtual Numero1 Dinero() = 0;
    virtual Numero2 Bonificacion() = 0;


};


#endif