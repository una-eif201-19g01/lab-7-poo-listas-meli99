#include "Carro.h"

Carro::Carro() {
    id = 0;
    costo = 0.0;
    marca = "";
    placa = "";
    dias = 0;
}

Carro::Carro(const int &id,const float &costo, const int &dias, const string &marca, const string &placa) {
    Carro::id = id;
    Carro::costo = costo;
    Carro::marca = marca;
    Carro::placa = placa;
    Carro::dias = dias;
}

float Carro::calcularCantidad(const int &costo, const int &dias){
    return costo * dias;
}

float Carro::getCantidad() {
    return cantidad;
}

void Carro::setCantidad(float cantidad) {
    Carro::cantidad = cantidad; 
}