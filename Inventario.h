#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <string>
#include <sstream>

class Inventario {
private:
    double precio;
    int cantidad;

public:
    Inventario() : precio(0.0), cantidad(0) {}
    Inventario(double _precio, int _cantidad) : precio(_precio), cantidad(_cantidad) {}

    double getPrecio() const { return precio; }
    int getCantidad() const { return cantidad; }

    void setPrecio(double p) { precio = p; }
    void setCantidad(int c) { cantidad = c; }

    std::string to_string() const {
        std::stringstream ss;
        ss << "Precio: " << precio << ", Cantidad: " << cantidad;
        return ss.str();
    }
};

#endif
