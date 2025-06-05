#include <iostream>
#include <vector>
#include "ProductoPerecedero.h"
#include "ProductoNoPerecedero.h"
#include "ProductoBebida.h"
#include "ProductoLimpieza.h"

int main() {
    std::vector<Producto*> inventario;

    inventario.push_back(new ProductoPerecedero(1, "Leche entera", 22.5, 10, "2025-07-01"));
    inventario.push_back(new ProductoNoPerecedero(2, "Arroz integral", 18.0, 5, "SuperGrano"));
    inventario.push_back(new ProductoBebida(3, "Vino tinto", 120.0, 2, true));
    inventario.push_back(new ProductoLimpieza(4, "Cloro multiusos", 25.0, 4, "Baños"));

    std::cout << "Inventario del supermercado:\n\n";
    for (auto p : inventario) {
        std::cout << *p << std::endl;
    }

    // Liberar memoria
    for (auto p : inventario) {
        delete p;
    }

    return 0;
}
