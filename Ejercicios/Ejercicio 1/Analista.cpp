#include "Analista.h"

Analista::Analista(Numero1 _Codigo, Letras _Nombre, Numero1 _Sueldo_Basico, Numero1 _Horas_Extra, Numero1 _Tarifa_por_Horas_Extra){
    Codigo = _Codigo;
    Nombre = _Nombre;
    Sueldo_Basico = _Sueldo_Basico;
    Horas_Extra = _Horas_Extra;
    Tarifa_por_Horas_Extra = _Tarifa_por_Horas_Extra;
}

Numero2 Analista::Sueldo_Neto(){
    return (Sueldo_Basico + Bonificacion() - Descuento());
}

