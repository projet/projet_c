#ifndef INTERVALLE_LIST_H
#define INTERVALLE_LIST_H

#include <stdio.h>

#include "intervalle.h"

typedef int Elem;
#include "list.h"

/*
 *	Une liste d'intervalles
 */ 
typedef struct cell_intervalle{
  Intervalle val;
  struct cell_intervalle *next;
}Cell_intervalle;

typedef Cell_intervalle* Intervalle_list;


/*
 *	TODO: fonctions a implémenter
 */
Intervalle_list add(Intervalle intervalle);
Intervalle_list rem(Intervalle intervalle);

Intervalle_list LoadFromFile(char* url);

Intervalle_list calcul(Intervalle_list inter1, Intervalle_list inter2);

#endif