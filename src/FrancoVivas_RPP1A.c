#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 5

/***********************************/




struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
} typedef ePais;
/*******************************/




void actualizarRecuperados(ePais* pais, int recuperadosHoy);

void invertirCadena(char cadena[]);

void ordenarCaracteres(char cadena[]);

int main()
{
   /**********************************************************************************************************
    1)
    Dada una estructura ePais cuyos campos son id (int), nombre(20 char), infectados(int), recuperados(int) y muertos(int).
    Desarrollar una funcion llamada ActualizarRecuperados que reciba el pais y los recuperados del dia y que acumule
    estos a los que ya tinene el pais.
    La funcion no devuelve nada.
    */

    ePais miPais[1] = {1, "Argentina", 100, 200, 15};
    int recuperadosHoy = 60;

    actualizarRecuperados(miPais, recuperadosHoy);

    printf("Total recuperados: %d \nTotal Infectados: %d \n\n",miPais->recuperados, miPais->infectados);

    /**********************************************************************************************************
    2)
    Crear una funcion que se llame invertirCadena que reciba una cadena de caracteres como parametro y su
    responsabilidad es invertir los caracteres de la misma. Ejemplo:
    Si le pasamos Gato lo retorna como otaG
    */

    char libro[30] = "Gato";

    invertirCadena(libro);

    /**********************************************************************************************************
    3)
    Crear una funcion que se llame ordenarCaracteres qe reciba una cadena de caracteres como parametro y su responsabilidad
    es ordenar los caracteres de manera ascendente dentro de la cadena. Ejemplo:
    Si le pasamos la palabra "algoritmo" la deja como "agilmoort"
    */
    char palabra[20] = "guante";
    ordenarCaracteres(palabra);


    return 0;
}

void actualizarRecuperados(ePais* pais, int recuperadosHoy)
{
    if(pais != NULL && recuperadosHoy > -1)
    {
        pais->recuperados = pais->recuperados + recuperadosHoy;
        pais->infectados = pais->infectados - recuperadosHoy;
    }
}

void invertirCadena(char cadena[])
{
    char aux;
    int tam = strlen(cadena);

    for(int i = 0; i < tam-1; i++)
    {
        for(int j = i + 1; j < tam; j++)
        {
            aux = cadena[i];
            cadena[i] = cadena[j];
            cadena[j] = aux;
        }
    }
    printf("%s \n\n", cadena);
}

void ordenarCaracteres(char cadena[])
{
    int tam = strlen(cadena);
    char aux;

    for(int i = 0; i < tam-1; i++)
    {
        for(int j = i + 1; j < tam; j++)
        {

            if(cadena[i] > cadena[j])
            {
                aux = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = aux;
            }

        }
    }
    printf("%s \n\n", cadena);
}
