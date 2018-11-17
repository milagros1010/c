#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"Insaurralde.Barbara.Validaciones.h"
#include"Insaurralde.Barbara.Juegos.h"
#include"Insaurralde.Barbara.Clientes.h"
#include"Insaurralde.Barbara.Alquileres.h"
#include"Insaurralde.Barbara.1G.Informes.h"
#include"marca.h"


void cargarMarca( eMarca marcas[])
{
    eMarca nuevas[]=
    {

        {1,"Ditoys"},
        {2,"Vulcanita"},
        {3,"Yetem"},
        {4,"Ruibal"},
        {5,"TopToys"}

    };

    for(int i=0; i < 5; i++)
    {
        marcas[i] = nuevas[i];
    }
}


void listarMarca (eMarca marcas[])
{
    printf("\n ***  LISTA DE MARCA *** \n\n");
    printf("  CODIGO      NOMBRE \n");


    for(int i=0; i < 5; i++)
    {
        printf("  %d     %10s\n",marcas[i].id, marcas[i].descripcion);
    }
    printf("\n\n");
}



void obtenerMarca (  eMarca marcas [] , int tamc, int id, char cadena[] )

{
    for(int i=0; i < tamc; i++)
    {

        if( marcas[i].id == id)
        {
            strcpy(cadena, marcas[i].descripcion);
        }
    }



}
