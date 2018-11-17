#include"marca.h"

void mostrarJuegosxCategoria ( eJuego juegos [], int tamj, eCategoria categoria [], int tamc , eMarca marca [], int tammarca );
void mostrarJuegosxCategoriaMesa ( eJuego juegos [], int tamj, eCategoria categoria [], int tamc , eMarca marca [], int tammarca );
void totalImportesPagadosPorClienteSeleccionado (sAlquiler alquileres [], int tam, eJuego juegos [], int tamj, sCliente clientes[], int tamc);
void listarAlquileresxCLientes (sAlquiler alquiler [], int tam, eJuego juego [], int tamj, sCliente cliente [], int tamc);
void listarClientesQueNoALquilaronJuegos ( sAlquiler alquileres [], int tam, eJuego juego [], int tamj, sCliente cliente[], int tamc);
void listarJuegosQueNoHanSidoAlquilados ( sAlquiler alquileres [], int tam, eJuego juegos [], int tamj, sCliente clientes[], int tamc, eCategoria categoria [], int tamcg , eMarca marca [], int tammarca);
void telefonosDeClientesQueAlquilaronEnUnaDeterminadaFecha (sCliente cliente [],int tamc, sAlquiler alquiler [], int tama, sFecha fecha [], int tamf, eJuego juegos[], int tamj);
void listarLosJuegosAlquiladosPorMujeres (sAlquiler alquiler [], int tama, sCliente cliente[], int tamc, eJuego juego [], int tamj );
void mostrarEloLosJuegosAlquiladosPorHombre (sAlquiler alquiler [], int tama, sCliente cliente[], int tamc, eJuego juego [], int tamj, eCategoria categoria[], int tamcg , eMarca marca [], int tammarca);
void mostrarLosClientesQueAlquilaronUnDeterminadoJuego (sAlquiler alquileres [], int tama, sCliente clienetes [], int tamc , eJuego juego [], int tamj, eCategoria categoria [], int tamcg , eMarca marca [], int tammarca);
void mostrarLaRecaudacionDeUnaFechaEnParticular (sAlquiler alquileres [], int tama,  eJuego juego [], int tamj , sCliente cliente[], int tamc);

void mostrarTodosLosJuegosDeUnaDeterminaMarca ( eJuego juegos [], int tamj, eMarca marca [], int tamm );
void informarTodosLosClientesQueAlquilaronUnaDeterminadaMarca (sCliente cliente [], int tamc, eJuego juegos [], int tamj, eMarca marca [], int tammarca , sAlquiler alquiler [], int tama);
void informarEnCuantosAlquileresAparecenJuegosDeUnaDeterminadaMarca (sAlquiler alquiler [], int tamaq, eJuego juegos [], int tamj, eMarca marca [], int tamma);
