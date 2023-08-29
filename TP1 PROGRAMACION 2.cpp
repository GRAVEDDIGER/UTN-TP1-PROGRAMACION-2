// TP1 PROGRAMACION 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include "functions.hpp"
using  namespace std;


/////////////////////////////////////
const int inventarioSize = 5;
/////////////////////////////////////

int menu() 
{
	int option;
	cout << "Ingrese la opcion deseada :\n";
	cout << "0 - Salir\n";
	cout << "1 - Ingresar lote de datos\n";
	cout << "2 - Mostrar lote de datos\n";
	cout << "3 - Buscar articulo x Codigo\n";
	cout << "4 - Buscar indice de articulo x codigo\n";
	cout << "5 - Vender\n";
	cin >> option;
	return option;

}

int main()
{

   bool exit = false;
   Articulo inventario[inventarioSize];
   Articulo encontrado;
   Articulo vendido;
   while (!exit) 
   {
	   switch (menu())
	   {
	   case 0:
		   exit = true;
		   break;
	   case 1:
		   cargarLote(inventario,inventarioSize);
		   break;
	   case 2:
		   mostrarLote(inventario, inventarioSize);
		   break;
	   case 3:
		   char codigo[5];
		   cin.ignore();
		   cout << "Ingrese el codigo de articulo a obtener\n";
		   cin.getline(codigo, 5);
		   encontrado=buscarRegistro(inventario, inventarioSize, codigo);
		   mostrarArticulo(encontrado);
		   break;
	   case 4:
		   char codigoART[5];
		   int encontrar;
		   cin.ignore();
		   cout << "Ingrese el codigo de articulo a obtener\n";
		   cin.getline(codigoART, 5);
		   encontrar = buscarCodigo(inventario, inventarioSize, codigoART);
		   cout << "El articulo se encuentra en el indice: " << encontrar << endl;
		   break;
	   case 5:
		   char codigoArticulo[5];
		   int cantidad;
		   cin.ignore();
 		   cout << "Ingrese el codigo de articulo a vender\n";
		   cin.getline(codigoArticulo, 5);
		   cout << "Ingrese la cantidad a vender\n";
		   cin >> cantidad;
		   vendido=venta(inventario, inventarioSize, codigoArticulo, cantidad);
		   cout << "Se han vendido " << cantidad << "de ";
		   mostrarArticulo(vendido);
		   break;
	   default:
		   cout << "Opcion invalida\n";
		   break;
	   }
   }
}
