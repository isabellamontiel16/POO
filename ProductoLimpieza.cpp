#include "ProductoLimpieza.h"
#include <sstream>

ProductoLimpieza::ProductoLimpieza(int _id, const std::string& _nombre, double _precio, int _cantidad, const std::string& _superficie)
    : Producto(_id, _nombre, "Limpieza"), precio(_precio), cantidad(_cantidad), superficie(_superficie) {
}

std::string ProductoLimpieza::to_string() const {
    std::stringstream ss;
    ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
        << ", Precio: " << precio << ", Cantidad: " << cantidad
        << ", Superficie: " << superficie;
    return ss.str();
}
