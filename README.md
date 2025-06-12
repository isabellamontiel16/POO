# POO
En este proyecto desarrollé un sistema básico de inventario para distintos tipos de productos usando programación orientada a objetos en C++. El objetivo principal fue aplicar conceptos de POO como herencia, clases abstractas, polimorfismo, encapsulamiento y sobrecarga de operadores.

# Descripción
La clase padre es Producto, que es abstracta al contener una función virtual pura to_string(). Esta función se implementa en las clases derivadas para mostrar la información específica de cada tipo de producto.

Se crearon cuatro clases hijas que representan diferentes tipos de productos:

ProductoPerecedero: incluye precio, cantidad y fecha de caducidad.

ProductoNoPerecedero: incluye precio, cantidad y marca.

ProductoBebida: incluye precio, cantidad y un atributo para indicar si contiene alcohol.

ProductoLimpieza: incluye precio, cantidad y la superficie para la cual está diseñado el producto.

Además, para manejar precio y cantidad de forma agrupada, se creó la clase Inventario, que es usada como miembro en las clases derivadas.

En el archivo main.cpp se crean dinámicamente instancias de cada tipo de producto y se almacenan en un arreglo de punteros a Producto. Esto permite aprovechar el polimorfismo para imprimir la información detallada de cada producto usando el operador << sobrecargado.

Finalmente, el programa libera correctamente la memoria asignada para evitar fugas.

# Casos que podrían causar fallas o que hay que controlar
Desbordamiento del arreglo: Como se usa un arreglo estático con capacidad fija (20), agregar más productos sin control puede causar errores o corrupción de memoria. Sería ideal verificar antes de insertar o usar un contenedor dinámico.

Gestión de memoria: Es fundamental eliminar todos los objetos creados dinámicamente para evitar fugas, como se hace en el main.

Datos inválidos: No hay validaciones para valores negativos en precio o cantidad, o formatos incorrectos en fechas. Esto puede afectar cálculos o la presentación.

Sobrecarga y polimorfismo: Si se agrega alguna clase sin implementar correctamente to_string(), el programa dejará de funcionar correctamente.

# Compilación
g++ -std=c++11 main.cpp -o inventario

./inventario    # Linux/macOS

inventario.exe  # Windows
