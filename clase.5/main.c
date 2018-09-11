#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int cantidad; //se define la cantidad para poder eliminar los espacios adicionales y los saltos de linea (por eso restamos dos, ya que estamos eliminando el salto de linea entre el nombre y apellido y el espacio entre estos y el final de la funcion

char nombre[31];
char apellido[31];
char apenombre[62];

printf("nombre: ");
fgets(nombre,60,stdin);
cantidad=strlen(nombre); //eliminar el espacio adicional que aparece antes de poner el nombre
nombre[cantidad-1]='0'; //
strcat(apenombre,nombre);strcat(apenombre,nombre);
nombre


printf("apellido: ");
apellido[0]=toupper(apellido[0]);
fgets(apellido,60,stdin);
strcpy(apenombre,apellido);
strcat(apenombre," ");


apenombre[0]='\0';
strcat(apenombre,apellido);
strcat(apenombre," ");
strcat(apenombre,nombre);

printf("%s",apenombre);


for(i=0;i<cantidad;i++)
{
    if(nombre[i]==&&)
}

}






/*int main()
{
    char nombre[31];
    printf("nombre: ");
    fflush(stdin);
    scanf("%[^\n]",nombre);
    printf("nombre:%s ",nombre);

    fgets(buffer,29,stdin);
    cantidad = strlen(buffer);
    printf("%s", buffer);


    return 0;
}
int main()
{
    char nombre[31];
    strcpy(nombre,"Milagros Elizabeth");
    printf("%s",nombre);
    return 0;
}


#define CANT 5


int main()
{
int pts [CANT]={1,0,3,3,1};
int dg [CANT]={8,10,5,3,4};
int auxpts,auxdg,i,j;


for(i=0;i<CANT;i++){

    for(j=i+1;j<CANT;j++)
    {
        if(pts[i]<pts[j])
        {
        auxpts=pts[i];
        pts[i]= pts[j];
        pts[j]= auxpts;
        auxdg=dg[i];
        dg[i]=dg[j];
        dg[j]=auxdg;
        }
        else
            {

            if(pts[i]==pts[j])
            {
                if(dg[i]<dg[j])
                {
                auxdg=dg[i];
                dg[i]=dg[j];
                dg[j]=auxdg;
                }
            }
            }
    }
}
    for(i=0;i<CANT;i++)
    {
        printf("%d %d",pts[i],dg[i]);
    }



}

cadena de caracteres

'/0' = saca el residuo del espacio de memoria


*/


