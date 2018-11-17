#include"marca.h"

typedef struct
{
    int id;
    char descripcion[51];
    int importe;
    int idcategoria;
    int idMarca;
    int isEmpty;

} eJuego;

typedef struct
{
    int id;
    char descripcion[51];

} eCategoria;




void inicializarJuegos (eJuego juegos[], int tam);
eJuego altaUnJuego (int codJuegos, eCategoria categorias [], int tamc ,eMarca marca [], int tamarca);
void altadeJuegos ( eJuego juego [], int tam, int codJuegos, eCategoria categorias [], int tamc , eMarca marca [], int tamarca);
int buscarJuegoPorCodigoJuego( eJuego juegos [], int tam, int codJuego);
void modificarJuegos (eJuego juegos [], int tam, eCategoria categorias [], int tamc, eMarca marca [], int tammarca);
void bajaJuegos (eJuego juego [], int tamj,eCategoria categoria[], int tamca , eMarca marca [], int tammarca);
void cargarJuegos(eJuego juegos[]);

void listarCategorias (eCategoria categorias[]);
void cargarCategorias( eCategoria categorias[]);
void listarJuegos(eJuego juegosinfantiles [], int tamj,  eCategoria categoria [], int tamc , eMarca marca [], int tammarca);
void listarUnJuegos(eJuego juegosinfantiles, eCategoria categoria [], int tamc , eMarca marca [], int tammarca );
void obtenerCategoria (eCategoria categoria[], int tamc, int id, char cadena[] );
void obtenerJuego ( eJuego juego [], int tamj,int id, char cadena [] );


