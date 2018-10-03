#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "examen.h"

int main()
{

    do{

        int opcion;

            system("cls");
            printf("***Menu de Opciones***\n\n");
            printf("1- Alta\n");
            printf("2- Baja\n");
            printf("3- Modificar\n");
            printf("4- Listar\n");
            printf("5- Salir\n");
            printf("\nIngrese opcion: ");
            fflush(stdin);
            scanf("%d", &opcion);

    }while(opcion!=5)

    switch(opcion)
        {
        case 1:
            alta();
            system("pause");
            break;
        case 2:
            baja();
            break;
        case 3:

        do{

                int opcio1;

                    system("cls");
                    printf("***Menu Modificar***\n\n");
                    printf("1- modificar descripcion\n");
                    printf("2- modificar importe\n");
                    printf("3- Salir\n");
                    printf("\nIngrese opcion: ");
                    fflush(stdin);
                    scanf("%d", &opcion1);

        while(opcio1!=3)

                switch(opcion1){

                case 1: descripcion();
                break;
                case 2: importe();
                break;

                }


        }


    return 0;
}













