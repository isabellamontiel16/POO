#include "ProductoPerecedero.h"
#include <sstream>

ProductoPerecedero::ProductoPerecedero(int _id, const std::string& _nombre, double _precio, int _cantidad, const std::string& _fecha)
    : Producto(_id, _nombre, "Perecedero"), precio(_precio), cantidad(_cantidad), fecha_caducidad(_fecha) {
}

std::string ProductoPerecedero::to_string() const {
    std::stringstream ss;
    ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
        << ", Precio: " << precio << ", Cantidad: " << cantidad
        << ", Caducidad: " << fecha_caducidad;
    return ss.str();
}
