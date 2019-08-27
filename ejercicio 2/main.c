#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
nombre
nota 0-10
sexo
promedio de notas todos
promedio de notas de solo mujeres
nombre - sexo-nota max y min

*/
int main()
{
    char nombre[20];
    char sexo;
    char seguir;
    int nota;
    float promedio;
    float promedioF;
    int maximo;
    int minimo;
    int acumulador=0;
    int contador = 0;
    int acumuladorF=0;
    int contadorF=0;
    int flag=0;

    do
    {
        printf("ingresar nombre");
        fflush(stdin);
        gets(nombre);

        printf("ingrese sexo f o m");
        fflush(stdin);
        scanf("%c",&sexo);

        while(sexo!='f' && sexo!='m')
        {
            printf("ERROR,reingrese sexo");
            fflush(stdin);

            scanf("%c",&sexo);
        }



        printf("ingrese nota 1-10");
        scanf("%d",&nota);

        while(nota<1 || nota>10)
        {
            printf("ERROR.Reingresar nota");
            scanf("%d",&nota);
        }
        contador++;
        acumulador=acumulador + nota;

        if(sexo=='f'){
            acumuladorF=acumuladorF+nota;
            contadorF++;
            }

        printf("Desea seguir S-N? ");
        fflush(stdin);
        scanf("%c",&seguir);

    }
    while(seguir=='s');


    if(minimo <= nota && flag==0)
    {
        minimo = nota;

    }

    if(nota >= maximo && flag==0)
    {

        maximo = nota;
        flag=1;
    }

    promedio = (float)acumulador/contador;
    promedioF =(float)acumuladorF/contadorF;

    printf("promedio: %.2f",promedio);
    printf("promedio de mujeres: %.2f",promedioF);
    printf("nota max: %d y min: %d",maximo,minimo);

    return 0;
}
