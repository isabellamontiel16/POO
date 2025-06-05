#ifndef PRODUCTONOPERECEDERO_H
#define PRODUCTONOPERECEDERO_H

#include "Producto.h"

class ProductoNoPerecedero : public Producto {
private:
    double precio;
    int cantidad;
    std::string marca;

public:
    ProductoNoPerecedero(int _id, const std::string& _nombre, double _precio, int _cantidad, const std::string& _marca);
    std::string to_string() const override;
};

#endif
