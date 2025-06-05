#include "Producto.h"

Producto::Producto() : id(0), nombre(""), tipo("") {}

Producto::Producto(int _id, const std::string& _nombre, const std::string& _tipo)
    : id(_id), nombre(_nombre), tipo(_tipo) {
}

std::ostream& operator<<(std::ostream& os, const Producto& p) {
    os << p.to_string();
    return os;
}
