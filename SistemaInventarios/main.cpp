#include <iostream>
#include "Menu.h"

//Men� Kevin
using namespace std;



int main() {
    Inventario inventario;
    Facturacion factura;
    Menu menu;

    menu.mostrarOpciones(inventario, factura);

    return 0;
}

