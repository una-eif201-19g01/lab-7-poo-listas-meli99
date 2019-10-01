#include "Nodo.h"

Nodo::Nodo() {
    next = nullptr;
}

Nodo::Nodo(const Vehiculo& veh, Nodo* Next) {
    Nodo::next = Next;
    Nodo::vehiculo = veh;
}

void Nodo::setNext(Nodo *next) {
    Nodo::next = next;
}

void Nodo::setLibro(const Vehiculo &vehiculo) {
    Nodo::vehiculo = vehiculo;
}

Nodo* Nodo::getNext() const {
	return next;
}

Vehiculo& Nodo::getVehiculo() {
	return vehiculo;
}

std::string Nodo::toString() {
	return vehiculo.toString();
}