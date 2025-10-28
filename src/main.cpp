#include <iostream>
#include "../include/Centro.h"
#include "../include/RedCentros.h"


int main() {
    Centro centro1("ABC", "Centro A", "Ciudad X", 100, 500, 20);
    Centro centro2("DEF", "Centro B", "Ciudad Y", 150, 600, 25);
    Centro centro3("GHI", "Centro C", "Ciudad Z", 200, 700, 30);
    RedCentros red;
    red.agregarCentro(centro1);
    red.agregarCentro(centro2);
    red.agregarCentro(centro3);
    
}