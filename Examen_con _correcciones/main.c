#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "examen.h"
//#define "*pCodigoJ"
//#define "*pCodigo[x]"
//#define "*codigoC"
//#define "*codigoA"
//#define "flag=0"

//CHEQUEAR PARENTESIS DE FUNCIONES

int main()
{

    do{

        int opcion,opcion1,opcion2,opcion3,opcion4,opcion5;

            system("cls");
            printf("***MENU PRINCIPAL***\n\n");
            printf("1- Juegos\n");
            printf("2- Clientes");
            printf("3- Alquileres\n");
            printf("4- Salir\n");
            printf("\nIngrese opcion: ");
            fflush(stdin);
            scanf("%d", &opcion);

    }while(opcion!=5)

    switch(opcion)
        {
        case 1:
            do{
            system("cls");
            printf("***MENU DE JUEGOS***\n\n");
            printf("1- Alta\n");
            printf("2- Modificar\n");
            printf("3- Baja\n");
            printf("4- Listar\n");
            printf("5- Salir\n");
            printf("\nIngrese opcion: ");
            fflush(stdin);
            scanf("%d", &opcion1);
            }while(opcion1!=5)

            switch(opcion1){

            case 1: descripcionJuego(cadena);
                    importeIngresado(importe);


            case 2:
                    do{
                    system("cls");
                    printf("***Menu Modificar***\n\n");
                    printf("1- Modificar descripcion\n");
                    printf("2- Modificar importe\n");
                    printf("3- Salir\n");
                    printf("\nIngrese opcion: ");
                    fflush(stdin);
                    scanf("%d", &opcion2);

                    }while(opcio2!=3)

                    switch(opcion2){

                    case 1:modificarJuegoDescripcion(juego); break;

                    case 2:modificarJuegoImporte (int importe); break;


            case 3:
                codigoBorrar(codigoIb); break;//borra todo el codigo de juego
            case 4:
                lista(ejuegos); break;

                    }

        system("pause");
        break;//ROMPE EL CASE 1 DEL MENU PRINCIPAL

        case 2:
            do
            system("cls");
            printf("***MENU DE CLIENTES***\n\n");
            printf("1- Alta\n");
            printf("2- Modificar\n");
            printf("3- Baja\n");
            printf("4- Listar\n");
            printf("5- Salir\n");
            printf("\nIngrese opcion: ");
            fflush(stdin);
            scanf("%d", &opcion3);
            }while(opcion3!=5)

                switch(opcion3){
                case 1:     importeIngresadoYvalidado(importe);
                            validacionYingresoApellido (apellido);
                            validacionYingresoNombre(nombre);
                            validacionYingresoDomicilio(domicilio);
                            validacionYingresoTelefono(int tel);

                break;

                case 2:
                    do{
                    system("cls");
                    printf("***Menu Modificar Clientes***\n\n");
                    printf("1- Modificar apellido\n");
                    printf("2- Modificar nombre\n");
                    printf("3- Modificar domicilio\n");
                    printf("4- Modificar Telefono \n");
                    printf("5- Salir \n");
                    printf("\nIngrese opcion: ");
                    fflush(stdin);
                    scanf("%d", &opcion4);

                    }while(opcio4!=5)

                            switch(opcion4){

                            case 1: modificarClienteApellido(apellido); break;
                            case 2: modificarClienteNombre(nombre); break;
                            case 3:modificarClienteDomicilio(juego); break;
                            case 4:modificarClienteTelefono(tel); break;



                            }

                case 3:
                    codigoBorrar(int codigoIbC); break;

                case 4: listaClientes(eCliente); break;

                }

            break;
        case 3:
            do
            printf("***MENU DE ALQUILER***\n\n");
            printf("1- Alta\n");
            printf("2- Ocurrencias \n");//CHEQUEAR
            printf("3- SALIR \n");

            printf("\nIngrese opcion: ");
            fflush(stdin);
            scanf("%d", &opcion4);

            }while(opcion5!=3)

                switch(opcion5){
                case 1: codigoJuego(codigo ,*codigoJ);
                        codigoCliente(codigo ,*codigoC);
                        codigoCliente(codigo ,*codigoAlquiler);
                        fechaCompleta(fecha);
                break;
                case 2: ocurrencias();
                    break;
                }

                }


        }


    return 0;
}













