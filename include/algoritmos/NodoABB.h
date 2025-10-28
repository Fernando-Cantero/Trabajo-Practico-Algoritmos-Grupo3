#ifndef ABB_H
#define ABB_H
#include "../Centro.h"

class NodoABB {
public:
    Centro dato;
    NodoABB* izq;
    NodoABB* der;

    NodoABB(const Centro centro);
    void insertar (const Centro centro);
    //void buscar (const std::string codigo) const;
};

#endif 