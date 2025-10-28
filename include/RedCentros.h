#ifndef REDCENTROS_H
#define REDCENTROS_H
#include <vector>
#include "Centro.h"
#include "algoritmos/NodoABB.h"

using namespace std;

class RedCentros
{
private:
    NodoABB* ABBDeCentros;
    //List<Conexion> conexiones;
public:
    RedCentros();
    void agregarCentro(Centro centro);
    void agregarVectorCentros(vector<Centro> centros);
    Centro mostrarInfoCentro(std::string codigo) const;
    void eliminarCentro(std::string codigo) const;
    void mostrarCentros() const;
    //List<Conexion> caminoMinimoEntre(std::string codigoOrigen, std::string codigoDestino) const;
};


#endif
