//
// Created by Usuario on 16/9/2023.
//

#include "Listas.h"
#include "malloc.h"
#include "stdio.h"

Node * newNode (int data){

    Node * aux = NULL;
    aux = malloc(sizeof(Node));

    if(aux == NULL){
        printf("No hay espacio de memoria suficiente.");
        exit (-1);
    }
    else{
        aux->data = data;
        aux->prev = NULL;
        aux->next = NULL;
    }
    return aux;
}
List * newList (){

    List * aux = NULL;
    aux = malloc(sizeof(List));

    if(aux == NULL){
        printf("No hay espacio de memoria suficiente.");
        exit (-1);
    }
    else{
        aux->head = NULL;
    }
    return aux;
}

void insert (List * list, Node * node) {

    if (list->head == NULL) {
        list->head = node;
    } else {

        Node *aux = list->head;

        while (aux->next != NULL) {//recorre hasta encontrar el ultimo
            aux = aux->next;
        }
        aux->next = node;
        node->prev = aux;
    }
}
void printlist (List * list) {

    Node * aux = list->head;

    while (aux != NULL){
        printf("\t%d\t",aux->data);
        aux = aux->next;
    }
    printf("\n");
}

void swapNode (List * list, Node * nodeToSwap, int pos){

    if (list->head == NULL){//la lista esta vacia
        printf("Lista vacia, no se puede intercambiar.");
        exit (-1);
    }
    else {
        Node *aux = list->head;//persisto la cabeza en un auxiliar
        int cont = 0;//creo un contador

        while (aux != NULL && cont < pos - 1) {//cuento las posiciones hasta llegar a la pedida
            cont++;
            aux = aux->next;
        }
        if (aux == NULL) {//la lista es mas corta y no se encuentra la posicion
            printf("La posicion no se encuentra en la lista.");
            exit(-1);
        } else if (aux->next == NULL){
            aux->prev = nodeToSwap->prev;
            aux->data = nodeToSwap->data;
            nodeToSwap->next = NULL;
        }
        else{
            aux->prev = nodeToSwap->prev;
            aux->data = nodeToSwap->data;
            nodeToSwap->next = aux->next;
        }

    }
}

