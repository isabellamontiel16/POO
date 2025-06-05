#include "ProductoBebida.h"
#include <sstream>

ProductoBebida::ProductoBebida(int _id, const std::string& _nombre, double _precio, int _cantidad, bool _alcohol)
    : Producto(_id, _nombre, "Bebida"), precio(_precio), cantidad(_cantidad), alcohol(_alcohol) {
}

std::string ProductoBebida::to_string() const {
    std::stringstream ss;
    ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
        << ", Precio: " << precio << ", Cantidad: " << cantidad
        << ", Alcohol: " << (alcohol ? "Sí" : "No");
    return ss.str();
}
