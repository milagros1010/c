#include <stdio.h>
#include <stdlib.h>
#include "funcionesm.c"

int main()
{

int opcion = 0;
float numero1 = 0;
float numero2 = 0;
float suma = 0;
float resta = 0;
float divicion = 0;
float multiplicacion = 0;
int factorial =0;


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
            printf("Ingrese el primer operando");
            scanf("%f",numero1);
            break;

            case 2:
            printf("Ingrese segundo operando");
            scanf("%f",numero1);
            break;

            case 3:

            printf("calculando..");
            resultadoSuma = suma(numero1,numero2);
            resultadoResta = resta(numero1,numero2);
            resultadoDivicion = divicion(numero1,numero2);
            resultadoMultiplicacion = mutiplicacion(numero1,numero2);
            resultadoFactorial = factorial(numero1,numero2);
            system("cls");
            break;

            case 4:

            printf("El resultado de A+B es: %f");
            printf("El resultado de A-B es: %f");
            printf("El resultado de A/B es: %f");
            printf("El resultado de A*B es: %f");
            printf("El factorial de A es: r1 y El factorial de B es: r2");
            break;
            case 5:
            flag = 0;
            //SALIR;
            break;


            default:
            printf("ingrese una opcion valida!\n");
         }
            system("cls");               //__fpurge(stdin); limpia el buffer linux


     } while(flag!=0);
    return 0;

 }
