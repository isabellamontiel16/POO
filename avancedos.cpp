#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Clase Madre
class Producto {
protected:
    int id;
    string nombre;
    string tipo;
public:
    Producto() : id(0), nombre(""), tipo("") {}
    Producto(int _id, const string& _nombre, const string& _tipo)
        : id(_id), nombre(_nombre), tipo(_tipo) {
    }

    string to_string() const {
        stringstream ss;
        ss << "ID: " << id << ", Nombre: " << nombre << ", Tipo: " << tipo;
        return ss.str();
    }
};

// Clase Perecedero
class ProductoPerecedero : public Producto {
private:
    double precio;
    int cantidad;
    string fecha_caducidad;
public:
    ProductoPerecedero(int _id, const string& _nombre, double _precio, int _cantidad, const string& _fecha)
        : Producto(_id, _nombre, "Perecedero"), precio(_precio), cantidad(_cantidad), fecha_caducidad(_fecha) {
    }

    string to_string() const {
        stringstream ss;
        ss << Producto::to_string()
            << ", Precio: " << precio
            << ", Cantidad: " << cantidad
            << ", Caducidad: " << fecha_caducidad;
        return ss.str();
    }
};

// Clase No perecedero
class ProductoNoPerecedero : public Producto {
private:
    double precio;
    int cantidad;
    string marca;
public:
    ProductoNoPerecedero(int _id, const string& _nombre, double _precio, int _cantidad, const string& _marca)
        : Producto(_id, _nombre, "No Perecedero"), precio(_precio), cantidad(_cantidad), marca(_marca) {
    }

    string to_string() const {
        stringstream ss;
        ss << Producto::to_string()
            << ", Precio: " << precio
            << ", Cantidad: " << cantidad
            << ", Marca: " << marca;
        return ss.str();
    }
};

// Clase Bebida
class ProductoBebida : public Producto {
private:
    double precio;
    int cantidad;
    bool alcohol;
public:
    ProductoBebida(int _id, const string& _nombre, double _precio, int _cantidad, bool _alcohol)
        : Producto(_id, _nombre, "Bebida"), precio(_precio), cantidad(_cantidad), alcohol(_alcohol) {
    }

    string to_string() const {
        stringstream ss;
        ss << Producto::to_string()
            << ", Precio: " << precio
            << ", Cantidad: " << cantidad
            << ", Alcohol: " << (alcohol ? "Sí" : "No");
        return ss.str();
    }
};

// Clase  Limpieza
class ProductoLimpieza : public Producto {
private:
    double precio;
    int cantidad;
    string superficie;
public:
    ProductoLimpieza(int _id, const string& _nombre, double _precio, int _cantidad, const string& _superficie)
        : Producto(_id, _nombre, "Limpieza"), precio(_precio), cantidad(_cantidad), superficie(_superficie) {
    }

    string to_string() const {
        stringstream ss;
        ss << Producto::to_string()
            << ", Precio: " << precio
            << ", Cantidad: " << cantidad
            << ", Superficie: " << superficie;
        return ss.str();
    }
};

//  MAIN
int main() {
    ProductoPerecedero leche(1, "Leche entera", 22.5, 10, "2025-07-01");
    ProductoNoPerecedero arroz(2, "Arroz integral", 18.0, 5, "SuperGrano");
    ProductoBebida vino(3, "Vino tinto", 120.0, 2, true);
    ProductoLimpieza cloro(4, "Cloro multiusos", 25.0, 4, "Baños");

    cout << "Inventario del supermercado:\n" << endl;
    cout << leche.to_string() << endl;
    cout << arroz.to_string() << endl;
    cout << vino.to_string() << endl;
    cout << cloro.to_string() << endl;

    return 0;
}
