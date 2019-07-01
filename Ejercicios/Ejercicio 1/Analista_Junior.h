#ifndef PROYECTO_2_ANALISTA_JUNIOR_H
#define PROYECTO_2_ANALISTA_JUNIOR_H

#include "Definicioness.h"
#include "Analista.h"

class Analista_Junior:public Analista  {
public:
    Analista_Junior(){};
    Analista_Junior(Numero1 _Codigo, Letras _Nombre, Numero1 _Sueldo_Basico, Numero1 _Horas_Extra, Numero1 _Tarifa_por_Horas_Extra);
    virtual ~Analista_Junior(){};

    Numero1 Bonificacion() override;
    Numero2 Descuento() override;

};


#endif