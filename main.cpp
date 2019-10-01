#include "ListaVehiculo.h"
#include "Carro.h"
#include "Moto.h"

using namespace std;

int main() {
    struct producto{
        int id;
        int precio;
        int tiempo;
        string marca;
        string placa;
    } carro, moto;
    
    int numVehiculos = 0;
    int carroMoto = 0;

    ListaVehiculo* listavehiculo = new ListaVehiculo();

    cout << "Agregar vehiculos: Cuantos desea agragar?";
    cin >> numVehiculos;

    for(int i = 0; i < numVehiculos; i++) {
        cout << "1. Carro o 2. Moto? \n";
        cin >> carroMoto;

        if (carroMoto == 1) {
            cout << "ID: ";
            cin >> carro.id;

            cout << "Precio por dia: ";
            cin >> carro.precio;

            cout << "Numero de días: ";
            cin >> carro.tiempo;

            cout << "Marca: ";
            cin >> carro.marca;

            cout << "Placa: ";
            cin >> carro.placa;

            Carro car(carro.id, carro.precio, carro.tiempo, carro.marca, carro.placa);

            float costo = car.calcularCantidad(carro.precio, carro.tiempo);
            car.setCantidad(costo);

            listavehiculo->insertarFinal(car);
        } else if (carroMoto == 2) {
            cout << "ID: ";
            cin >> moto.id;

            cout << "Precio por hora: ";
            cin >> moto.precio;

            cout << "Numero de horas: ";
            cin >> moto.tiempo;

            cout << "Marca: ";
            cin >> moto.marca;

            cout << "Placa: ";
            cin >> moto.placa;

            Moto mot(moto.id, moto.precio, moto.tiempo, moto.marca, moto.placa);

            float costo = mot.calcularCantidad(carro.precio, carro.tiempo);
            mot.setCantidad(costo);
            listavehiculo->insertarFinal(mot);
        }

    }

    bool repetir = true;

    while (repetir == true) {
        cout << "******************************** \n";

        int opcion = 0;

        cout << "1. Imprimir vehiculos \n";
        cout << "2. Eliminar vehiculo por ID \n";
        cout << "3. Identificar vehiculo por ID \n";
        cout << "4. Salir \n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << listavehiculo->toString();
        } else if (opcion == 2) {
            int id = 0;

            cout << "Cual es el ID del vehiculo?: ";
            cin >> id;
            listavehiculo->eliminarPorId(id);
        } else if (opcion == 3) {
            int id = 0;

            cout << "Cual es el ID del vehiculo?: ";
            cin >> id;
            cout << listavehiculo->obtenerDatosVehiculo(id);
        } else {
            repetir = false;
        }  
    }
}