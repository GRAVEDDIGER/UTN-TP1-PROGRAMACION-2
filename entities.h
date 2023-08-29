#pragma once
#include <string.h>
struct Articulo {
    char cod_articulo[5];
    char description[30];
    float precio_unitario;
    int stock=0;
    
};