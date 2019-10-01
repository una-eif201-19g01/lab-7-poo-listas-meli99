#ifndef CARRO_H
#define CARRO_H

#include <string>
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Carro: public Vehiculo {
	
    float costo;
    int dias;
    float cantidad;

	
public:

	Carro();
	Carro(const int &id,const float &costo, const int &dias, const string &marca, const string &placa);
	float calcularCantidad(const int &costo, const int &dias);
	float getCantidad();
    void setCantidad(float cost);
	
};

#endif
