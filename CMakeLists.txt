cmake_minimum_required(VERSION 3.14)
project(lab_7_poo_listas)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Carro.cpp Carro.h Nodo.h Nodo.cpp ListaVehiculo.cpp ListaVehiculo.h Moto.cpp Moto.h Vehiculo.cpp Vehiculo.h VehiculoInterface.h)

add_executable(NumerosRacionales ${SOURCE_FILES})
