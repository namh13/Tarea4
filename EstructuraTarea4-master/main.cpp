#include "NodoArbolBinario.h"
#include "NodoArbolNArio.h"
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <list>          // std::list
using namespace std;

int suma(NodoArbolBinario *raiz)
{
    int resultado = 0; //variable para almacenar la suma de los valores

    if(raiz!=NULL) //chequiamos si el arbol es distinto a Null osea que no este vacio
    {
        resultado += raiz->num; //le sumamos a resultado el valor que hay dentro de la raiz o apunta

        resultado += suma(raiz->hijo_der) + suma(raiz->hijo_izq); //hacemos recursividad,mandamos a llamar la funcion otra vez pero ahora para sumar los valores de los hijos
    }

    return resultado; // retornamos el resultado
}

int suma(NodoArbolNArio *raiz)
{
    int resultado = 0; //variable para almacenar la suma de los valores

    if(raiz!=NULL)//chequiamos si el arbol es distinto a Null osea que no este vacio
    {
        resultado += raiz->num; //le sumamos a resultado el valor que hay dentro de la raiz o apunta
        for(list<NodoArbolNArio*>::iterator i = raiz->hijos.begin();
        i!=raiz->hijos.end();
        i++) // creamos un ciclo que se va a repetir siempre y cuando nuestro iterador no llegue al final, el iterador es el que recorre la raiz
        {
        resultado += suma(*i); //hacemos recursividad, vamos guardando y sumando los valores que hay en el iterador
        }
    }
    return resultado; // retornamos el resultado
}

int cantidadNodos(NodoArbolBinario* raiz)
{
    int cantidad = 0; // variable para almacenar la cantidad de nodos

    if(raiz!=NULL) //chequiamos si el arbol es distinto a Null osea que no este vacio
    {
        cantidad++; //si no esta vacio le sumamos uno a cantidad
        cantidad += cantidadNodos(raiz->hijo_der) + cantidadNodos(raiz->hijo_izq); //hacemos recursividad, mandamos a llamar la funcion otra vez pero ahora para ver cuantos nodos hay en cada hijo y los sumamos los dos al final
    }
    return cantidad; // retornamos la cantidad
}

int cantidadNodos(NodoArbolNArio* raiz)
{
    int cantidad = 0; // variable para almacenar la cantidad de nodos
    if(raiz!=NULL)  //chequiamos si el arbol es distinto a Null osea que no este vacio
    {
        cantidad++; //si no esta vacio le sumamos uno a cantidad
        for(list<NodoArbolNArio*>::iterator i = raiz->hijos.begin();
        i!=raiz->hijos.end();
        i++) // creamos un ciclo que se va a repetir siempre y cuando nuestro iterador no llegue al final, el iterador es el que recorre la raiz
        {
             cantidad+= cantidadNodos(*i); //hacemos recursividad, vamos sumando la cantidad de nodos que hay en el iterador
        }
    }
    return cantidad; // retornamos la cantidad
}

int promedio(NodoArbolBinario* raiz)
{
    int prom; //variable para guardar el promedio

    if(raiz!=NULL) //chequiamos si el arbol es distinto a Null osea que no este vacio
    {
         prom = suma(raiz)/cantidadNodos(raiz); //mandamos a llamar nuestras funciones de sumar y cantidad que ya teniamos y a la suma la dividimos entre la cantidad para sacar el promedio
    }
    else // si de lo contrario el arbol esta vacio
    {
         prom = -1; //imprimimos menos -1
    }
    return prom; // retornamos el promedio
}

int promedio(NodoArbolNArio* raiz)
{
    int prom; //variable para guardar el promedio

    if(raiz!=NULL) //chequiamos si el arbol es distinto a Null osea que no este vacio
    {
         prom = suma(raiz)/cantidadNodos(raiz); //mandamos a llamar nuestras funciones de sumar y cantidad que ya teniamos y a la suma la dividimos entre la cantidad para sacar el promedio
    }
    else // si de lo contrario el arbol esta vacio
    {
         prom = -1; //imprimimos menos -1
    }
    return prom; // retornamos el promedio
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 1;
}
