#ifndef NODO_H
#define NODO_H

#include "Vehiculo.h"
using namespace std;
class Nodo {
	Nodo* next;
	Vehiculo vehiculo;
public:
	Nodo();
	Nodo(const Vehiculo& vehiculo, Nodo* Next);
	void setNext(Nodo *next);
	void setLibro(const Vehiculo &vehiculo);
	Nodo *getNext() const;
	Vehiculo &getVehiculo();
	string toString();
};

#endif 