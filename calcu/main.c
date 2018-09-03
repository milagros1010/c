#include <stdio.h>
#include <stdlib.h>



int main()
{
int opcion;
float numero1 = 0;
float numero2 = 0;
int suma = 0;

    do{
    system("cls");
    printf("MENU");

    printf("\n 1.ingrese primer operando (A=%.0f)",numero1);
    printf("\n 2.ingrese segundo operando (B=%.0f)",numero2);
    printf("\n 3.Calcular todas las operaciones");
    printf("\n 4.Mostrar todos los resultados");
    printf("\n Seleccionar opcion");
    scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
            ingresarNumeros(&numero1);
                                        // printf("Ingrese el primer operando");
                                        //scanf("%f",numero1);
            break;

            case 2:
            ingresarNumeros(&numero2);
                                // printf("Ingrese segundo operando");
                                // scanf("%f",numero1);
            break;

            case 3:
            suma;
            resta;
            divicion;
            multiplicacion;
             printf("calculando..");

            break;
            case 4:
            break;

            case 5:
            SALIR;
            break;
            flag = 0;
            default:
            printf("ingrese una opcion valida!\n");


        }

        __fpurge(stdin);// limpia el buffer
        printf("\n Ingrese ENTER para continuar...");
        getchar();
        system("clear");

    } while(flag!=0);

    return 0;
}

int ingresarNumero (float* numero)
{
    printf("Ingrese un numero: ");
    scanf("%d"&)
}

}
