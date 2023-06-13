//
// Created by Administrador on 13/6/2023.
//

#include "Concatenar.h"
#include <stdio.h>
#include <stdlib.h>


Nodo * newNodo(int data) {
    Nodo * aux = NULL;
    aux = malloc(sizeof(Nodo));
    if(aux == NULL){
        printf("Error al asingar memoria\n");
        exit (-1);
    }
    aux->data = data;
    aux->sig = NULL;

    return aux;
}

Lista *newLista() {
    Lista * aux = NULL;
    aux = malloc(sizeof(Lista));
    if(aux == NULL){
        printf("Erororor\n");
        exit (-1);
    }
    aux->cabecera = NULL;
    return aux;
}

void enlistar(Lista *lista, Nodo * nodop) {
    if(lista->cabecera == NULL){ /*lISTA VACIA*/
        lista->cabecera = nodop;
    }else{
        Nodo * aux = lista->cabecera;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nodop;
    }
}

void concatenar(Lista *lista1, Lista *lista2) {
    Nodo * aux1 = lista1->cabecera;
    Nodo * aux2 = lista2->cabecera;

    while(aux1->sig != NULL){
        aux1 = aux1->sig;
    }
    while(aux2->sig != NULL){
        aux1->sig = aux2;
        aux1 = aux1->sig;
        aux2 = aux2->sig;
    }
}

void printear(Lista * lista){
    Nodo * aux = lista->cabecera;
    while(aux != NULL){
        printf("%d\n", aux->data);
        aux = aux->sig;
    }
}






