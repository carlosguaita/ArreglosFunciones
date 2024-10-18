#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    char nombreProducto[10][50];
    float precioProducto[10];

    leerNombrePrecio(nombreProducto,precioProducto,1,0);

    imprimirProductos(nombreProducto,precioProducto,1,0);

    char nombreBuscar[50]="Arroz";

    buscarProducto(nombreProducto,precioProducto,nombreBuscar);
    


    return 0;
}