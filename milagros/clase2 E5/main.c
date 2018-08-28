#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define esc 27

int main()
{
char seguir;
int numero;
int numeromaximo;
int numerominimo;
int flag=0;
    do{
    system("cls");
    printf("ingrese numero ");
    scanf("%d",&numero);

        if(flag==0)
        {
            numeromaximo = numero;
            numerominimo = numero;
            flag=1;
        }
        if(numero>numeromaximo)
        {
            numeromaximo = numero;
        }
        if(numero<numerominimo)
        {
            numerominimo=numero;
        }
        printf("precione esc para salir, cualquier otra letra para continuar");
        seguir = getch();

    }while(seguir!=esc);
    printf("\n mayor %d\n menor %d", numeromaximo,numerominimo);

    return 0;
}
