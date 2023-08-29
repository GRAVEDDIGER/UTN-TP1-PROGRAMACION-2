#pragma once
#include "entities.h"

Articulo obtenerArticulo();
void mostrarArticulo(Articulo objeto);
void cargarLote(Articulo datos[], size_t size);
void mostrarLote(Articulo datos[], size_t size);
int buscarCodigo(Articulo datos[], size_t size, const char* cadena);
Articulo buscarRegistro(Articulo datos[], size_t size, const char* cadena);
Articulo obtenerArticuloValidado(Articulo datos[], size_t size);
Articulo venta(Articulo datos[], size_t size, const char* cadena, int cantidad);




