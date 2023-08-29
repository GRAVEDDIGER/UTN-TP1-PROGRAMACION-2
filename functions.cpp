#include <iostream>
#include <string.h>
#include "entities.h"

using namespace std;
Articulo obtenerArticulo()
{
    Articulo articulo;
    cout << "Ïngrese codigo de articulo: \n";
    cin.getline(articulo.cod_articulo, 4);
    cout << "Ingrese la descripcion :\n";
    cin.getline(articulo.description, 29);
    cout << "Ingrese el precio por unidad :\n";
    cin >> articulo.precio_unitario;
    cout << "Ingrese cantidad disponible :\n";
    cin >> articulo.stock;
    return articulo;
}
void mostrarArticulo(Articulo objeto)
{
    cout << "Codigo de Articulo :" << objeto.cod_articulo << " descripcion : " << objeto.description << " precio: " << objeto.precio_unitario << " Stock: " << objeto.stock << endl;
}
void mostrarLote(Articulo datos[], size_t size)
{
    for (int i = 0; i < size; i++) \
    {
        mostrarArticulo(datos[i]);
    }
}

int buscarCodigo(Articulo datos[], size_t size, const char* cadena)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(datos[i].cod_articulo, cadena) == 0) return i;
    }
    return -1;
}
Articulo buscarRegistro(Articulo datos[], size_t size, const char* cadena) {
    for (int i = 0; i < size; i++)
    {
        if (strcmp(datos[i].cod_articulo, cadena) == 0) return datos[i];
    }
    //ver retorno con codigo de articuo igual a -1
    Articulo retorno;
    retorno.precio_unitario = -1;
    return retorno;
}

Articulo obtenerArticuloValidado(Articulo datos[], size_t size)
{

    Articulo respuesta ;
    char codigo[5];
    bool valido = false;
    //cin.ignore();
    do {          
        
        cout << "Ingrese el codigo del producto: " << endl;
        cin.ignore();
        cin.getline(respuesta.cod_articulo, 5);
        if (buscarCodigo(datos, size, respuesta.cod_articulo) == -1)
        {
            cout << "Ingrese la descripcion :\n";
            cin.getline(respuesta.description, 29);
            cout << "Ingrese el precio por unidad :\n";
            cin >> respuesta.precio_unitario;
            cout << "Ingrese cantidad disponible :\n";
            cin >> respuesta.stock;
            valido = true;
        }
        else { cout << "Codigo ya ingresado, ingrese un nuevo codigo! \n"; 
        }
 
    } while(!valido);
    return respuesta;
}
void cargarLote(Articulo datos[], size_t size)
{
    for (int i = 0; i < size; i++)
    {
        datos[i] = obtenerArticuloValidado(datos,size);
    }
}

Articulo venta(Articulo datos[], size_t size, const char* cadena, int cantidad)
{
    Articulo vendido;
    int codigo = buscarCodigo(datos, size, cadena);
    if (codigo != -1) {
        vendido = buscarRegistro(datos, size, cadena);
        if ((vendido.stock - cantidad) > -1) {
            vendido.stock -= cantidad;
            datos[codigo].stock -= cantidad;
            
        }

    }
    return vendido;
}
