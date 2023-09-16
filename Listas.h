//
// Created by Usuario on 16/9/2023.
//

#ifndef LISTASCAMBIARPOSICION_LISTAS_H
#define LISTASCAMBIARPOSICION_LISTAS_H

typedef struct node{

    int data;
    struct nodo * prev;
    struct nodo * next;

}Node;

typedef struct list{

    Node * head;

}List;

Node * newNode (int data);
List * newList ();

void insert (List * list, Node * node);// inserta los nodos en una lista
void printlist (List * list);// imprime una lista
void swapNode (List * list, Node * node, int pos);//funcion que recibe  una lista, un nodo y una posicion

#endif //LISTASCAMBIARPOSICION_LISTAS_H
