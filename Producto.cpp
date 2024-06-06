#include "Producto.h"
    
    
    Producto::Producto(){
    nombre = "Oscar Carranza Hernández"; 
    precio = 838649; 
    peso = 20; 
    }

    Producto::Producto(string _nombre, int _precio, int _peso){
    nombre = _nombre;
    precio = _precio;
    peso = _peso;
    }

    void Producto::setNombre(string _nombre){
        nombre = _nombre;
    }
    void Producto::setPrecio(int _precio){
        precio = _precio;
    }
    void Producto::setPeso(int _peso){
        peso = _peso;
    }

    string Producto::getNombre(){
        return nombre;
    }
    int Producto::getPrecio(){
        return precio;
    }
    int Producto::getPeso(){
        return peso;
    }

    string Producto::str(){
        return "P" + to_string(1) + "-" + to_string(precio) + "-" + to_string(peso) + "-" + to_string(calculaTotalPagar());
    }

    int Producto::calculaTotalPagar(){
        return precio * peso;
    }