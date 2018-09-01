#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int flag, opcion;

    do
    {
        printf("1.ingresar 1er operando(A=x)\n 2. Ingresar 2do operando\n: ");
        printf("\n Ingrese una opcion del menu: ");
        scanf("%d",&opcion);
        __fpurge(stdin);


        switch(opcion)
        {
            case 1:
                ingresarNumeros(&numero1);
            break;
            case 2:
                ingresarNumeros(&numero2);
            case 3:
                suma();
                resta();
                division();
                printf("calculando..")
            break;
            case 4:

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
