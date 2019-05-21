#include <stdio.h>
#include <stdlib.h>

int main()
{


int* pNum;

pNum = (int*) malloc(sizeof(int));//malloc busca espacio en la memoria-sezeof tamaño


if(pNum==NULL){

    printf("no se cargo en memoria");
    exit(1);//termina el programa
}

*pNum = 5;

printf("%d",*pNum);

free(pNum);
    return 0;
}
