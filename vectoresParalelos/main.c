#include <stdio.h>
#include <stdlib.h>

int main()
{
int legajos[5];
int nota1[5];
char sexo[5];
float promedios[5];
int nota2[5];
int i;

for(i=0;i<5;i++){

printf("\ningrese legajo");
scanf("%d",&legajos[i]);

}

for(i=0;i<5;i++){

printf("\ningrese notas");
scanf("%d",&nota1[i]);

}

for(i=0;i<5;i++){

printf("\ningrese notas 2");
scanf("%d",&nota2[i]);

}

for(l=0;i<5;i++){

printf("\ningrese sexos");
scanf("%c",&sexo[l]);

}

for(m=0;m<5;m++){

printf("\ningrese promedios");
scanf("%.2f",&promedios[m]);

}




    return 0;
}
