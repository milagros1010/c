#include <stdio.h>
#include <stdlib.h>

/*
int pedirIntRango;

int main()
{
int x = pedirIntRango();

 printf("%d",x);

    return 0;
}

int pedirIntRango(int min,int sup){

int num;

 printf("Ingrese un numero entre %d y %d",min,sup);
 scanf("%d",&num);

 while(num < 0 || num > 500){

 printf("Error. Ingrese un numero entre %d y %d",min,sup);
 scanf("%d",&num);

 }

return num;


}


int main(){

int x;
int flagX;


    flagX = getInt(&x);

    if(flagX == 1){

        printf("x vale: %d"x);
    }
    else{

        printf("No se puede cargar");
    }

}

void getInt(int* puntero){

int num;
int todoOk;

    printf("ingrese numero: ");
    scanf("%d"&num);

    if(num >=0){

        *puntero = num;
        todoOk = 1;

    }
    else{

        todoOk = 0;
}

}
*/


int main(){

int x;
int flagX;


    flagX = getInt(&x);

    if(flagX == 1){

        printf("x vale: %d"x);
    }
    else{

        printf("No se puede cargar");
    }

}

void getInt(int* puntero){

int num;
int todoOk;
int contador = 0;

    printf("ingrese numero positivo: ");
    scanf("%d"&num);

    while(num <= 0){

        printf("Error.Reingrese numero")
        scanf("%d"&num);
        contador++;

        if(contador=3){
            todoOk

        }
    }


    if(num >=0){

        *puntero = num;
        todoOk = 1;

    }
    else{

        todoOk = 0;
}

}
*/
