#ifndef PRODUCTOBEBIDA_H
#define PRODUCTOBEBIDA_H

#include "Producto.h"
#include "Inventario.h"
#include <sstream>

class ProductoBebida : public Producto {
private:
    Inventario inventario;
    bool alcohol;

public:
    ProductoBebida(int _id, const std::string& _nombre, double _precio, int _cantidad, bool _alcohol)
        : Producto(_id, _nombre, "Bebida"), inventario(_precio, _cantidad), alcohol(_alcohol) {
    }

    std::string to_string() const override {
        std::stringstream ss;
        ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
            << ", " << inventario.to_string()
            << ", Alcohol: " << (alcohol ? "Sí" : "No");
        return ss.str();
    }
};

#endif 
