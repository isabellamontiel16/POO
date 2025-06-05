#include "ProductoNoPerecedero.h"
#include <sstream>

ProductoNoPerecedero::ProductoNoPerecedero(int _id, const std::string& _nombre, double _precio, int _cantidad, const std::string& _marca)
    : Producto(_id, _nombre, "No Perecedero"), precio(_precio), cantidad(_cantidad), marca(_marca) {
}

std::string ProductoNoPerecedero::to_string() const {
    std::stringstream ss;
    ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
        << ", Precio: " << precio << ", Cantidad: " << cantidad
        << ", Marca: " << marca;
    return ss.str();
}
