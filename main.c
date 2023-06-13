/* Una funcion que concatene dos listas enlazadas */

#include <stdio.h>
#include "Concatenar.h"


int main() {

    Lista * lista1 = newLista();
    Lista * lista2 = newLista();

    enlistar(lista1, newNodo(3));
    enlistar(lista1, newNodo(5));
    enlistar(lista1, newNodo(7));
    enlistar(lista1, newNodo(11));
    enlistar(lista1, newNodo(9));
    enlistar(lista2, newNodo(2));
    enlistar(lista2, newNodo(6));
    enlistar(lista2, newNodo(4));
    enlistar(lista2, newNodo(8));
    enlistar(lista2, newNodo(10));

    printf("Lista 1\n");
    printear(lista1);
    printf("Lista 2\n");
    printear(lista2);

    concatenar(lista1, lista2);
    printf("Lista concatenada\n");
    printear(lista1);

    return 0;
}
