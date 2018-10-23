#include <stdio.h>
#include <stdlib.h>


typedef struct{

    int codigo;
    int capacidad;
    char marca[20];
    float precio;

}ePendrive;

int cargarPendrive(ePendrive* pen);
void mostrarPendrive(ePendrive* pen);
void mostrarPendrive(ePendrive* pen);
ePendrive* new_pendrive();


int main()
{
    ePendrive* pen1;

    pen1 =new_pendrive();

    ePendrive miPendrive;

    if(cargarPendrive(&miPendrive)){
       mostrarPendrive(&miPendrive);

    }

    return 0;
}


int cargarPendrive(ePendrive* pen){

    int todoOk = 0;

    if(pen != NULL){

    printf("ingrese codigo");
    scanf("%d",&miPendrive->codigo);

    printf("ingrese marca");
    gets(&miPendrive->marca);

    printf("ingrese capacidad");
    scanf("%d",&miPendrive->capacidad);

    printf("ingrese precio");
    scanf("%f",&miPendrive->precio);
    }

}

void mostrarPendrive(ePendrive* pen){

printf("%d %s %d %f",)

}

ePendrive* new_pendrive(){

    ePendrive* p;
    p = (ePendrive*) malloc(sizeof(ePendrive));

  if(p != NULL){

    p->codigo = 0;
    strcpy(p->marca,"");
    p->capacidad = 0;
    p->precio = 0;

  }

}


