#ifndef PRODUCTONOPERECEDERO_H
#define PRODUCTONOPERECEDERO_H

#include "Producto.h"
#include "Inventario.h"
#include <sstream>

class ProductoNoPerecedero : public Producto {
private:
    Inventario inventario;
    std::string marca;

public:
    ProductoNoPerecedero(int _id, const std::string& _nombre, double _precio, int _cantidad, const std::string& _marca)
        : Producto(_id, _nombre, "No Perecedero"), inventario(_precio, _cantidad), marca(_marca) {
    }

    std::string to_string() const override {
        std::stringstream ss;
        ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
            << ", " << inventario.to_string()
            << ", Marca: " << marca;
        return ss.str();
    }
};

#endif 
