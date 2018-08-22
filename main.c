#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1,nro2,nro3,dato;
    printf("ingrese");
    scanf("%d", & nro1);
    printf("ingrese");
    scanf("%d", & nro2);
    printf("ingrese");
    scanf("%d", & nro3);

    if(nro1>nro2&& nro3>nro1)
    {
       dato = nro1;
    }
    else if(nro2>nro1 && nro2<nro3)
    {
        dato = nro2;
    }
    else
    {
        dato = nro3;
    }
    printf("el valor del medio es: %d",dato);
    return 0;

}
