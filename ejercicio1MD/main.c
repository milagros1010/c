#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
int* pNumeros;

pNumeros = (int*) malloc(sizeof(int)*5);//malloc busca espacio en la memoria-sezeof tamaño



if(pNumeros == NULL){

    printf("no se cargo en memoria");
    exit(1);//termina el programa
}

//*pNum = 5;

for(i=0;i<5;i++){
printf("ingrese un numeros");
scanf("%d",pNumeros+i);

}

for(i=0;i<5;i++){
printf("%d",*(pNumeros+i));

}

free(pNumeros);



    return 0;
}
