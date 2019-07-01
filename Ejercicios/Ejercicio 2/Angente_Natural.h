#ifndef EJERCICIO_2_ANGENTE_NATURAL_H
#define EJERCICIO_2_ANGENTE_NATURAL_H

#include "Definiciones.h"
#include "Agente.h"

class Angente_Natural: public Agente{
public:
    Angente_Natural(){};
    Angente_Natural(Letras nombre, Letras direccion, Numero1 telefono, Numero1 distancia, Numero1 cantret, Numero1 cantdep, Numero1 total);
    virtual ~Angente_Natural(){};
    Numero1 Dinero() override;
    Numero2 Bonificacion() override;

};


#endif