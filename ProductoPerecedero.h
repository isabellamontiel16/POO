#ifndef PRODUCTOPERECEDERO_H
#define PRODUCTOPERECEDERO_H

#include "Producto.h"

class ProductoPerecedero : public Producto {
private:
    double precio;
    int cantidad;
    std::string fecha_caducidad;

public:
    ProductoPerecedero(int _id, const std::string& _nombre, double _precio, int _cantidad, const std::string& _fecha);
    std::string to_string() const override;
};

#endif
