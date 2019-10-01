#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>
#include "VehiculoInterface.h"
using namespace std;

class Vehiculo {
	
protected:
	string marca;
    string placa;
    int id;

	
public:
	
	Vehiculo();
	Vehiculo(const string &marca, const string &placa, const int &id);
	void setMarca(const string &marca);
	string getMarca();
    void setPlaca(const string &placa);
    string getPlaca();
	string toString();
    void setId(const int &id);
    int getId();
    void serCosto(float cost);
    float getCosto();
};

#endif
