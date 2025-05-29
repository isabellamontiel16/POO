// Archivo: Producto.h
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {
protected:
    int id;
    string nombre;
    string tipo;

public:
    Producto();
    Producto(int _id, const string& _nombre, const string& _tipo);
    virtual ~Producto() {}
    virtual string to_string() const = 0;
};

#endif
