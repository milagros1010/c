#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main()
{
    int j;
    int i;
    int leg;
    int auxInt;
    int indice;
    int legajos[TAM] = {123, 543, 679, 432, 567, 111, 323, 145, 674, 543};
    int edades[TAM] = {23, 24, 21, 23, 22, 22, 44, 36, 29, 38};
    char sexos[TAM] = {'f', 'f', 'm', 'f', 'm', 'm', 'f', 'f', 'm', 'f'};
    char auxChar;
    char sex;



    printf("ingrese legajo a buscar");
    scanf("%d",&leg);

    indice = buscarEntero(leg,legajos[],TAM);

    if(indice==-1){

        printf("No existe legajo ingresado");
    }
    else{

        sex = sexos[indice];
    }



     }



    }

    for( i=0; i < TAM - 1;  i++)
    {
        for( j = i +1; j < TAM;  j++)
        {
            if( sexos[i] > sexos[j])
            {
                auxInt = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                auxInt = edades[i];
                edades[i] = edades[j];
                edades[j] = auxInt;

                auxChar = sexos[i];
                sexos[i] = sexos[j];
                sexos[j] = auxChar;
            }
            else if( sexos[i] == sexos[j] && edades[i] < edades[j])
                {
                        auxInt = legajos[i];
                        legajos[i] = legajos[j];
                        legajos[j] = auxInt;

                        auxInt = edades[i];
                        edades[i] = edades[j];
                        edades[j] = auxInt;



                }
            }



        }



        for(i=0; i < TAM;  i++)
        {


            printf("%d      %c      %d\n", legajos[i], sexos[i], edades[i]);


        }
        return 0;


    }

int buscarEntero(int num, int vec[],int tam){

int indice=-1;
int i;

    for(i=0;i<tam;i++){

        if(num == vec[i]){

            indice = i;
            break;
        }

    return indice;
    }



}
