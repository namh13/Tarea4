#ifndef EVALUADOR_H
#define EVALUADOR_H

#include "NodoArbolBinario.h"
#include "NodoArbolNArio.h"
#include <iostream>       // std::cin, std::cout

using namespace std;

void evaluar();

int suma(NodoArbolBinario* raiz);

int suma(NodoArbolNArio* raiz);

int cantidadNodos(NodoArbolBinario* raiz);

int cantidadNodos(NodoArbolNArio* raiz);

int promedio(NodoArbolBinario* raiz);

int promedio(NodoArbolNArio* raiz);

#endif // EVALUADOR_H
