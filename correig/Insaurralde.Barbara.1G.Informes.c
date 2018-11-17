#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"Insaurralde.Barbara.Validaciones.h"
#include"Insaurralde.Barbara.Juegos.h"
#include"Insaurralde.Barbara.Clientes.h"
#include"Insaurralde.Barbara.Alquileres.h"
#include"Insaurralde.Barbara.1G.Informes.h"
#include"marca.h"
void mostrarJuegosxCategoria ( eJuego juegos [], int tamj, eCategoria categoria [], int tamc , eMarca marca [], int tammarca )

{

    int codigo;

    system("cls");

    listarJuegos(juegos,tamj,categoria,tamc,marca,tammarca);
    listarCategorias(categoria);


    printf("Ingrese cod. de categoria: ");
    scanf("%d", &codigo);

    printf("\n\n CODIGO            NOMBRE               IMPORTE      CATEGORIA\n");

    for (int i=0; i<tamj; i++)
    {

        if (juegos[i].idcategoria== codigo && juegos[i].isEmpty==0 )
        {
           listarUnJuegos(juegos [i],categoria,tamc,marca,tammarca);
        }

    }

}

void mostrarJuegosxCategoriaMesa ( eJuego juegos [], int tamj, eCategoria categoria [], int tamc , eMarca marca [], int tammarca )

{

    system("cls");

   listarJuegos(juegos,tamj,categoria,tamc,marca,tammarca);

    printf("\n\n CODIGO            NOMBRE               IMPORTE      CATEGORIA\n");

    for (int i=0; i<tamj; i++)
    {

        if (juegos[i].idcategoria== 1 && juegos[i].isEmpty==0 )
        {
           listarUnJuegos(juegos [i],categoria,tamc,marca,tammarca);
        }

    }

}


void totalImportesPagadosPorClienteSeleccionado (sAlquiler alquileres [], int tam, eJuego juegos [], int tamj, sCliente clientes[], int tamc)
{

    system("cls");
    int codigo;
    int acumuladosPrecioJuegos=0;

    listarClientes(clientes,tamc);

    printf("\nIngrese codigo del cliente que desea consultar: ");
    scanf("%d", &codigo);

    for (int i=0; i < tam; i++)
    {
        if (alquileres[i].codClientes== codigo && alquileres[i].isEmpty== 0)
        {

            acumuladosPrecioJuegos=acumuladosPrecioJuegos+juegos[i].importe;


            listarUnAlquilerDetallado(alquileres[i],clientes,tamc,juegos,tamj);

        }

    }

    for (int i=0; i < tamc; i++)
    {
        if (clientes[i].codCliente== codigo && clientes[i].isEmpty==0 )
        {
            if (acumuladosPrecioJuegos==0)
            {
                printf("No realizo alquiler de juegos\n\n ");
            }
            else
            {

                printf("\n El/la cliente: %s , pago un total de: $ %d en sus alquileres\n\n",clientes[i].nombre, acumuladosPrecioJuegos);
            }


        }

    }
}


void listarClientesQueNoALquilaronJuegos ( sAlquiler alquileres [], int tam, eJuego juegos [], int tamj, sCliente clientes[], int tamc)
{
    system("cls");
    int bandera=0;
    int bandera1=0;
    listarAlquileresDetallados(alquileres,tam,clientes,tamc,juegos,tamj);

    printf("\n\n *****    CLIENTES QUE NO ALQUILARON JUEGOS    *****\n\n");
    printf("    COD.CLIENTE            NOMBRE               SEXO              TELEFONO\n");

    int j;

    for (int i=0; i < tamc; i++)
    {
        if (clientes[i].isEmpty==0)
        {
            bandera=0;

            for ( j=0; j < tam; j++)
            {

                if ( alquileres[j].codClientes== clientes[i].codCliente && alquileres[j].isEmpty==0 )
                {
                    bandera=1;
                    break;
                }
            }
            if(bandera==0 )

            {

                listarUnCliente(clientes[i]);
                bandera1=1;
            }
        }

        if (bandera1==0)
        {
            printf("Todos los clientes han alquilado");
        }



    }

}


void listarJuegosQueNoHanSidoAlquilados ( sAlquiler alquileres [], int tam, eJuego juegos [], int tamj, sCliente clientes[], int tamc, eCategoria categoria [], int tamcg , eMarca marca [], int tammarca)
{
    system("cls");
    int bandera=0;
    int bandera2=0;
    listarAlquileresDetallados(alquileres,tam,clientes,tamc,juegos,tamj);

    printf("\n\n *****    JUEGOS QUE NO HAY SIDO ALQUILADOS    ***** \n\n\n");
    printf(" CODIGO            NOMBRE               IMPORTE      CATEGORIA \n");

    int j;

    for (int i=0; i < tamj; i++)
    {
        bandera=0;
        if (juegos[i].isEmpty==0)
        {
            for ( j=0; j < tam; j++)
            {
                if ( alquileres[j].codJuegos== juegos[i].id && alquileres[j].isEmpty==0 )
                {
                    bandera=1;
                    break;
                }
            }

            if(bandera==0)

            {

               listarUnJuegos(juegos[i],categoria,tamcg,marca,tammarca);
                bandera2=1;
            }
        }



    }

    if (bandera2==0)
    {
        printf("Todos los juegos estan alquilados");
    }

}


void telefonosDeClientesQueAlquilaronEnUnaDeterminadaFecha (sCliente cliente [],int tamc, sAlquiler alquiler [], int tama, sFecha fecha [], int tamf, eJuego juegos[], int tamj)

{
    system("cls");
    sFecha fechaAux;


    int existe=0;
    int j;

    listarAlquileresDetallados(alquiler,tama,cliente,tamc,juegos,tamj);
    printf("\n\n *****    TELEFONOS DE CLIENTES    ***** \n\n\n");

    printf(" Ingrese fecha: ");
    scanf("%d",&fechaAux.dia);
    printf("\n Ingrese mes:  ");
    scanf("%d", &fechaAux.mes);
    printf("\n Ingrese anio:  ");
    scanf("%d", &fechaAux.anio);

    printf("\n\n      TELEFONOS  \n");

    for (int i=0; i<tama; i++)
    {
        if(alquiler[i].isEmpty==0)
        {
            for (j=0; j<tamc ; j++ )
            {
                if (compararFecha(alquiler[i].fecha,fechaAux) && cliente[j].isEmpty == 0 && alquiler[i].codClientes== cliente[j].codCliente)
                {
                    printf("\n   %10s \n ", cliente[j].telefono);

                    existe=1;
                    break;
                }
            }

        }
    }
    if (existe==0)
    {
        printf("\nNo hay alquileres en esa fecha.\n");
    }


}


void listarLosJuegosAlquiladosPorMujeres (sAlquiler alquiler [], int tama, sCliente cliente[], int tamc, eJuego juego [], int tamj )
{


    for (int i=0; i<tama; i++)
    {
        if ( alquiler[i].isEmpty==0)

        {
            for (int j=0; j<tamc; j++)
            {
                if (cliente[j].isEmpty==0  &&  cliente[j].codCliente == alquiler[i].codClientes)
                {
                    if (esMujer(cliente,tamc,cliente[j].codCliente))
                    {
                        printf(" %d \n",alquiler[i].codJuegos);

                    }
                }
            }

        }

    }

}


void mostrarEloLosJuegosAlquiladosPorHombre (sAlquiler alquiler [], int tama, sCliente cliente[], int tamc, eJuego juego [], int tamj, eCategoria categoria[], int tamcg, eMarca marca [], int tammarca )
{

    int contadorJuegos[tamj];
    int mayor;

    for (int j=0; j<tamj; j++)
    {

        contadorJuegos[j]=0;
    }


    for (int i=0; i<tama; i++)
    {
        if ( alquiler[i].isEmpty==0 && esHombre(cliente,tamc,alquiler[i].codClientes))

        {
            for (int j=0; j<tamj; j++)
            {
                if (juego[j].isEmpty==0 && alquiler[i].codJuegos== juego[j].id)

                {
                    contadorJuegos[j]++;

                }

            }
        }
    }

    mayor=contadorJuegos[0];

    for (int i=1; i<tamj; i++)
    {

        if ( contadorJuegos[i] > mayor)
        {
            mayor = contadorJuegos[i];
        }
    }

    printf(" Cantidad de alquileres %d \n\n ",mayor);

    for (int i=1; i<tamj; i++)
    {

        if ( contadorJuegos[i]== mayor)
        {
            listarUnJuegos(juego[i],categoria,tamcg,marca,tammarca);

        }

    }

}


void mostrarLosClientesQueAlquilaronUnDeterminadoJuego (sAlquiler alquileres [], int tama, sCliente clienetes [], int tamc, eJuego juego [], int tamj, eCategoria categoria [], int tamcg, eMarca marca [], int tammarca )

{
    int codigo;
    int bandera =0;

    listarJuegos(juego,tamj,categoria,tamcg,marca,tammarca);

    printf(" \n Ingrese codigo de juego: ");
    scanf("%d", &codigo);



    for (int i=0 ; i<tamj; i ++)
    {
        if ( juego[i].isEmpty== 0 && juego[i].id== codigo)
        {

            for (int j=0 ; j<tama; j ++)
            {
                if (alquileres[j].isEmpty==0 && alquileres[j].codJuegos==juego[i].id)

                {
                    printf(" \n ** CLIENTE ** \n ");
                    printf("  %d \n", alquileres[j].codClientes);
                    bandera=1;

                }

            }


        }

    }

    if (bandera==0)
    {
        printf(" \n  El juego no fue alqilado \n\n ");
    }

}


void mostrarLaRecaudacionDeUnaFechaEnParticular (sAlquiler alquileres [], int tama,  eJuego juego [], int tamj, sCliente cliente[], int tamc)


{
    system("cls");
    sFecha fechaAux;
    int acumulador=0;

    listarAlquileresDetallados(alquileres,tama,cliente,tamc,juego,tamj);

    printf("\nINGRESE FECHA\n Ingrese dia: ");
    scanf("%d",&fechaAux.dia);
    printf("\n Ingrese mes:  ");
    scanf("%d", &fechaAux.mes);
    printf("\n Ingrese anio:  ");
    scanf("%d", &fechaAux.anio);

    for ( int i =0 ; i<tama; i++)
    {
        if ( compararFecha(alquileres[i].fecha,fechaAux) && alquileres[i].isEmpty==0)
        {
            for (int j=0 ; j<tamj; j++)
            {
                if (alquileres[i].codJuegos== juego[j].id)
                {

                    acumulador=acumulador+ juego[j].importe;
                }

            }

        }

    }


    printf(" \n La recadacion en la fecha seleccionada fue de: $ %d \n\n", acumulador);
}


// Informe 1

void mostrarTodosLosJuegosDeUnaDeterminaMarca ( eJuego juegos [], int tamj, eMarca marca [], int tamm )

{

    int codigo;
    int bandera=0;


    listarMarca(marca);
    printf("\n Ingrese id de marca: ");
    scanf("%d", &codigo);

    for ( int i=0 ; i<tamj; i++)
    {
        if (juegos[i].isEmpty==0 && juegos[i].idMarca== codigo)
        {

            printf( " %10s \n", juegos[i].descripcion);
            bandera=1;


        }
    }

    if (bandera==0)
    {
        printf("No hay juegos de esa marca");
    }


}


// Informe 3

void informarTodosLosClientesQueAlquilaronUnaDeterminadaMarca (sCliente cliente [], int tamc, eJuego juegos [], int tamj, eMarca marca [], int tammarca , sAlquiler alquiler [], int tama)
{

    int codigo;
    int bandera=0;

    listarMarca(marca);
    printf("\n Ingrese id de marca: ");
    scanf("%d", &codigo);


    for ( int i=0 ; i<tamj; i++)
    {
        if ( juegos[i].isEmpty==0 && juegos[i].idMarca==codigo)
        {

            for ( int j=0 ; j<tama; j++)
            {
                if ( alquiler[j].isEmpty==0 && alquiler[j].codJuegos== juegos[i].id)

                {
                    listarUnCliente(cliente[j]);
                    //printf("\n Cliente id:  %d \n", alquiler[j].codClientes);
                    bandera=1;
                }


            }

        }


    }
    if (bandera==0)
    {
        printf("La marca no fue alquilada.");

    }



}


// Informe 2

void informarEnCuantosAlquileresAparecenJuegosDeUnaDeterminadaMarca (sAlquiler alquiler [], int tamaq, eJuego juegos [], int tamj, eMarca marca [], int tamma)
{

    int codigo;
    int contador[tamj];

     for (int j=0; j<tamj; j++)
    {

        contador[j]=0;
    }

    listarMarca(marca);
    printf("\n Ingrese id de marca: ");
    scanf("%d", &codigo);


    for ( int i=0 ; i<tamj; i++)
    {
        if ( juegos[i].isEmpty==0 && juegos[i].idMarca==codigo)
        {

            for ( int j=0 ; j<tamaq; j++)
            {
                if ( alquiler[j].isEmpty==0 && alquiler[j].codJuegos== juegos[i].id)

                {
                    contador[j]++;

                }


            }

        }


    }


    for (int j=0; j<tamj; j++)
    {

         printf("  %d\n", contador[j]);
    }





}


