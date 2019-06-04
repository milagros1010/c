#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
            case 2:break;
            case 3:break;
            case 4:break;
            case 5:break;
            case 6:break;
            case 7:break;
            case 8:break;
            case 9:break;
            case 10:break;
        }
    }while(option != 10);
    return 0;

    Employee emp = employee_newParametros("1234","juan","234","250000");

    printf("cantidad de elementos", ll_len(listaEmpleados));

    if(ll_add(listaEmpleados, emp)==0){

        printf("no se ah cargado el empleado");
    }
       printf("cantidad de elementos", ll_len(listaEmpleados));
       if(ll_led(listaEmpleados, emp)==0){

        printf("no se ah cargado el empleado");
    }

    printf("cantidad de elementos", ll_(listaEmpleados));//fijarme
       if(ll_led(listaEmpleados, emp)==0){

        printf("no se ah cargado el empleado");
    }


 printf("-----------------------------------------------------------------");

 for(i=0; i< ll_len(listaEmpleados);i++){

    mostrarEmpleados(Employee*) ll_get(listaEmpleados,i);

 }

  printf("ordena la lista por sueldo");
  ll_sort(listaEmpleados,ordenarPorSueldo,0);

}
