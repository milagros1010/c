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


int buscarEspacioLibre(Employee vec[],int tam);
int buscarEmpleado(Employee vec[],int tam,int id);
int altaEmpleado(int idA, char nameAux, char lastNameAux, int salaryAux, char sectorAux);
int getStringLetras(char msj[],char input[]);
int soloLetras(char str[]);
int getStringNumeros(char mensaje[],char input[]);
int esNumerico(char str[]);
int borrarEmpleado(Employee vec[],int tam,int idBorrar);
void inicializarEmpleados(Employee vec[],int tam);
void getString (char msj[],char input[]);
void cargarDatos(Employee vec[],int tam,int idA);
void bajaEmpleado(Employee vec[],int tam);
void modificarEmpleado(Employee vec[],int tam);

int main()
{

    Employee lista[TAM];
    int opcion;
    int idA=1;
    inicializarEmpleados(lista,TAM);
    buscarEspacioLibre(lista,TAM);
    idEmpleado(lista,TAM);

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


    }while(opcion!=6);

            return 0;

}

    void inicializarEmpleados(Employee vec[],int tam)
    {
        int i;
        for(i=0; i<tam; i++)
        {

            vec[i].isEmpty=0;

        }


    }

    int buscarEspacioLibre(Employee vec[],int tam)
    {
        int i;
        int index;
        for(i=0; i<tam; i++)
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







    int buscarEmpleado(Employee vec[],int tam,int idModificar)
    {
        int i;
        int index;

        index=-1;
        for(i=0; i<tam; i++)
        {

            if(vec[i].id==idModificar && vec[i].isEmpty == 1)
            {

                index = i;
                break;
            }

            return index;
        }



    }

    void cargarDatos(Employee vec[],int tam,int idA)
    {

        char nameAux[51];
        char lastNameAux[51];
        float salaryAux;
        int sectorAux;
        int todoOk;

        printf("ID Empleado: %d \n",idA);

        while(!getStringLetras("ingrese nombre",nameAux));

        while(!getStringLetras("ingrese apellido",lastNameAux));

        while(!getStringNumeros("ingrese salario",salaryAux));

        while(!getStringNumeros("ingrese sector",sectorAux));

        todoOk = altaEmpleado(idA,nameAux,lastNameAux,salaryAux,sectorAux,vec);

        if(todoOk==1)
        {

            printf("Alta cargada con exito");
        }
        else
        {

            printf("hubo un error en la carga de datos");
        }
    }


    int altaEmpleado(int idA, char nameAux, char lastNameAux, int salaryAux, char sectorAux)
    {
        int indice;

        indice = buscarEspacioLibre(lista,tam);

        todoOk=-2;

        if(indice == -1)
        {

            printf("No hay espacio libre");
        }
        else
        {
            strcpy(lista[indice].id,idA);
            strcpy(lista[indice].name,nameAux);
            strcpy(lista[indice].lastName,lastNameAux);
            strcpy(lista[indice].salary,salaryAux);
            strcpy(lista[indice].sector,sectorAux);

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
            while(str[i] != '\0'  )
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


        void bajaEmpleado(Employee vec[],int tam)
        {

            int idBorrar;

            getStringNumeros("ingrese id a borrar",idBorrar);

            todoOk = borrarEmpleado(vec,tam,idBorrar);

            if(todoOk==1)
            {
                printf("Borrado con exito");

            }
            else
            {
                printf("Error, no pudo ser borrado");

            }



        }


        int borrarEmpleado(Employee vec[],int tam,int idBorrar)
        {
            int i;
            int flag = -1;
            for(i=0; i<tam; i++)
            {

                if(vec[i].id == idBorrar && vec[i].isEmpty == 1)
                {

                    vec[i].isEmpty = 0;
                    flag = 1;
                    break;
                }
                return flag;
            }

            void modificarEmpleado(Employee vec[],int tam)
            {
                int idModificar;
                int i;
                int opcionM;
                char nombreAux[51];
                char apellidoAux[51];
                int sectorAux;
                float salarioAux;

                printf("ingrese id del empleado que desea modificar");
                scanf("%d",&idModificar);

                indice = buscarEmpleado(vec,tam,idModificar);


                if(indice==-2)
                {
                    printf("El id ingresado no existe");
                }
                else
                {

                    do
                    {


                        printf("MENU MODIFICACION");
                        printf("1.Modificar nombre");
                        printf("2.Modificar apellido");
                        printf("3.Modificar salario");
                        printf("4.Modificar sector");
                        printf("5.Salir");
                        printf("Ingrese opcion: ");
                        scanf("%d"&opcionM);

                        switch(opcionM)
                        {

                        case 1:
                            while(!getStringLetras("ingrese nuevo nombre"),nameAux);
                            stcopy(vec[indice].name,nombreAux);
                            break;

                        case 2:
                            while(!getStringLetras("ingrese nuevo apellido"),lastNameAux);
                            stcopy(vec[indice].lastName,apellidoAux);
                            break;

                        case 3:
                            while(!getStringNumeros("ingrese salario"),salaryAux);
                            stcopy(vec[indice].salary,salarioAux);
                            break;

                        case 4:
                            while(!getStringNumeros("ingrese sector"),sectorAux);
                            stcopy(vec[indice].sector,sectorAux);
                            break;
                        }

                    }
                    while(opcionM!=5);


                }





            }


        }
