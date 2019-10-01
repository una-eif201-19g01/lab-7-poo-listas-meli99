#ifndef LISTAVEHICULO_H
#define LISTAVEHICULO_H

#include "Nodo.h"

using namespace std;

class ListaVehiculo {
	Nodo *actual;
	Nodo *primero;
public:
	ListaVehiculo();
	void setActual(Nodo *actual);
	void setPrimero(Nodo *primero);
	Nodo *getActual()const;
	Nodo *getPrimero()const;
	virtual ~ListaVehiculo();
	string toString();
	void insertarFinal(Vehiculo &_vehiculo);
	bool eliminarFinal();
	string obtenerDatosVehiculo(int);
    bool eliminarPorId(int n);
	int totalNodos();
};

#endif
