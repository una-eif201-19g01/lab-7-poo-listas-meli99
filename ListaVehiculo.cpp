#include "ListaVehiculo.h"

ListaVehiculo::ListaVehiculo(){
	primero=nullptr;
	actual=nullptr;
}

void ListaVehiculo::setActual(Nodo *actual){
	ListaVehiculo::actual=actual;
}

void ListaVehiculo::setPrimero(Nodo *primero){
	ListaVehiculo::primero=primero;
}

Nodo *ListaVehiculo::getActual()const{
	return actual;
}

Nodo *ListaVehiculo::getPrimero()const{
	return primero;
}

ListaVehiculo::~ListaVehiculo(){
	while (primero!= nullptr){
		actual=primero;
		primero=primero->getNext();
		delete (actual);
	}
}

void ListaVehiculo::insertarFinal(Vehiculo &_vehiculo){
 	actual = primero;
    if (primero == nullptr) {
        primero = new Nodo(_vehiculo, nullptr);
    } 
	else {
        while (actual->getNext() != nullptr) {
            actual=actual->getNext();
        }
        actual->setNext(new Nodo(_vehiculo, nullptr));
    }
}

bool ListaVehiculo::eliminarFinal() {
	actual=primero;
	if(primero==nullptr){
		return false;
	} else if (primero->getNext() == nullptr) {
		delete primero;
	} else {
		Nodo* penultimo = actual; //Para no ser el ultimo directamente
		while(penultimo->getNext()->getNext()!=nullptr) {
			penultimo = penultimo->getNext();
		}
		delete (penultimo->getNext());
		penultimo->setNext(nullptr);
	}
	return true;
}

std::string ListaVehiculo::obtenerDatosVehiculo(int n) {
    string informe;
	actual=primero;
	while (actual!=nullptr){
        if(actual->getVehiculo().getId() == n) {
            informe=actual->toString();
            return informe;
        }
		actual=actual->getNext();
	}
    informe = "Vehiculo con ese ID no fue encontrado\n";
	return informe;
}

string ListaVehiculo::toString(){
	string informe;
	actual=primero;
	while (actual!=nullptr){
		informe+=actual->toString();
		actual=actual->getNext();
	}
	return informe;
}

int ListaVehiculo::totalNodos(){
	int totalNodos=0;
	actual=primero;
	while(actual!=nullptr){
		totalNodos ++;
		actual=actual->getNext();
	}
	return totalNodos;
}

bool ListaVehiculo::eliminarPorId(int n){
    actual = primero;
    Nodo* temp = primero;

    if(actual->getVehiculo().getId() == n) {
        if (actual->getNext() != nullptr) {
            primero = temp->getNext();
            delete temp;
            temp = nullptr;
            return true;
        } else {
            delete(temp);
            temp = nullptr;
            primero = nullptr;
            return false;
        }
    } else if (actual->getNext() == nullptr) {
        return false;
    } else {
        while (actual->getNext() != nullptr) {
            if (actual->getNext()->getVehiculo().getId() == n) {
                temp = actual->getNext();

                actual->setNext(temp->getNext());
                delete (temp);
                temp = nullptr;
                return true;
            }
            actual = actual->getNext();
        }
    }
    return false;
}
