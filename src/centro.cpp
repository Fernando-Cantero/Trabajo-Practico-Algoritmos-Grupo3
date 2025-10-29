#include "../include/Centro.h"

Centro::Centro(const std::string codigo, const std::string nombre, const std::string ciudad, int capacidad, int cantPaquetesDiarios, int cantEmpleados)
    : codigo(codigo), nombre(nombre), ciudad(ciudad), capacidad(capacidad), cantPaquetesDiarios(cantPaquetesDiarios), cantEmpleados(cantEmpleados) {}

std::string Centro::getCodigo() const { return codigo; }
std::string Centro::getNombre() const { return nombre; }
std::string Centro::getCiudad() const { return ciudad; }
int Centro::getCapacidad() const { return capacidad; }
int Centro::getCantPaquetesDiarios() const { return cantPaquetesDiarios; }
int Centro::getCantEmpleados() const { return cantEmpleados; }