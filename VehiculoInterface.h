#ifndef VEHICULO_INTERFACE_H
#define VEHICULO_INTERFACE_H

#include <iostream>
using namespace std;

class VehiculoInterface {
	
protected:
	string marca;
    string placa;
    int id;

	
public:
	
	virtual ~VehiculoInterface() {};
	virtual void setMarca(const string &marca) = 0;
	virtual string getMarca() = 0;
    virtual void setPlaca(const string &placa) = 0;
    virtual string getPlaca() = 0;
	virtual string toString() = 0;
    virtual void setId(const int &id) = 0;
    virtual int getId() = 0;
};

#endif
