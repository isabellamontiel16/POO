#include "ProductoNoPerecedero.h"
#include <sstream>

ProductoNoPerecedero::ProductoNoPerecedero(int _id, const string& _nombre, double _precio, int _cantidad, const string& _marca)
    : Producto(_id, _nombre, "No Perecedero"), precio(_precio), cantidad(_cantidad), marca(_marca) {
}

string ProductoNoPerecedero::to_string() const {
    stringstream ss;
    ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
        << ", Precio: " << precio << ", Cantidad: " << cantidad
        << ", Marca: " << marca;
    return ss.str();
}
