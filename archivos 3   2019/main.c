#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1;
int num2;
int num3;
int num4;


FILE* f = fopen("./numeros.txt","r");

if(f==NULL){
    printf("no se pudo abrir el archivo");
    exit(EXIT_FAILURE);

}

while(!feof(f)){

    cant = fscanf(f, "%d %d %d %d", &num1,&num2,&num3,&num4);
    printf("%d %d %d %d",num1, num2,num3 , num4);
    if(cant<4){

        if(feof(f)){

            break;
        }
        else{

            printf("problemas para leer el archivo");
        }
    }

}

fclose(f);
    return 0;
}
//este es el ejercicio 4
//copiar archivo"txt" del ejercicio archivo "3"
