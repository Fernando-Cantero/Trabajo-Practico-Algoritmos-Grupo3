#include "../include/Centro.h"
#include "../include/RedCentros.h"
#include "../include/algoritmos/NodoABB.h"
#include <vector>
using namespace std;
#include <iostream>

RedCentros::RedCentros()
{
    ABBDeCentros = nullptr;
} // el vector centros se inicializa vacio automaticamente

void RedCentros::agregarCentro(Centro centro)
{
    if (ABBDeCentros == nullptr)
    {
        cout << "Creando el nodo raiz " << centro.getCodigo() << endl;
        ABBDeCentros = new NodoABB(centro);
        return;
    }
    ABBDeCentros->insertar(centro);
}

void RedCentros::agregarVectorCentros(vector<Centro> centros)
{
    if (centros.size() == 0)
    {
        cout << "El vector de centros está vacío, no se pudo cargar el ABB." << endl;
        return;
    }

    for (size_t i = 0; i < centros.size(); ++i) // size_t es un tipo de dato sin signo, a diferencia de int que es con signo
    {
        agregarCentro(centros[i]);
    }
}
