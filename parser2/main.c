#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int id;
    char nombre[30];
    char apellido[30];
    float sueldo;
} eEmpleado;

int main()
{
    int size = 0;
    eEmpleado* lista = (eEmpleado*)malloc(sizeof(eEmpleado*));
    eEmpleado* auxEmpleado;
    int cont = 0;

    char buffer[4][30];

    int cant;

    FILE* f = fopen("./empleados2.csv", "r");

    if( f == NULL)
    {
        printf("No se pudo abrir el archivo\n");
        exit(EXIT_FAILURE);
    }

    fscanf(f, "%[^,],%[^,],%[^,],%[^\n],\n", buffer[0], buffer[1], buffer[2], buffer[3]);
    printf("%s %s %s %s\n", buffer[0], buffer[1], buffer[2], buffer[3]);

    while( !feof(f))
    {

        cant =  fscanf(f, "%[^,],%[^,],%[^,],%[^\n],\n", buffer[0], buffer[1], buffer[2], buffer[3]);



        if(cant < 4)
        {

            if( feof(f))
            {
                break;
            }
            else
            {
                printf("Problemas para leer el archivo\n");
                break;
            }
        }
        (lista + cont)->id = atoi(buffer[0]);
        strcpy( (lista + cont)->nombre, buffer[1]);
        strcpy( (lista + cont)->apellido, buffer[2]);
        (lista + cont)->sueldo = atof(buffer[3]);
        cont++;
        auxEmpleado = (eEmpleado*) realloc(lista, sizeof(eEmpleado)* (cont +1));
        if( auxEmpleado != NULL)
        {
            lista = auxEmpleado;
        }

        //   printf(" %5d %15s %15s %8.2f\n", atoi(buffer[0]), buffer[1], buffer[2], atof(buffer[3]));
    }
    printf("\n\n");

    fclose(f);

    for(int i=0; i < cont; i++)
    {
        printf(" %5d %15s %15s %8.2f\n", (lista + i)->id, (lista + i)->nombre, (lista + i)->apellido, (lista + i)->sueldo);

    }




    return 0;
}

void altaEmpleado(eEmpleado* vec , int tam){

int indice;
int todoOk=0;
int auxInt;
char auxCad[20];
char auxCad2[20];
float auxFloat;


printf("ingrese nombre ");
fflush(stdio);
gets(auxCad);

printf("ingrese apellido ");
fflush(stdio);
gets(auxCad2);

printf("ingrese sueldo ");
scanf("%f",&auxFloat);

eEmpleado* nuevoEmpleado = newEmpleadoParam(auxInt,auxCad,auxCad2);

if(nuevoEmpleado != NULL){

    *vec + size = nuevoEmpleado;

}

}


void guardarEmpleadoBinario(eEmpleado** vec, int size){

FILE* f;

if(vec != NULL && tam >0){


    f= fopen("./empleados.bin","wb");

    if(f!= NULL){


        for(i=0;i<tam;i++){

            if((vec + i)->estado ==1){


            }
        }
    }
}


}



void mostrarEmpleados(eEmpleado** vec,int size){

    if(vec != NULL && size>0){

        printf("id   NOMBRE  APELLIDO  SUELDO");
        for(i=0; i<size;i++){

            if((vec+i)->estado == 1){

                mostrarEmpleado(vec + i);
            }

        }
    }



}


void mostrarEmpleado(eEmpleado** vec,int size){




}


void parteDelMenu(){

switch(){

case 1:
    cargarEmpleados(lista,size);
    system("pause");
    break;
case 2:
    if(altaEmpleado(lista,size)==1){

        size++;
    }
     if(agrandarLista(lista, size)==1){
            printf("alta exitosa");
     }
    system("pause");
    break;

case 3: break;
case 4: break;
case 5: break;



}


}


int agrandarLista(eEmpleado**, int size){

eEmpleado** aux;

size = (eEmpleado**)realloc(vec, sizeof(eEmpleado*)*(size +1));

if(aux != NULL){

    vec = aux;
    todoOk = 1;
}

}
