#include <stdio.h>
#include <stdlib.h>

/*int main()
{

FILE* f;

char cadena[]= "utn fra";

fopen("archivos.txt","w");

if( f == NULL){

    printf("no se pùdo encontrar el archivo");
    exit(1);
}

fprintf(f,"hola mundo",cadena);

    return 0;
}
*/

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

*lista = auto1;
*(lista +1 ) = auto2;
*(lista + 2)= auto3;

//mostrarAutos(lista,3)
FILE* f;

f = fopen("./auos.txt","wb");

if(f==NULL){


    exit(1);
}

fwrite(lista, sizeof(eAuto),3,f);// sobre escribiria lo q ya esta cargado!!

for(i=0;i<3;i++){

    fwrite(lista + i, sizeof(eAuto),1,f);


}

return 0;
}

void mostrarAuto(eAuto* unAuto){

if(unAuto !=NULL){

    printf("%d %s %.2f",unAuto->id,unAuto->marca,unAuto->cilindrada);
}
void mostrarAutos(eAuto* lista, int tam){
int i=0;
    if(lista !=NULL && tam > 0){
        for(i=0;i<tram;i++){


            mostrarAuto(lista+i);
        }

    }

}

}
