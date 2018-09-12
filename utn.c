#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"



static float getfloat(float *pBuffer )
{
    return scanf("%f", pBuffer );
}

int utn_getFloat(  float* pFloat, char* msg,
                    char* msgErr,int min, int max,
                    int reintentos)

{
    int retorno=-1;
    float bufferFloat;
    if(pFloat != NULL && msg != NULL && msgErr != NULL
        && min <= max && reintentos >= 0)
    {
        do
        {
            reintentos++;
            printf("%s",msg);
            if( (getfloat(&bufferFloat) == 1) &&
                (bufferFloat >= min && bufferFloat <= max))
            {
                *pFloat = bufferFloat;
                retorno = 0;
                break;
            }
            else
            {
                __fpurge(stdin);
                printf("%s",msgErr);
            }

        }while(reintentos>=0);

    }
    return retorno;
}

/***************************************************/


static int getEntero(int *pBuffer )
{
    return scanf("%d", pBuffer );
}

int utn_getEntero(  int* pEntero, char* msg,
                    char* msgErr,int min, int max,
                    int reintentos)

{
    int retorno=-1;
    int bufferInt;
    if(pEntero != NULL && msg != NULL && msgErr != NULL
        && min <= max && reintentos >= 0)
    {
        do
        {
            reintentos++;
            printf("%s",msg);
            if( (getInt(&bufferInt) == 1) &&
                (bufferInt >= min && bufferInt <= max))
            {
                *pEntero = bufferInt;
                retorno = 0;
                break;
            }
            else
            {
                __fpurge(stdin);
                printf("%s",msgErr);
            }

        }while(reintentos>=0);

    }
    return retorno;
}

/*************************************************************************/


static char getChar( char *pBuffer )
{
    return scanf("%c", pBuffer );
}

int utn_getChar( char* pChar, char* msg,
                    char* msgErr,char min, char max,
                    int reintentos)

{
    int retorno=-1;
    char bufferChar;
    if(pChar != NULL && msg != NULL && msgErr != NULL
        && min <= max && reintentos >= 0)
    {
        do
        {
            reintentos++;
            printf("%s",msg);
            if( (getChar(&bufferChar) == 1) &&
                (bufferChar >= min && bufferChar <= max))
            {
                *pChar = bufferChar;
                retorno = 0;
                break;
            }
            else
            {
                __fpurge(stdin);
                printf("%s",msgErr);
            }

        }while(reintentos>=0);

    }
    return retorno;
}

/***********************************************************************/







