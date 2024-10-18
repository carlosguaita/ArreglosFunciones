#include <stdio.h>
#include "funciones.h"
#include <string.h>

void leerNombrePrecio(char nombres[10][50], float precio[10], int num, int i){
    printf("Ingrese el nombre del Producto %d: ",num);
    scanf("%s",&nombres[i]);
    printf("Ingrese el precio del Producto %d: ",num);
    scanf("%f",&precio[i]);
}

void imprimirProductos(char nombres[10][50], float precio[10], int num, int i){
    printf("#\t\tNombre\t\tPrecio\n");
    printf("%d\t\t%s\t\t%f\n",num,nombres[i],precio[i]);
}


void buscarProducto(char nombres[10][50], float precio[10], char productoBuscar[50]){
    int noencontrado=0;
    for (int i = 0; i < 10; i++)
    {
        if(strcmp(nombres[i],productoBuscar)==0){
            int num=i+1;
            imprimirProductos(nombres,precio,num,i);
            noencontrado=1;
        }
    }
    if(noencontrado==0){
        printf("No existe el producto\n");
    }
    
}