#ifndef CENTRO_H
#define CENTRO_H
#include <string>

class Centro {
    private:
        std::string codigo;
        std::string nombre;
        std::string ciudad;
        int capacidad;
        int cantPaquetesDiarios;
        int cantEmpleados;
    public:
     Centro(const std::string codigo, const std::string nombre, const std::string ciudad, int capacidad, int cantPaquetesDiarios, int cantEmpleados);
        std::string getCodigo() const;
        std::string getNombre() const;
        std::string getCiudad() const;
        int getCapacidad() const;
        int getCantPaquetesDiarios() const;
        int getCantEmpleados() const;   

        //sobrecargamos el operador para comparar alfabeticamente
        bool operator<(const Centro& other) const { // & en este caso sirve para evitar copiar todo el objeto, es solo una referencia
            return codigo < other.codigo;
        }
        bool operator==(const Centro& other) const {
            return codigo == other.codigo;
        }
        bool operator>(const Centro& other) const {
            return codigo > other.codigo;
        }
    };

#endif