#include <iostream>
#include "../include/Centro.h"
#include "../include/RedCentros.h"
#include <vector>

int main() {
    Centro centro1("ABC", "Centro A", "Ciudad X", 100, 500, 20);
    Centro centro2("DEF", "Centro B", "Ciudad Y", 150, 600, 25);
    Centro centro3("GHI", "Centro C", "Ciudad Z", 200, 700, 30);
    Centro centro4("ADD", "Centro D", "Ciudad W", 250, 800, 35);
    Centro centro5("AAB", "Centro E", "Ciudad V", 300, 900, 40);
    Centro centro6("ZZZ", "Centro F", "Ciudad U", 350, 1000, 45);
    Centro centro7("ZZZ", "Centro G", "Ciudad T", 400, 1100, 50);
    Centro centro8("DAS", "Centro H", "Ciudad S", 450, 1200, 55);
    std::vector<Centro> centros = {centro6, centro7, centro8};
    RedCentros red;
    red.agregarCentro(centro1);
    red.agregarCentro(centro2);
    red.agregarCentro(centro3);
    red.agregarCentro(centro4);
    red.agregarCentro(centro5); 
    red.agregarVectorCentros(centros);
    red.mostrarInfoCentro("DEF");
}