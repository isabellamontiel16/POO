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
    Producto() : id(0), nombre(""), tipo("") {}
    Producto(int _id, const std::string& _nombre, const std::string& _tipo)
        : id(_id), nombre(_nombre), tipo(_tipo) {
    }

    virtual ~Producto() {}

    virtual std::string to_string() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Producto& p) {
        os << p.to_string();
        return os;
    }
};

#endif 
