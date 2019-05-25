#include <stdio.h>
#include <stdlib.h>

typedef struct{
int id;
char marca[60];
float cilindrada;

}eAuto;

//void mostrarAutos(eAuto* lista, int tam);
//void mostrarAuto(eAuto* unAuto);

int main(){

eAuto auto1 = {1234,"Fort",1.5};
eAuto auto2 = {1223,"Renault",1.6};
eAuto auto3 = {1333,"Peugeot",1.3};

eAuto* lista = (eAuto) malloc(3 *sizeof(eAuto));
int contador=0;
int cant;
//mostrarAutos(lista,3)
FILE* f;

f = fopen("./auos.txt","wb");

if(f==NULL){


    exit(1);
}

while(!feof(f)){

    cant = fread(lista,sizeof(eAuto),1, f);
    //contador++;
        if(cant<13){

            if(feof(f)==1){
                break;

            }
            else{

                printf("se produjo un error al leer el archivo");
                break;
            }
        }
    cont++;
}

fclose(f);
mostraAutos(lista,3);

//fwrite(lista, sizeof(eAuto),3,f);// sobre escribiria lo q ya esta cargado!!


return 0;
}
