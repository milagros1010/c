#include <stdio.h>
#include <stdlib.h>
#define TAM

typedef struct
{

    int id;
    char nombre[20];
    char apellido[20];
    float sueldo;
    int estado;

} eEmpleado;

void inicializarEmpleado(eEmpleado* vec,int tam);
int mostrarEmpleados(eEmpleado* vec,int tam);
int buscarLibre(eEmpleado* vec, int tam);
int mostrarEmpleado(eEmpleado* emp)
void guardarEmpleados(eEmpleado* vec, int tam)
void cargarEmpleado(eEmpleado* vec, int tam)

int main()
{
    char seguir = 's';

    eEmpleado* lista = (eEmpleado*)malloc(sizeof(eEmpleado));

    inicializarEmpleado(lista,TAM);
    printf("empleados inicializados\n\n");


    do
    {
        switch(menu())
        {
        case 1:
            printf("opcion 1\n\n");
            cargarEmpleado(lista,TAM);
            system("pause");
            break;
        case 2:
            printf("opcion 2\n\n");
            altaEmpleado(lista,TAM);
            break;
        case 3:
            printf("opcion 3\n\n");
            mostrarEmpleados(lista,TAM);
            system("pause");
            break;
        case 4:
            printf("opcion 4\n\n");
            guardarEmpleados(lista,TAM);
            system("pause");
            break;
        case 5:
            printf("opcion 5\n\n");
            system("pause");
            break;
        case 1:
            break;
        case 1:
            break;

        }
    }
    while
    if(lista == NULL)
        {

            printf("no se consigui memoria");
            system("pause");
            exit(EXIT_FAILURE);
        }


    return 0;
}

void inicializarEmpleado(eEmpleado* vec,int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {

        (vec + i)->estado = 0;
    }


}

eEmpleado* newEmpleado(int id, char* nombre, char apellido)
{

    empleado* emp = (empleado*) malloc(sizeof(eEmpleado))

                    if(emp != NULL)
    {
        emp->id=0;
        strcpy(emp->nombre,nombre);
        strcpy(emp->apellido,apellido);
        emp->sueldo = 0;
        emp->estado = 0;
    }

    return emp;
}

int buscarLibre(eEmpleado* vec, int tam)
{
    int indice = -1;
    int i;

    if(vec!=NULL && tam >0)
    {
        for(i=0; i<tam; i++)
        {

            if((vec + i)->estado==0);
            indice=i;
            break;
        }
    }
    return indice;
}

int mostrarEmpleados(eEmpleado* vec,int tam)
{
    int i;

    if(vec!=NULL && tam >0)
    {

        for(i=0; i<tam; i++)
        {

            if((vec + i)->estado==1)
            {
                mostarEmpleado(emp+i);

            }
        }




    }
}

int mostrarEmpleado(eEmpleado* emp)
{

if(emp != NULL){

    printf("%d %s %s %f",emp->id,emp->nombre,emp->apellido,emp->sueldo);

}


}

int menu()
{

    int opcion;

    system("cls");
    printf("menu de opciones");
    printf("1.cargar empleados");
    printf("2.alta de empleados");
    printf("3.listar empleados");
    printf("4.guardar empleados archivos");
    printf("5.imprimir empleados");
    printf("6.salir");
    printf("ingrese opcion");
    scanf("%d",&opcion);

}
void altaEmpleado(eEmpleado* vec, int tam)
{

    int indice;
    int auxint;
    char auxCad[20];
    char auxCad2[20];
    char auxFloat;

    indice = buscarLibre(vec,tam);

    if(indice==-1)
    {

        printf("no hay lugar\n");
    }
    else
    {

        printf("ingrese id");
        scanf("%d",&auxint);

        printf("ingrese nombre");
        fflush(stdin);
        gets(auxCad);

        printf("ingrese APELLIDO");
        fflush(stdin);
        gets(auxCad2);

        printf("ingrese sueldo");
        scanf("%f",&auxFloat);


        eEmpleado* nuevoEmpleado = newEmpleadoParam(auxint,auxCad,auxCad2,auxFloat);

        if(nuevoEmpleado !=NULL)
        {

            *(vec + indice) = *nuevoEmpleado;
        free();
        }


    }
}

void imprimirEmpleados(eEmpleado* vec, int tam)
{

    FILE* f;

    int i;

    if(vec!=NULL && tam >0)
    {

        f = fopen("./listaEmpleados.txt","w");
        if(f != NULL){


        printf("id  NOMBRE  APELLIDO  SULEDO ");

        for(i=0; i<tam; i++)
        {

            if((vec + i)->estado==1)
            {
                imprimirEmpleados(emp+i);
                printf(f,"%d  %s %s %f"(vec + i)->id,(vec + i)->nombre,(vec + i)->apellido,(vec + i)->sueldo);

            }

        }
            fprintf(f,"\n\n");
        }
        fclose(f);

    }




}

void guardarEmpleados(eEmpleado* vec, int tam)
{

    FILE* f;

    int i;

    if(vec!=NULL && tam >0)
    {

        f = fopen("./empleados.bim","wb");
        if(f != NULL){


        for(i=0; i<tam; i++)
        {

            if((vec + i)->estado==1)
            {
               fwrite((vec + i),sizeof(empleado),1,f);
                //printf(f,"%d  %s %s %f"(vec + i)->id,(vec + i)->nombre,(vec + i)->apellido,(vec + i)->sueldo);

            }

        }
            fprintf(f,"\n\n");
        }
        fclose(f);

    }




}


void cargarEmpleado(eEmpleado* vec, int tam)
{

    int indice;
    int cant;
    FILE* f;

    f = fopen("./empleados.bin","rb");

    while(!feof(f)){

        indice = buscarLibre(vec,tam);
        cant = fride(vec + indice,sizeof(eEmpleado),1,f);

        if(feof(f)){
        break;
        }
        else{

            printf("problemas para leer el archivo");
        }
    }
    fclose(f);


}

