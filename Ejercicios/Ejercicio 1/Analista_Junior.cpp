#include "Analista_Junior.h"
Analista_Junior::Analista_Junior(Numero1 _Codigo, Letras _Nombre, Numero1 _Sueldo_Basico, Numero1 _Horas_Extra, Numero1 _Tarifa_por_Horas_Extra){
    Codigo = _Codigo;
    Nombre = _Nombre;
    Sueldo_Basico = _Sueldo_Basico;
    Horas_Extra = _Horas_Extra;
    Tarifa_por_Horas_Extra = _Tarifa_por_Horas_Extra;
}

Numero1 Analista_Junior::Bonificacion() {
    return (Horas_Extra*Tarifa_por_Horas_Extra);
}

Numero2 Analista_Junior::Descuento() {
    return ((0.10*Sueldo_Basico) + (0.05*Sueldo_Basico));
}