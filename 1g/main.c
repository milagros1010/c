#include <stdio.h>
#include <stdlib.h>
#define CANT 1

typedef struct{
    int codigo;
    int importe;
    int idCategoria;
    char descripcion[50];
    int status; /**< Active (1) or Inactive (0)  */
}juego;

typedef struct{
    char nombre[51];
    char sexo;
    int codigo;
    int telefono[21];
    int status; /**< Active (1) or Inactive (0)  */
}cliente;

typedef struct{
    char descripcion[51];
    int id;
    int status; /**< Active (1) or Inactive (0)  */
}categoria;

typedef struct{
    int dia;
    int mes;
    int año;
    int status; /**< Active (1) or Inactive (0)  */
}fecha;


int main()
{

juego arrayJ[CANT];
inicializarStatusJuego(juego arrayJ,CANT,0);

cliente arrayClie[CANT];
inicializarStatusCliente(cliente arrayC,CANT,0);

categoria arrayCat[CANT];
inicializarStatusCategoria(cliente arrayC,CANT,0);




    return 0;
}

/**
 * \brief Inicializa el status en un array de libros
 * \param arrayJ Es el array en el cual buscar
 * \param tam Indica la logitud del array
 * \param valor Es el valor que se asignara a status
 * \return -
 *
 */
void inicializarStatusJuego(juego arrayJ[],int tam,int valor)
{
    int i;
    for(i=0;i < tam; i++)
    {
        arrayJ[i].status = valor;
    }
}

/**
 * \brief Inicializa el status en un array de libros
 * \param arrayJ Es el array en el cual buscar
 * \param tam Indica la logitud del array
 * \param valor Es el valor que se asignara a status
 * \return -
 *
 */
void inicializarStatusJuego(cliente arrayClie[],int tam,int valor)
{
    int i;
    for(i=0;i < tam; i++)
    {
        arrayClie[i].status = valor;
    }
}


/**
 * \brief Inicializa el status en un array de libros
 * \param arrayCat Es el array en el cual buscar
 * \param tam Indica la logitud del array
 * \param valor Es el valor que se asignara a status
 * \return -
 *
 */
void inicializarStatusCategoria(categoria arrayCat[],int tam,int valor)
{
    int i;
    for(i=0;i < tam; i++)
    {
        arrayCat[i].status = valor;
    }
}
