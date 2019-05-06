#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define TAM 3

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} Employee;

typedef struct
{
    int id;
    char descripcion[20];
} eSector;


int buscarEspacioLibre(Employee vec[],int TAM);
int buscarEmpleado(Employee vec[],int TAM,int id);
int altaEmpleado(int idA, char nameAux, char lastNameAux, char salaryAux, char sectorAux,Employee vec[], int TAM);
int getStringLetras(char msj[],char input[]);
int soloLetras(char str[]);
int getStringNumeros(char mensaje[],char input[]);
int esNumerico(char str[]);
int borrarEmpleado(Employee vec[],int TAM,int idBorrar);
void inicializarEmpleados(Employee vec[],int TAM);
void getString (char msj[],char input[]);
void cargarDatos(Employee vec[],eSector sectores[],int TAM,int idA);
void bajaEmpleado(Employee vec[],int TAM);
void modificarEmpleado(Employee vec[],int TAM);
void mostrarEmpleado(Employee vec[],int indice);


int main()
{

 eSector sectores[] =
    {
        {1, "RRHH"},
        {2, "Ventas"},
        {3, "Compras"},
        {4, "Contable"},
        {5, "Sistemas"}
    };

    Employee lista[TAM];
    int opcion;
    int idA=1;
    inicializarEmpleados(lista,TAM);

    //idEmpleado(lista,TAM);

    do
    {
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


        switch(opcion)
        {

        case 1:

            printf("Alta empleados");
            cargarDatos(lista,TAM,idA);
            idA++;
            system("pause");
            break;

        case 2:
            printf("Baja empleados");
            bajaEmpleado(lista,TAM);
            system("pause");
            break;

        case 3:
            printf("Modificar empleado");
            modificarEmpleado(lista,TAM);
            system("pause");
            break;

        case 4:
            printf("Ordenar empleados");
            system("pause");
            break;

        case 5:
            printf("Listar empleados");
            system("pause");
            break;


        }


    }
    while(opcion!=6);

    return 0;

}

void inicializarEmpleados(Employee vec[],int TAM)
{
    int i;
    for(i=0; i<TAM; i++)
    {

        vec[i].isEmpty=0;

    }


}

int buscarEspacioLibre(Employee vec[],int TAM)
{
    int i;
    int index;
    for(i=0; i<TAM; i++)
    {

        index=-1;

        if(vec[i].isEmpty==0)
        {

            index=i;
            break;

        }

    }
    return index;


}







int buscarEmpleado(Employee vec[],int TAM,int idBuscar)
{
    int i;
    int index;

    index=-1;
    for(i=0; i<TAM; i++)
    {

        if(vec[i].id==idBuscar && vec[i].isEmpty == 1)
        {

            index = i;
            break;
        }

        return index;
    }



}

void cargarDatos(Employee vec[],eSector sectores[],int TAM,int idA)
{

    char nameAux[51];
    char lastNameAux[51];
    char salaryAux[21];
    int sectorAux[21];
    int todoOk;

    printf("ID Empleado: %d \n",idA);

    while(!getStringLetras("ingrese nombre: ",nameAux));

    while(!getStringLetras("ingrese apellido: ",lastNameAux));

    while(!getStringNumeros("ingrese salario: ",salaryAux));

    //while(!getStringNumeros("ingrese sector: ",sectorAux));

    sectorAux = elegirSector(sectores,5);

    todoOk = altaEmpleado(idA,nameAux,lastNameAux,salaryAux,sectorAux,vec,TAM);

    if(todoOk==1)
    {

        printf("Alta cargada con exito");
    }
    else
    {

        printf("hubo un error en la carga de datos");
    }
}


int altaEmpleado(int idA, char nameAux, char lastNameAux, char salaryAux, int sectorAux,Employee vec[], int TAM)
{

    int indice;
    int todoOk;
    float salaryD;
    indice = buscarEspacioLibre(vec,TAM);


    if(indice == -1)
    {

        printf("No hay espacio libre");

        todoOk=-2;
    }
    else
    {

        vec[indice].id = idA;

        strcpy(vec[indice].name,nameAux);

        strcpy(vec[indice].lastName,lastNameAux);

        salaryD = atof(salaryAux);

        vec[indice].salary = salaryD;

        vec[indice].sector = sectorAux;

        todoOk=1;
    }

    return todoOk;


}

int getStringLetras(char msj[],char input[])
{
    char aux[256];
    getString(msj,aux);

    if (msj != NULL)
    {
        if(soloLetras(aux))
        {
            strcpy(input,aux);
            return 1;
        }
        else
        {
            printf("\nError!, ingrese solo letras.\n");
        }
    }



    return 0 ;
}




int soloLetras(char str[])
{
    int i=0;
    int retorno = 1;
    if(str[i] == '\0')
        retorno = 0;
    else
    {
        while(str[i] != '\0')
        {
            if(  (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            {
                retorno = 0;
                break;
            }
            i++;
        }
    }
    return retorno;
}

int getStringNumeros(char mensaje[],char input[])
{


    char aux[256];
    getString(mensaje,aux);


    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    else
    {
        printf("Error, ingrese solo numeros.");
    }




    return 0;
}

int esNumerico(char str[])
{
    int i=0;
    while(str[i] != '\0' || str[i]!= NULL )
    {
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}


void getString (char msj[],char input[])
{
    printf("%s",msj);
    fflush(stdin) ;
    gets(input) ;

}
void bajaEmpleado(Employee vec[],int TAM)
{

    char idBorrar;
    int idBorrarD;
    int todoOk;

    while(!getStringNumeros("ingrese id a borrar",idBorrar));
    idBorrarD = atoi(idBorrar);
    //index = buscarEmpleado(vec,TAM,idBorrar);
    todoOk = borrarEmpleado(vec,TAM,idBorrarD);

    if(todoOk==1)
    {
        printf("Borrado con exito");

    }
    else
    {
        printf("Error, no pudo ser borrado,legajo inexistente");

    }



}


int borrarEmpleado(Employee vec[],int TAM,int idBorrar)
{
    int i;
    int flag = -1;
    for(i=0; i<TAM; i++)
    {

        if(vec[i].id == idBorrar && vec[i].isEmpty == 1)
        {

            vec[i].isEmpty = 0;
            flag = 1;
            break;
        }
    }
    return flag;

}
void modificarEmpleado(Employee vec[],int TAM)
{
    int idModificar;
    int opcionM;
    char nameAux[51];
    char lastNameAux[51];
    char sectorAux;
    char salaryAux;
    int indice;

    printf("ingrese id del empleado que desea modificar");
    scanf("%d",&idModificar);

    indice = buscarEmpleado(vec,TAM,idModificar);



    if(indice==-2)
    {
        printf("El id ingresado no existe");
    }
    else
    {
            mostrarEmpleado(vec,indice);


        do
        {


            printf("MENU MODIFICACION");
            printf("1.Modificar nombre");
            printf("2.Modificar apellido");
            printf("3.Modificar salario");
            printf("4.Modificar sector");
            printf("5.Salir");
            printf("Ingrese opcion: ");
            scanf("%d",&opcionM);

            switch(opcionM)
            {

            case 1:
                while(!getStringLetras("ingrese nuevo nombre",nameAux));
                strcpy(vec[indice].name,nameAux);
                break;

            case 2:
                while(!getStringLetras("ingrese nuevo apellido",lastNameAux));
                strcpy(vec[indice].lastName,lastNameAux);
                break;

            case 3:
                while(!getStringNumeros("ingrese salario",salaryAux));
                salaryAux = atof(salaryAux);
                break;

            case 4:
                while(!getStringNumeros("ingrese sector",sectorAux));
                sectorAux = atof(sectorAux);
                break;
            }

        }
        while(opcionM!=5);


    }





}


void mostrarEmpleado(Employee vec[],int indice){



printf("id: %d \n\t\t nombre: %s \n\t\t apellido: %s \n\t\t salario: %2.f \n\t\t sector: %d\t\t",vec[indice].id,vec[indice].name,vec[indice].lastName,vec[indice].salary,vec[indice].sector);



}

int elegirSector(eSector sectores[], int TAMSec)
{
    int idSector;
    printf("\nSectores\n\n");
    for(int i=0; i < TAMSec; i++)
    {
        printf("%d %s\n", sectores[i].id, sectores[i].descripcion);
    }
    printf("\nSeleccione sector: ");
    scanf("%d", &idSector);

    /*if(0 < idSector||idSector>5){
        printf("Error.Ingrese alguna opcion valida");
    }*/

    return idSector;
}
