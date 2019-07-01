#ifndef PROYECTO_2_ANALISTA_SENIOR_H
#define PROYECTO_2_ANALISTA_SENIOR_H
#include <string>
#include <iostream>
using namespace std;

#include "Analista.h"
#include "Definicioness.h"


class Analista_Senior:public Analista{
private:
    Numero1 Numero_de_Acciones;
    Numero1 Precio_de_accion;
public:
    Analista_Senior(){};
    Analista_Senior(Numero1 _Codigo, Letras _Nombre, Numero1 _Sueldo_Basico, Numero1 _Horas_Extra, Numero1 _Numero_de_Acciones, Numero1 _Precio_de_accion);

    virtual ~Analista_Senior(){};

    Numero1 Bonificacion() override;
    Numero2 Descuento() override;
};


#endif
