# Trabajo Practico Individual #1 Programacion I

El programa debe compilar para ser tenido en cuenta. NO se admite entregas fuera de la fecha de 
entrega. Fecha límite 29/08/2023.
Enunciado
Un negocio representa los artículos con los que trabaja de la siguiente manera:
⎯ Código de artículo (char[5])
⎯ Descripción (char[30])
⎯ Precio unitario (float)
⎯ Unidades en stock (int)
Se pide calcular y/o informar:
1) Se debe diseñar el struct correspondiente y realizar las funciones
necesarias para cargar y mostrar un registro de un artículo.
2) Suponer que ahora el negocio vende un total de 50 artículos diferentes. Para 
cada uno de ellos se almacena la información que se detalló para el struct
anterior. Hacer las funciones para cargar y mostrar por pantalla la lista de
los 50 artículos. 
3) Hacer una función que reciba un vector de tipo struct artículo, con el mismo 
formato del ítem anterior, un entero que representa la cantidad de elementos 
del vector, y una cadena de caracteres, y devuelva la posición del código del 
registro que coincida con la cadena recibida. En caso de que no exista 
coincidencia debe devolver -1.
4) Igual al ítem anterior, pero la función debe devolver el registro completo. 
En caso de que no exista coincidencia, debe devolver un registro con 
valor -1 en el campo precio unitario.
5) Realizar las mismas funciones del ítem 2, pero ahora al momento de cargar 
los registros no debe permitir que se repita el código de artículo en ninguno 
de los 50 registros. Usar para eso la función del ítem 3.
PUENTES
PLAN DE INTEGRACIÓN
TERRITORIAL UNIVERSITARIA
UNIVERSIDAD TECNOLÓGICA NACIONAL - FACULTAD REGIONAL GENERAL PACHECO
TECNICATURA UNIVERSITARIA EN PROGRAMACIÓN
PROGRAMACIÓN II
2
6) Agregar la opción Venta. En la venta se debe pedir el código de artículo y 
la cantidad de unidades a comprar, e informar el importe de la venta. Se debe 
verificar que exista el código, y que la cantidad pedida no exceda el stock 
disponible. Con cada venta debe disminuir el stock del artículo vendido.
Aclaraciones
Resolver usando funciones. Deben estar los archivos main.cpp, Funciones.h, 
Funciones.cpp y Artículos.h.
El main.cpp debe contener un menú de opciones.

## Headers
- functions.h Firma de las funciones mencionadas en los puntos del trabajo
- entities.h Struc Articulo que define las caracteristicas solicitadas para cada articulo

## Sources
- Functions.cpp Codigo de las funciones definidas en el proyecto 
- TP1 Programacion 2.cpp Codigo principal con su funcion main 

