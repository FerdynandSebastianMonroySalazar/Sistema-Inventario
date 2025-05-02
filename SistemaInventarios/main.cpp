#include <iostream>
#include "Usuario.h"
#include "Menu.h"
#include "Inventario.h"
#include "Facturacion.h"
using namespace std;

usuarios usuarioRegistrado;
Menu menu;

int main() {
    bool accesoUsuarios = usuarioRegistrado.loginUsuarios();

    if (accesoUsuarios) {
        Inventario inventario;  // Instanciar Inventario
        Facturacion factura;    // Instanciar Facturacion
        menu.mostrarOpciones(inventario, factura); // Llamar men� pasando los objetos
    }

    system("cls");
    cout << "* Hasta la pr�xima *" << endl;
    return 0;
}
