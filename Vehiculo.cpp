#include "Vehiculo.h"

Vehiculo::Vehiculo() {
    placa = "";
    marca = "";
    id = 0;
}

Vehiculo::Vehiculo(const string &marca, const string &placa, const int &id) {
    Vehiculo::marca = marca;
    Vehiculo::placa = placa;
    Vehiculo::id = id;
}

void Vehiculo::setMarca(const string &marca) {
    Vehiculo::marca = marca;
}

string Vehiculo::getMarca() {
    return marca;
}

void Vehiculo::setPlaca(const string &placa) {
    Vehiculo::placa = placa;
}

string Vehiculo::getPlaca() {
    return placa;
}

string Vehiculo::toString() {
    string info;
    info =+"Marca: "+getMarca()+"\n"+"Placa: "+getPlaca()+"\n"+"ID: "+std::to_string(getId())+"\n";
    return info;
}

void Vehiculo::setId(const int &id){
    Vehiculo::id = id;
}

int Vehiculo::getId(){
    return id;
}