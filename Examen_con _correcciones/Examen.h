#ifndef EXAMEN_H_INCLUDED
#define EXAMEN_H_INCLUDED
//REVISAR LOS QUE DEVUELVEN ESTRUCTURAS
//CHEQUEAR NOMBRES DE PARÁMETROS, ALGUNOS FUERON CAMBIADOS
 void alta();
 void baja();
char descripcionJuego(char descripcioncadena);
void inicializarCliente( int  usuarios[]); //EL ERROR ERA: void inicializarCliente( eCliente  usuarios[]);
int importeIngresadoYvalidado(int importe);
char validacionYingresoApellido (char apellido);
char validacionYingresoNombre(char nombre);
char validacionYingresoDomicilio(char domicilio);
char validacionYingresoTelefono(int tel);
int codigoJuego(int codigo ,int *codigoJ);
int codigoCliente(int codigo ,int *codigoC);
int codigoAlquiler(int codigo ,int *codigoA);
char ocurrencias();
int fechaCompleta(char dma); //EL ERROR ERA: int fechaCompleta(fecha);
void listaClientes(eCliente); //EL ERROR ERA: char listaClientes(eCliente);
char lista(eJuegos);//EL ERROR ERA: char lista(ejuegos);
int codigoBorrarA(int codigoIbA);
int codigoBorrar(int codigoIbC);
int modificarClienteTelefono(int tel);
int modificarClienteDomicilio(int juego);
int modificarClienteNombre(char nombre);
int modificarClienteApellido(char apellido);
int modificarJuegoImporte( int importe);
int modificarJuegoDescripcion(int juego);
int codigoBorrar(int codigoIb);


#endif // EXAMEN_H_INCLUDED
