#ifndef PRODUCTOPERECEDERO_H
#define PRODUCTOPERECEDERO_H

#include "Producto.h"

class ProductoPerecedero : public Producto {
private:
    double precio;
    int cantidad;
    string fecha_caducidad;

public:
    ProductoPerecedero(int _id, const string& _nombre, double _precio, int _cantidad, const string& _fecha);
    string to_string() const override;
};

#endif
