#include <stdio.h>
#include <stdlib.h>

int main()
{

  ePersona per[CANT], porAux;
  int i,j;

  for(i=0;i<cant-1;i++)
  {
     for(j=i+1;j<cant;j++)
     {
         if(strcmp(per[i].apellido, per[j].apellido)>0)
         {
                perAux = per[i];
                per[i] = per[j];
                per[j] = perAux;
         }

     }


  }


else{
        if(stcmp (per[i]apellido, per[j]apellido)==0)
        {

            if(stcmp(per[i]nombre, per[j]nombre >0 ))
                {

                perAux = per[i];
                per[i] = per[j];
                per[j] = perAux;

                }



        }

    }



    return 0;
}


/*














int main()
{
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
*/
