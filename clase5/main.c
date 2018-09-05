#include <stdio.h>
#include <stdlib.h>
#define CANT 2
int main()
{
int i;
int edad[CANT];
float salario[CANT];

    for(i=0;i<CANT;i++){
        printf("Ingrese edad ");
        scanf("%d",&edad[i]);
        printf("Ingrese salario ");
        scanf("%f",&salario[i]);
    }
    for(i=0;i<CANT;i++){
       printf("%d\n",edad[i]);
       printf("%f\n ",salario[i]);
    }



}
