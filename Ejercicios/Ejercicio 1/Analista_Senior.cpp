#include "Analista_Senior.h"

Analista_Senior::Analista_Senior(Numero1 _Codigo, Letras _Nombre, Numero1 _Sueldo_Basico, Numero1 _Horas_Extra,
        Numero1 _Numero_de_Acciones, Numero1 _Precio_de_accion) {
    Codigo = _Codigo;
    Nombre = _Nombre;
    Sueldo_Basico = _Sueldo_Basico;
    Horas_Extra = _Horas_Extra;
    Numero_de_Acciones = _Numero_de_Acciones;
    Precio_de_accion = _Precio_de_accion;
}

Numero1 Analista_Senior::Bonificacion() {
    return (Tarifa_por_Horas_Extra*Horas_Extra+Numero_de_Acciones*Precio_de_accion);
}

Numero2 Analista_Senior::Descuento() {
    return (0.10*Sueldo_Basico);
}
