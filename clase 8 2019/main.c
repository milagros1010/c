#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct{
int legajo;
char nombre;
float sueldo;
int ocupado;

}eEmpleado;

void inicializarEmpleados(eEmpleado vec[],int tam);
int buscarEspacioLibre(eEmpleado vec[],int tam);
int buscarEmpleado(eEmpleado vec[],tam,legajoAbuscar);


,


int main()
{
int opcion;

eEmpleado lista[TAM];
int inicializarEmpleados(lista,TAM);
int buscarEspacioLibre(lista,TAM);

do{
    system("cls");
    printf("ABM");
    printf("\n 1.Alta");
    printf("\n 2.Baja");
    printf("\n 3.Modificar empleado");
    printf("\n 4.Ordenar empleado");
    printf("\n 5.Listar empleados");
    printf("\n 6.Salir");
    printf("\n Seleccionar opcion\n");
    scanf("%d",&opcion);


         switch(opcion){

         case 1:
            printf("Alta empleados");
            system(pause);
            break;

         case 2:
            printf("Baja empleados");
            system(pause);
            break;

         case 3:
            printf("Modificar empleado");
            system(pause);
            break;

         case 4:
            printf("Ordenar empleados");
            system(pause);
            break;

         case 5:
            printf("Listar empleados");
            system(pause);
            break;


         }

while(opcion!=6);

    return 0;
}


void inicializarEmpleados(eEmpleado vec[],int tam){
int i;
for(i=0;i<TAM;i++){

   vec[i].ocupado=0;

}


}

int buscarEspacioLibre(eEmpleado vec[],int tam){
int i;
int index;
for(i=0;i<TAM;i++){

 index=-1;

    if(vec[i].ocupado==0){

     index=i;
     break;

    }

    return index;
}


}

int buscarEmpleado(eEmpleado vec[],int tam,int legajo){
int i;
int index;

    index=-1;
    for(i=0;i<tam;i++){

        if(vec[i].legajo == legajo && vec[i].ocupado == 1){

         index = i;
         break;
        }

   return index;
    }



}
void mostrar empleados(eEmpleado vec[],)
