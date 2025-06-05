#ifndef PRODUCTOBEBIDA_H
#define PRODUCTOBEBIDA_H

#include "Producto.h"

class ProductoBebida : public Producto {
private:
    double precio;
    int cantidad;
    bool alcohol;

public:
    ProductoBebida(int _id, const std::string& _nombre, double _precio, int _cantidad, bool _alcohol);
    std::string to_string() const override;
};

#endif
