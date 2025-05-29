#include "ProductoLimpieza.h"
#include <sstream>

ProductoLimpieza::ProductoLimpieza(int _id, const string& _nombre, double _precio, int _cantidad, const string& _superficie)
    : Producto(_id, _nombre, "Limpieza"), precio(_precio), cantidad(_cantidad), superficie(_superficie) {
}

string ProductoLimpieza::to_string() const {
    stringstream ss;
    ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo
        << ", Precio: " << precio << ", Cantidad: " << cantidad
        << ", Superficie: " << superficie;
    return ss.str();
}
