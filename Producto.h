#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

class Producto {
protected:
    int id;
    std::string nombre;
    std::string tipo;

public:
    Producto();
    Producto(int _id, const std::string& _nombre, const std::string& _tipo);
    virtual ~Producto() {}

    virtual std::string to_string() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Producto& p);
};

#endif
