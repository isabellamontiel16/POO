# POO
En este proyecto desarrollé un sistema básico de inventario para un supermercado usando programación orientada a objetos en C++. El objetivo fue aplicar los conceptos clave de POO como herencia, clases abstractas, polimorfismo, sobrecarga de operadores y encapsulamiento.

Creé una clase base llamada Producto, que es abstracta porque tiene una función virtual pura llamada to_string(). Esa función es implementada de forma personalizada en las clases hijas para mostrar la información de cada producto. También sobrecargué el operador << para poder imprimir fácilmente los objetos con cout.

A partir de Producto, hice cuatro clases diferentes:

ProductoPerecedero, que incluye precio, cantidad y fecha de caducidad.

ProductoNoPerecedero, que también tiene precio y cantidad, además de la marca.

ProductoBebida, donde se agrega un atributo para saber si tiene alcohol o no.

ProductoLimpieza, que indica la superficie para la que está hecho el producto.

Todos estos productos se crean dinámicamente en el main, y se guardan en un vector de punteros a Producto. Así pude usar polimorfismo al imprimirlos, ya que todos tienen su propia versión de to_string().

El código está organizado en archivos .h y .cpp por cada clase, lo cual ayuda a mantener todo más claro y ordenado. También me aseguré de liberar bien la memoria al final del programa.
