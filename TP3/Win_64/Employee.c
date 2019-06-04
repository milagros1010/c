#include <stdlib.h>
#include "Employee.h"

int employee_setId(Employee* this,int id)
{

    int todoOk=0;
    if(this != NULL && id>0)
    {

        this->id = id;
        todoOk = 1;
    }


    return todoOk;
}

int employee_getId(Employee* this,int* id)
{

    int todoOk=0;

    if(this != NULL && id != NULL) //this es el nombre
    {

        *id = this->id;//por q me mandadn la direccion de memoria
        todoOk = 1;
    }

    return todoOk;
}

int employee_setNombre(Employee* this,char* nombre)
{

    int todoOk=0;
    if(this != NULL && nombre != NULL && strlen(nombre)>3)
    {

        strcpy(this->nombre,nombre);
        todoOk = 1;
    }

    int employee_getNombre(Employee* this,char* nombre)
    {
        int todoOk=0;
        if(this != NULL && nombre != NULL && strlen(nombre)>3)
        {

            strcpy(nombre,this->nombre);
            todoOk = 1;
        }


        return todoOk;




    }

    int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
    {

        int todoOk=0;
        if(this != NULL && horasTrabajadas != NULL)
        {

            this->horasTrabajadas = horasTrabajadas;
            todoOk = 1;
        }


        return todoOk;
    }
    int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
    {

        int todoOk=0;
        if(this != NULL && horasTrabajadas != NULL)
        {

            *horasTrabajadas = this->horasTrabajadas;
            todoOk = 1;
        }


        return todoOk;

    }
    int employee_setSueldo(Employee* this,int sueldo)
    {

        int todoOk=0;
        if(this != NULL && sueldo>0)
        {

            this->sueldo = sueldo;
            todoOk = 1;
        }


        return todoOk;


    }
    int employee_getSueldo(Employee* this,int* sueldo)
    {
        int todoOk=0;
        if(this != NULL && sueldo>0)
        {

            *sueldo = this->sueldo;
            todoOk = 1;
        }


        return todoOk;



    }

    Employee* employee_new()
    {

        Employee* this = (Employee*)malloc(sizeof(Employee));

        if(this != NULL)
        {

            this->id=0;
            strcpy(this->nombre,"");
            this->horasTrabajadas = 0;
            this->sueldo = 0;

        }


        return this;
    }


    Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, int sueldoStr)
    {
        //int todoOk = 0;
        Employee* this;

        if(this != NULL && idStr != NULL && nombreStr != NULL && horasTrabajadasStr != NULL && sueldoStr)
        {
            this = employee_new(); //(Employee*)malloc(sizeof(Employee));
            if(this !=  NULL)
            {
                if(employee_setId(this,atoi(idStr)) ||

                        employee_setNombre(this,nombreStr) ||

                        employee_setHorasTrabajadas(this,atoi(horasTrabajadasStr)) ||

                        employee_setSueldo(this,atoi(sueldoStr))){

                    todoOk = 1;

                }





            }


        }
        // if(todoOk==0){

        //   }
        else{

            free(this);
        }




        return this;
    }



void mostrarEmpleado(Employee* emp)
{
    if(emp != NULL){
    printf("%s %d %d %d",emp->id, )
    }

}

int ordenarPorSueldo(void* emp1,void* emp2){
int retorno =0;
Employee* p1;
Employee* p2;

if(emp1!=NULL && emp2 !=NULL){

    p1 = (Employee*) emp1;
    p2 = (Employee*) emp2;

    if(p1->sueldo > p2->sueldo){
        retorno=1;
    }
    if(p1->sueldo < p2->sueldo){
        retorno=-1;
    }
    else{
        retorno=0;
    }

}
return retorno;

}
//void employee_delete(){





//}

