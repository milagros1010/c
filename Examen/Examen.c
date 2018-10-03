#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "examen.h"

typedef struct
{
    int codigoCliente;
    char nombre[20];
    char apellido[20];
    char domicilio[40];
    char telefono[20];
    int isEmpty;

} eCliente;

typedef struct
{
    int codigoCliente
    float importe;
    char descripcion[20];
} eJuegos;



void inicializarCliente( eCliente x[], int tam)
{
    int i;

    for(i=0; i < tam; i++)
    {
        x[i].isEmpty = 0;
    }
}

int buscarLibre( eCliente x[], int tam)
{
    int indice = -1;
    int i;

    for(i=0; i< tam; i++)
    {

        if( x[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

