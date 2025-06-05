#ifndef PRODUCTOLIMPIEZA_H
#define PRODUCTOLIMPIEZA_H

#include "Producto.h"

class ProductoLimpieza : public Producto {
private:
    double precio;
    int cantidad;
    std::string superficie;

public:
    ProductoLimpieza(int _id, const std::string& _nombre, double _precio, int _cantidad, const std::string& _superficie);
    std::string to_string() const override;
};

#endif

