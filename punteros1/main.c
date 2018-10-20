#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
int vec[5];

for(i=0;i<5;i++){

    printf("ingrese numero %d: \n",i+1);
    scanf("%d",vec+i);//posicion

    //printf("numero %d: %d\n",i+1,*(vec+i));
}

for(i=0;i<5;i++){

printf("\n%d\n",*(vec+i));

}



    return 0;
}
