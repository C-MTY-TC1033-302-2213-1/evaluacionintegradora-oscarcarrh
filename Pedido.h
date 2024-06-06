#ifndef Pedido_h
#define Pedido_h


#include "Producto.h"
#include "Combo.h"  
#include "Verdura.h"
#include <iostream>
#include <typeinfo>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;


const int MAX_PROD = 50;

class Pedido {
    private:
        Producto* arrPtrProductos[MAX_PROD];
        int cantidad;
    public:
        Pedido();

        void leerArchivo(string nombre);
        void ticketCliente();
        
};

#endif /* Pedido_h */
