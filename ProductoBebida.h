#ifndef PRODUCTOBEBIDA_H
#define PRODUCTOBEBIDA_H

#include "Producto.h"

class ProductoBebida : public Producto {
private:
    double precio;
    int cantidad;
    bool alcohol;

public:
    ProductoBebida(int _id, const string& _nombre, double _precio, int _cantidad, bool _alcohol);
    string to_string() const override;
};

#endif

