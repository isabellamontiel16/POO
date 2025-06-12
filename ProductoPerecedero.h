#ifndef PRODUCTOPERECEDERO_H
#define PRODUCTOPERECEDERO_H

#include "Producto.h"
#include "Inventario.h"
#include <sstream>

class ProductoPerecedero : public Producto {
private:
    Inventario inventario;
    std::string fecha_caducidad;

public:
    ProductoPerecedero(int _id, const std::string& _nombre, double _precio, int _cantidad, const std::string& _fecha)
        : Producto(_id, _nombre, "Perecedero"), inventario(_precio, _cantidad), fecha_caducidad(_fecha) {
    }

    std::string to_string() const override {
        std::stringstream ss;
        ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
            << ", " << inventario.to_string()
            << ", Caducidad: " << fecha_caducidad;
        return ss.str();
    }
};

#endif 
