#include "Moto.h"

Moto::Moto() {
    id = 0;
    costo = 0.0;
    marca = "";
    placa = "";
    horas = 0;
}

Moto::Moto(const int &id,const float &costo, const float &horas, const string &marca, const string &placa) {
    Moto::id = id;
    Moto::costo = costo;
    Moto::marca = marca;
    Moto::placa = placa;
    Moto::horas = horas;
}

float Moto::calcularCantidad(const int &costo, const float &horas){
    return costo * horas;
}

float Moto::getCantidad() {
    return cantidad;
}

void Moto::setCantidad(float cantidad) {
    Moto::cantidad = cantidad; 
}