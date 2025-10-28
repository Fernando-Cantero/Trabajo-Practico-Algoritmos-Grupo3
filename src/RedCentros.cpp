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

    int comienzo = 0;

    if (ABBDeCentros == nullptr)
    {
        ABBDeCentros = new NodoABB(centros[0]);
        comienzo = 1;
    }
    
    for (size_t i = comienzo; i < centros.size(); ++i) // size_t es un tipo de dato sin signo, a diferencia de int que es con signo
    {
        ABBDeCentros->insertar(centros[i]); // usamos -> para acceder al puntero y llamar a la función insertar
    }
}
