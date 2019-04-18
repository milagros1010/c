#include <stdio.h>
#include <stdlib.h>
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

void inicializarEmpleados(Employee vec[],int tam);
int buscarEspacioLibre(Employee vec[],int tam);
int buscarEmpleado(Employee vec[],tam,legajoAbuscar);


int main()
{

Employee lista[TAM];
int opcion;
int idA=1;
int inicializarEmpleados(lista,TAM);
int buscarEspacioLibre(lista,TAM);
int idEmpleado(lista,TAM);

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


void inicializarEmpleados(Employee vec[],int tam){
int i;
for(i=0;i<TAM;i++){

   vec[i].ocupado=0;

}


}

int buscarEspacioLibre(Employee vec[],int tam){
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







int buscarEmpleado(Employee vec[],int tam,int legajo){
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


cargarDatos(Employee vec[],tam){

 char nameAux[51];
 char lastNameAux[51];
 float salaryAux;
 int sectorAux;

printf("ID Empleado: %d \n",idA);

while(!getStringLetras("ingrese nombre"),nameAux);

while(!getStringLetras("ingrese apellido"),lastNameAux);

while(!getStringNumeros("ingrese salario"),salaryAux);

while(!getStringLetras("ingrese sector"),sectorAux);

altaEmpleado(nameAux,lastNameAux,salaryAux,sectorAux,vec[]);

idA++;
}


int altaEmpleado(char nameAux,char lastNameAux, int salaryAux, char sectorAux){

indice = buscarEspacioLibre(lista,TAM);



if(indice == -1){

    printf("No hay espacio libre");
}
else{

    strcpy(lista.name,nameAux);
    strcpy(lista.lastName,lastNameAux);
    strcpy(lista.salary,salaryAux);
    strcpy(lista.sector,sectorAux);
}




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
}

