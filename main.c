//funcion que recibe 3 parametros(nodo, lista doble, numero)
//debe reemplazar el nodoque indique el subindice por el nodo pasado por parametro

#include <stdio.h>
#include "listas.h"

int main() {
    List * nuevalista = newList();

    insert(nuevalista, newNode(1));
    insert(nuevalista, newNode(2));
    insert(nuevalista, newNode(3));
    insert(nuevalista, newNode(4));

    printlist(nuevalista);

    swapNode(nuevalista, newNode(5),3);

    printlist(nuevalista);

    return 0;
}
