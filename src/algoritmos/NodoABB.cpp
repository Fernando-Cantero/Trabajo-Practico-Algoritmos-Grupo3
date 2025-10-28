#include "../../include/Centro.h"
#include "../../include/algoritmos/NodoABB.h"
#include <iostream>
using namespace std;

NodoABB::NodoABB(const Centro centro) : dato(centro), izq(nullptr), der(nullptr) {}

void NodoABB::insertar (const Centro centro){
    if (centro.getCodigo()< dato.getCodigo()){
        if (this->izq==nullptr){
            cout << "Insertando " << centro.getCodigo() << " en izq de " << this->dato.getCodigo() << endl;
            this->izq = new NodoABB(centro) ; 
        } else {
            this->izq->insertar(centro);  
        }
    } else {
        if (this->der==nullptr){
            cout << "Insertando "<< centro.getCodigo() <<" en der de " << this->dato.getCodigo() << endl;
            this->der = new NodoABB(centro);
        } else {
            this->der->insertar(centro);
        }
    }
}