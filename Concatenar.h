//
// Created by Administrador on 13/6/2023.
//

#ifndef GUIA1_EJ15_3_CONCATENAR_H
#define GUIA1_EJ15_3_CONCATENAR_H

typedef struct nodo{
    int data;
    struct nodo * sig;
}Nodo;

typedef struct lista{
    Nodo * cabecera;
}Lista;

Nodo * newNodo(int data);
Lista * newLista();

void enlistar(Lista * lista, Nodo * nodop);
void concatenar(Lista * lista1, Lista * lista2);
void printear(Lista * lista);

#endif //GUIA1_EJ15_3_CONCATENAR_H