#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "examen.h"
//#define "n"
//#define "x=0"
//#define "nombre"

/*DETALLES MÍNIMOS, CORCHETES, LLAVES, ETC, YA ESTAN CORREGIDOS, SOLO FALTA
CHEQUEAR ESTRUCTURAS, PRESTAR ATENCIÓN AL LLAMADO DE ESTRUCTURAS DENTRO DE
LAS RUTINAS */

//REVIZAR DONDE HAY QUE HACER REVICION Y OCURRENCIAS
//CONSULTAR, ENTIENDO QUE ES DENTRO DE ALQUILERES.

//REVIZAR ESTRUCTURAS
//HAY ESTRUCTURAS DE ASIGNACIÓN QUE LE FALTA CICLO FOR

typedef struct
{
    int codigoC;
    char nombre[51];//51 ES EL MÁXIMO DE CARACTRERES, NO ES UN VECTOR, YA ESTA CORREGIDO
    char apellido[51];
    char domicilio[51];
    char telefono[21];
    int isEmpty;

} eCliente;

typedef struct
{
    int codigoJ;//hacerlo con todas y agregarle . para leerlas
    float importe;
    char descripcion[20];//para descripcion utilizar strlen (cuenta la cant de letras), reconsiderar hacer funcion, ejemplo:archivo cadena de caracteres utn
    int dma;
} eJuegos;

typedef  struct
{
    int codigoA;
    int codigoAlquiler;//EL ERROR ERA: int codigoAlquiler();
    int codigoJuego;
    int codigoCliente;
    char ocu;

} eAlquileres;






//DESCRIPCION DEL JUEGO
char descripcionJuego(char descripcioncadena){
int z;
for(z=0;z<50;z++){

printf("ingrese descripcion");
scanf("%s",eJuegos.descripcion[z+1]); //EL ERROR ERA: scanf("%s",cadena[z]);


descripcioncadena = strlen(eJuegos.descripcion[z]);

    if(descripcioncadena>51){//no deberia ser descripcioncadena en ves de d???

        printf("Supero el numero de caracteres permitidos");
    }
  z++

  }
return descripcioncadena;
}
//}
//JUEGO: IMPORTE
int importeIngresadoYvalidado(int importe){

int i;

printf("ingrese importe");
scanf("%d",importe);

for(i=0;importe>0;i++){

if(eJuegos.importe<0){

printf("Error.!!Reingrese de nuevo el importe");//*cambio
scanf("%d",&importe);
}
}
    return importe;

}


//CLIENTE: APELLIDO
char validacionYingresoApellido (char apellido){
int b,c;

for(b=0;b<50;b++){

printf("ingrese apellido");
scanf("%s",eCliente.apellido[b]);


c = strlen(apellido[b]);
    if(c>51){

        printf("supero el numero de caracteres permitidos");
    }
  b++;

}

//CLIENTE: NOMBRE


char validacionYingresoNombre(char nombre){
int m,e;

for(m=0;m<50;m++){

printf("ingrese nombre");
scanf("%s",eCliente.nombre[m]);


e = strlen(nombre[m]);

    if(e>51){

        printf("supero el numero de caracteres permitidos");
    }
  m++;

}

//CLIENTE: DOMICILIO
char validacionYingresoDomicilio(char domicilio){
int t,w;

for(w=0;w<50;w++){

printf("ingrese domicilio");
scanf("%s",domicilio[w]);


t = strlen(domicilio[w]);

    if(t>51){

        printf("supero el numero de caracteres permitidos");
    }
  w++;

}

//CLIENTE: TELEFONO

char validacionYingresoTelefono(int tel){
int q,u;

for(q=0;q<21;q++){

printf("ingrese telefono");
scanf("%s",tel[q]);


u = strlen(tel[q]);

    if(u>21){

        printf("supero el numero de caracteres permitidos");
    }
q++;

}
//JUEGOS: CODIGO
int codigoJuego(int codigo ,int *codigoJ){
int r;
int v=0;
//CODIGO 0=15
//PUNTERO0= OCUPADO CON 15

for(r=0;eCliente.nombre!=null;r++){

codigo[r]=v++ //asignar valores al vector
codigoJ[r] = &codigo[r];//igualar vector a puntero
 //declarar todos lo s punteros en  el main


}
}
//JUEGOS: BORRAR
int codigoBorrar(int codigoIb){

int h;
int *pBorrar;

printf("ingrese codigo a borrar");
scanf("%d",&codigoIb);

for(h=0;(CodigoJ=codigoIb)h++){

codigoJ[h];
}

*pBorrar = codigoJ[h];

pBorrar = null;

}
//JUEGOS:MODIFICAR:DESCRIPCION
int modificarJuegoDescripcion(int juego){

int flag=1:
int codigoIm;
int m;
printf("ingrese codigo del juego");
getc(codigoIm);


//busca el codigo del juego
for(m=0;codigoIm=eJuegos.codigoJ;m++){

eJuegos.codigoJ[m];


}

printf("ingrese nueva descripcion");
getchar(eJuegos.descripcion);//SUPER IMPORTANTE


}

//JUEGOS:MODIFICAR:IMPORTE
int modificarJuegoImporte( int importe){

int flag=1:
int codigoImI;
int m;
printf("ingrese codigo del juego");
getc(codigoImI);


//busca el codigo del juego
for(m=0;codigoImI=eJuegos.codigoJ;m++){

eJuegos.codigoJ[m];


}

printf("ingrese nuevo importe");
getc(eJuegos.importe);//SUPER IMPORTANTE

}

//CLIENTE : MODIFICAR : APELLIDO
int modificarClienteApellido(char apellido){

int flag=1:
int codigoImA;
int m;
printf("ingrese codigo del juego");
getc(codigoImA);


//busca el codigo del juego
for(m=0;codigoImA=eCliente.codigoC;m++){

eCliente.codigoC[m];


}

printf("ingrese nuevo apellido");
getchar(eCliente.apellido);//SUPER IMPORTANTE

}

//CLIENTE : MODIFICAR : NOMBRE
int modificarClienteNombre(char nombre){

int flag=1:
int codigoImN;
int m;
printf("ingrese codigo del juego");
getc(codigoImN);


//busca el codigo del juego
for(m=0;codigoImN=eCliente.codigoC;m++){

eCliente.codigoC[m];


}

printf("ingrese nuevo nombre");
getchar(eCliente.nombre);//SUPER IMPORTANTE

}
//CLIENTE : MODIFICAR : DOMICILIO
int modificarClienteDomicilio( int juego){

int flag=1:
int codigoImD;
int m;
printf("ingrese codigo del juego");
getc(codigoImD);


//busca el codigo del juego
for(m=0;codigoImD=eCliente.codigoC;m++){

eCliente.codigoC[m];


}

printf("ingrese nuevo domicilio");
getchar(eCliente.domicilio);//SUPER IMPORTANTE


}
//CLIENTE : MODIFICAR : TELEFONO
int modificarClienteTelefono( int tel){

int flag=1:
int codigoImT;
int m;
printf("ingrese codigo del juego");
getc(codigoImT);


//busca el codigo del juego
for(m=0;codigoImT=eCliente.codigoC;m++){

eCliente.codigoC[m];


}

printf("ingrese nuevo telefono");
getchar(eCliente.telefono);//SUPER IMPORTANTE


}

//CLIENTE: CODIGO
int codigoCliente(int codigo ,int *codigoC){
int n;
int v=0;


for(n=0;nombre!=null;n++){

codigo[n]=v++;
codigoC[n] = &codigo[n];
}
}



//ALQUILER: CODIGO
int codigoAlquiler(int codigo ,int *codigoA){
int f;
int v=0;


for(f=0;nombre!=null;f++){

codigo[f]=v++
codigoJ[f] = &codigo[f]
}
}

//CLIENTES: BORRAR
int codigoBorrar(int codigoIbC){

int c;
int *pBorrarC;

printf("ingrese codigo a borrar");
scanf("%d",&codigoIbC);

for(c=0;(CodigoJ=codigoIbC)c++){

codigoJ[c];
}

*pBorrarC = codigoJ[c];

pBorrarC = null;


}

//ALQUILER: BORRAR
int codigoBorrarA(int codigoIbA){

int j;
int *pBorrarA;

printf("ingrese codigo a borrar");
scanf("%d",&codigoIbA);

for(j=0;(CodigoA=codigoIbA)j++){

codigoJ[j];
}

*pBorrarA = codigoA[j];

pBorrarA = null;


}
//JUEGOS: LISTAR  (HACER LOS OTROS)
void lista( char todo){

//int todo; no

for(j=0;eJuegos.codigoJ=null;j++){

printf("%d %s %d"eJuegos.codigoJ[j+1],eJuegos.descripcion[j+1],eJuegos.importe[j+1]);

}

}

//CLIENTES: LISTAR
char listaClientes(eCliente){

int j;

for(j=0;eCliente.codigoC=null;j++){

printf("%d %s %s %s %d "eCliente.codigoC[j+1],eCliente.apellido[j+1],eCliente.nombre[j+1],eCliente.domicilio[j+1],eCliente.telefono[j+1]);

}
return eCliente
}

int fechaCompleta(fecha){

int x;
bool a =0;
for(x=0;a=1;x++){

printf("ingrese fecha");
strftime("%d/%m/%y",eJuegos.dma;);

eJuegos.dma[x+1]

}
a=1;


}


char ocurrencias(){

char ocu;
int b;
bool w=0;

for(w=0;b=1;w++){

printf("ingrese ocurrencias");
getchar(ocu);

printf("%s",ocu);
eAlquileres.ocu[w+1];

printf("%d %d %d %d "eCliente.codigoC[w+1],eJuegos.codigoJ[w+1],eAlquileres.codigoAlquiler[w+1],eAlquiler.dma[w+1]);

}

b=1;

