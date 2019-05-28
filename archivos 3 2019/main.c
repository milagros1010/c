#include <stdio.h>
#include <stdlib.h>

void imprimirNumeros(int numeros);

int main()
{


    int numeros[]= {3,2,4,5,2,6,5,4,7,1,9,3};

    imprimirNumeros(numeros);

    FILE* f = f = fopen("./numeros.txt", "w");

    if(f == NULL){

        fprintf("no se pudo abrir");
        exit(EXIT_FAILURE);
    }
    for(i=0;i<12;i++){
        if((i + 1)%4 !=0){

            fprintf(f,"%d",numeros[i];
        }
        else{
            fprintf(f,"%d,
        }


    }


    return 0;
}

void mostrarNumeros(int numeros){






}
