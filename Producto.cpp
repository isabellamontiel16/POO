#include "Producto.h"
#include <sstream>

Producto::Producto() : id(0), nombre(""), tipo("") {}

Producto::Producto(int _id, const string& _nombre, const string& _tipo)
    : id(_id), nombre(_nombre), tipo(_tipo) {
}
