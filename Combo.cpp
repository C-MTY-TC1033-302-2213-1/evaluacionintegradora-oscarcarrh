#include "Combo.h"

Combo::Combo(): Producto(){
    clave = 0;
}
Combo::Combo(string _nombre, int _precio, int _peso, int _clave): Producto(_nombre, _precio, _peso){
    clave = _clave;
}

string Combo::str(){
    return getNombre() + "-$" + to_string(getPrecio()) + "-" + to_string(getPeso()) + "-$" + to_string(calculaTotalPagar()) + "-" + to_string(clave);

}

int Combo::calculaTotalPagar() {
    int total = precio * peso * clave;
    if (clave == 1) {
        total -= (total / 100) * 25;
    } else if (clave == 2) {
        total -= (total / 100) * 30;
    }
    return total;
}
    