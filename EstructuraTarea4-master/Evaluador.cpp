#include "Evaluador.h"

void evaluar()
{
    int nota = 0;

    NodoArbolBinario *n11 = new NodoArbolBinario(1);
    NodoArbolBinario *n12 = new NodoArbolBinario(2);
    NodoArbolBinario *n13 = new NodoArbolBinario(3);
    NodoArbolBinario *n14 = new NodoArbolBinario(4);
    NodoArbolBinario *n15 = new NodoArbolBinario(5);

    n11->hijo_izq = n12;
    n11->hijo_der = n13;
    n12->hijo_izq = n14;
    n12->hijo_der = n15;


    NodoArbolBinario *n21 = new NodoArbolBinario(10);
    NodoArbolBinario *n22 = new NodoArbolBinario(20);
    NodoArbolBinario *n23 = new NodoArbolBinario(30);
    NodoArbolBinario *n24 = new NodoArbolBinario(40);

    n21->hijo_izq = n22;
    n21->hijo_der = n23;
    n23->hijo_izq = n24;


    NodoArbolNArio *nn11 = new NodoArbolNArio(1);
    NodoArbolNArio *nn12 = new NodoArbolNArio(2);
    NodoArbolNArio *nn13 = new NodoArbolNArio(3);
    NodoArbolNArio *nn14 = new NodoArbolNArio(4);
    NodoArbolNArio *nn15 = new NodoArbolNArio(5);
    NodoArbolNArio *nn16 = new NodoArbolNArio(6);
    NodoArbolNArio *nn17 = new NodoArbolNArio(7);

    nn11->hijos.push_back(nn12);
    nn11->hijos.push_back(nn13);
    nn11->hijos.push_back(nn14);

    nn13->hijos.push_back(nn15);
    nn13->hijos.push_back(nn16);

    nn16->hijos.push_back(nn17);


    NodoArbolNArio *nn21 = new NodoArbolNArio(10);
    NodoArbolNArio *nn22 = new NodoArbolNArio(20);
    NodoArbolNArio *nn23 = new NodoArbolNArio(30);
    NodoArbolNArio *nn24 = new NodoArbolNArio(40);

    nn21->hijos.push_back(nn22);
    nn21->hijos.push_back(nn23);

    nn23->hijos.push_back(nn24);

    cout<<"Ejercicio suma(NodoArbolBinario* raiz):\t\t\t";
    if(suma(n11) == 15 && suma(n21) == 100)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio suma(NodoArbolNArio* raiz):\t\t\t";
    if(suma(nn11) == 28 && suma(nn21) == 100)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio cantidadNodos(NodoArbolBinario* raiz):\t";
    if(cantidadNodos(n11) == 5 && cantidadNodos(n21) == 4)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio cantidadNodos(NodoArbolNArio* raiz):\t\t";
    if(cantidadNodos(nn11) == 7 && cantidadNodos(nn21) == 4)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"Ejercicio promedio(NodoArbolBinario* raiz):\t\t";
    if(promedio(n11) == 3 && promedio(n21) == 25)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio promedio(NodoArbolNArio* raiz):\t\t";
    if(promedio(nn11) == 4 && promedio(nn21) == 25)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<endl<<"Nota: "<<nota<<"/6"<<endl;
}
