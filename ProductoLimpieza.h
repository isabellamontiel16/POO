#ifndef PRODUCTOLIMPIEZA_H
#define PRODUCTOLIMPIEZA_H

#include "Producto.h"

class ProductoLimpieza : public Producto {
private:
    double precio;
    int cantidad;
    string superficie;

public:
    ProductoLimpieza(int _id, const string& _nombre, double _precio, int _cantidad, const string& _superficie);
    string to_string() const override;
};

#endif
