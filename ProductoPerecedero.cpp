#include "ProductoPerecedero.h"
#include <sstream>

ProductoPerecedero::ProductoPerecedero(int _id, const string& _nombre, double _precio, int _cantidad, const string& _fecha)
    : Producto(_id, _nombre, "Perecedero"), precio(_precio), cantidad(_cantidad), fecha_caducidad(_fecha) {
}

string ProductoPerecedero::to_string() const {
    stringstream ss;
    ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
        << ", Precio: " << precio << ", Cantidad: " << cantidad
        << ", Caducidad: " << fecha_caducidad;
    return ss.str();
}
