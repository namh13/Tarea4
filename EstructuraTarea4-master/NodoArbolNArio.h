#ifndef NODOARBOLNARIO_H
#define NODOARBOLNARIO_H

#include <list>

using namespace std;

class NodoArbolNArio
{
public:
    int num;
    list<NodoArbolNArio*>hijos;
    NodoArbolNArio(int num);
};

#endif // NODOARBOLNARIO_H
