#ifndef PRODUCTOLIMPIEZA_H
#define PRODUCTOLIMPIEZA_H

#include "Producto.h"
#include "Inventario.h"
#include <sstream>

class ProductoLimpieza : public Producto {
private:
    Inventario inventario;
    std::string superficie;

public:
    ProductoLimpieza(int _id, const std::string& _nombre, double _precio, int _cantidad, const std::string& _superficie)
        : Producto(_id, _nombre, "Limpieza"), inventario(_precio, _cantidad), superficie(_superficie) {
    }

    std::string to_string() const override {
        std::stringstream ss;
        ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
            << ", " << inventario.to_string()
            << ", Superficie: " << superficie;
        return ss.str();
    }
};

#endif 
