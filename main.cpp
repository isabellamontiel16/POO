#include <iostream>
#include "ProductoPerecedero.h"
#include "ProductoLimpieza.h"
#include "ProductoNoPerecedero.h"
#include "ProductoBebida.h"

int main() {
    const int capacidad = 20;
    Producto** productos = new Producto * [capacidad];
    int numProductos = 0;

    productos[numProductos++] = new ProductoPerecedero(1, "Leche", 20.5, 10, "2025-07-15");
    productos[numProductos++] = new ProductoPerecedero(2, "Yogurt", 15.0, 8, "2025-07-10");
    productos[numProductos++] = new ProductoPerecedero(3, "Queso", 50.0, 5, "2025-07-20");
    productos[numProductos++] = new ProductoPerecedero(4, "Pan", 10.0, 20, "2025-06-20");
    productos[numProductos++] = new ProductoPerecedero(5, "Jamón", 30.0, 6, "2025-06-25");

    productos[numProductos++] = new ProductoLimpieza(6, "Detergente", 35.0, 5, "Ropa");
    productos[numProductos++] = new ProductoLimpieza(7, "Limpiador Multiusos", 40.0, 7, "Superficies");
    productos[numProductos++] = new ProductoLimpieza(8, "Desinfectante", 25.0, 3, "Baño");
    productos[numProductos++] = new ProductoLimpieza(9, "Shampoo para alfombra", 60.0, 2, "Alfombra");
    productos[numProductos++] = new ProductoLimpieza(10, "Limpia vidrios", 22.0, 4, "Vidrio");

    productos[numProductos++] = new ProductoNoPerecedero(11, "Lentejas", 15.0, 20, "La Moderna");
    productos[numProductos++] = new ProductoNoPerecedero(12, "Arroz", 12.0, 30, "Tío Ben");
    productos[numProductos++] = new ProductoNoPerecedero(13, "Pasta", 10.0, 25, "Barilla");
    productos[numProductos++] = new ProductoNoPerecedero(14, "Atún en lata", 18.0, 15, "Dolores");
    productos[numProductos++] = new ProductoNoPerecedero(15, "Frijoles", 16.0, 18, "Isadora");

    productos[numProductos++] = new ProductoBebida(16, "Cerveza", 12.0, 30, true);
    productos[numProductos++] = new ProductoBebida(17, "Vino Tinto", 120.0, 10, true);
    productos[numProductos++] = new ProductoBebida(18, "Jugo de Naranja", 20.0, 25, false);
    productos[numProductos++] = new ProductoBebida(19, "Refresco Cola", 18.0, 40, false);
    productos[numProductos++] = new ProductoBebida(20, "Agua Mineral", 15.0, 50, false);

    std::cout << "Lista de productos:\n";
    for (int i = 0; i < numProductos; i++) {
        std::cout << *productos[i] << std::endl;
    }

    for (int i = 0; i < numProductos; i++) {
        delete productos[i];
    }
    delete[] productos;

    return 0;
}
