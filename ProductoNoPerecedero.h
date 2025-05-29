#ifndef PRODUCTONOPERECEDERO_H
#define PRODUCTONOPERECEDERO_H

#include "Producto.h"

class ProductoNoPerecedero : public Producto {
private:
    double precio;
    int cantidad;
    string marca;

public:
    ProductoNoPerecedero(int _id, const string& _nombre, double _precio, int _cantidad, const string& _marca);
    string to_string() const override;
};

#endif
