    #ifndef UTN_H_INCLUDED
    #define UTN_H_INCLUDED


    /**
        utn_getEntero : pide un entero al usuario
        @param pEdad: puntero a edad
        @param reintentos: cantidad de reintentos
        @return : 0 OK, -1 error.
    */
    int utn_getEntero(  int* pEntero, char* msg,
                        char msgErr[],int min, int max,
                        int reintentos);

    int utn_getFloat(  float* pFloat, char* msg,
                        char msgErr[],int min, int max,
                        int reintentos);

    int utn_getChar(  char* pChar, char* msg,
                        char msgErr[],int min, int max,
                        int reintentos);

    int utn_getString(  char* pString, char* msg,
                        char msgErr[],int min, int max,
                        int reintentos);



    #endif // UTN_H_INCLUDED
