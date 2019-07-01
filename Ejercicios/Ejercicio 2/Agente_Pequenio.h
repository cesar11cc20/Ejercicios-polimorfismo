#ifndef EJERCICIO_2_AGENTE_PEQUENIO_H
#define EJERCICIO_2_AGENTE_PEQUENIO_H

#include "Definiciones.h"
#include "Agente.h"


class Agente_Pequenio: public Agente {
private:
    Letras Email;
    Numero1 NumPOS;
public:
    Agente_Pequenio(){};
    Agente_Pequenio(Letras nombre, Letras direccion, Numero1 telefono, Numero1 distancia, Numero1 cantret, Numero1 cantdep, Numero1 total, Letras email, Numero1 numPOS);
    virtual ~Agente_Pequenio(){};

    virtual Numero1 Dinero() override;
    virtual Numero2 Bonificacion() override;


};


#endif
