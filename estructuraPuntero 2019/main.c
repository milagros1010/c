#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;

} eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
    char sexo;
    eFecha fechaIngreso;

} eEmpleado;

void mostrarEmpleados(eEmpleado,3)

int main()
{
    eEmpleado emp1 = {1234,"Juan",34000,'s'};
    eEmpleado* pEmp;
    eEmpleado lista = {1234,"Juan",34000,'s',{121,5,2019}},
    {1111,"Ana",40000,'f',{18,4,2019}},
    {1434,"Mario",42300,'m',{23,2,2019}}
};

mostrarEmpleados(lista,3);

printf("%d",sizeof(emp1));

pEmp = &emp1;

//printf("%s",emp1.nombre);
printf("%s",pEmp->nombre);

printf("%02d/%02d/%02d/",pEmp->fechaIngresada.);

printf("ingrese un nombre");
gets(pEmp->nombre);

printf("ingrese nuevo sueldo ");
scanf("%.2f",&pEmp->sueldo);

printf("%.2f",pEmp->sueldo);



return 0;
}

void mostrarEmpleado(eEmpleado* empleados, int tam){

printf("LEGAJO  NOMBRE SUELDO SEXO FECHA\n\n");

printf("%d %s %2.f  %c",  )

}
void mostrarEmpleados(eEmpleado* empleados, int tam){

printf("LEGAJO  NOMBRE SUELDO SEXO FECHA\n\n");
for(i=0;i<tam;i++){
printf("%d %s %2.f  %c",empleado->legajo,empleado->nombre,empleado->sueldo,empleado->sexo,empleado->fechaIngresada.dia,empleado->fechaIngresada.mes,empleado->fechaIngresada  )
}
}
