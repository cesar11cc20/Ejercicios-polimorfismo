#ifndef PROYECTO_2_ANALISTA_H
#define PROYECTO_2_ANALISTA_H

#include <iostream>
using namespace std;

#include "Definicioness.h"

class Analista {
protected:
    Numero1 Codigo;
    Letras Nombre;
    Numero1 Sueldo_Basico;
    Numero1 Horas_Extra;
    Numero1 Tarifa_por_Horas_Extra;

public:
    Analista(){};
    Analista(Numero1 _Codigo, Letras _Nombre, Numero1 _Sueldo_Basico, Numero1 _Horas_Extra, Numero1 _Tarifa_por_Horas_Extra);
    virtual ~Analista(){};

    virtual Numero1 Bonificacion() = 0;
    virtual Numero2 Descuento() = 0;

    Numero2 Sueldo_Neto();

};

#endif
