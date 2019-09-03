#include <stdio.h>
#include <stdlib.h>

int getIntRango(int* nota, char* mensaje, char* mensajeError, int min, int max, int intentos, int error );

int main()
{

int nota;
int todoOk;

todoOk = getIntRango(&nota,"ingrese nota","Error. reingrese nota",0,10,3,-1);

if(todoOk==0){

    printf("Error.no se pudo conseuir la nota");
}
else{

printf("la nota es: %d ",nota);
}


    return 0;
}

int getIntRango(int* nota,char* mensaje, char* mensajeError, int min, int max, int intentos, int error ){

int auxiliar;
int todoOk=1;

printf("%s", mensaje);
scanf("%d",&auxiliar);


while(auxiliar<min || auxiliar>max){
  intentos--;

if(intentos==0){
    todoOk=0;
    break;
}

printf("%s",mensajeError);
scanf("%d",&auxiliar);

}

if(intentos!=0){
     todoOk=0;
    *nota = auxiliar;
}

return todoOk;

}
