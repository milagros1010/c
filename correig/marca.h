#ifndef MARCA_H__
#define MARCA_H__

typedef struct

{
    int id;
    char descripcion[20];

} eMarca;

void cargarMarca( eMarca marcas[]);
void listarMarca (eMarca marcas[]);
void obtenerMarca (  eMarca marcas [] , int tamc, int id, char cadena[] );

#endif
