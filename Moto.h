#ifndef MOTO_H
#define MOTO_H

#include <string>
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Moto : public Vehiculo {
	
    float costo;
    float horas;
    float cantidad;
	
public:
	
	Moto();
	Moto(const int &id,const float &costo, const float &horas, const string &marca, const string &placa);
	float calcularCantidad(const int &costo, const float &horas);
    float getCantidad();
    void setCantidad(float cantidad);
	
};

#endif
