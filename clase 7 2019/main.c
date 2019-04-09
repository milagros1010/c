#include <stdio.h>
#include <stdlib.h>

typedef struct{

int legajo;//4 sifras
char nombre[20];//(19)
char sexo;
float sueldo;//sueldo positivo


}Eempleado;


int main()
{

empleados emp1;
int auxLegajo;
char auxNombre;
char auxSexo;
float auxSueldo;

printf("ingrese legajo");
scanf("%d",&emp1.auxLegajo);

printf("ingrese nombre");
scanf("%c",&emp1.nombre);

while(strlen(auxNombre)<19){

printf("ERROR.Reingrese nombre");
scanf("%s",auxNombre);

}
 emp1.nombre = auxNombre;

printf("ingrese sexo");
scanf("%c",&emp1.sexo);

printf("ingrese sueldo");
scanf("%d",&emp1.sueldo);





    return 0;
}
