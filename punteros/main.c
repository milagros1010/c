#include <stdio.h>
#include <stdlib.h>


void miFuncion(int* x );

int main()
{

int x = 5;


  miFuncion(&x);

  printf("%d",x);
    return 0;
}


void miFuncion(int* x ){

    *x = 35;

}








