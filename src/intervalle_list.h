#ifndef INTERVALLE_LIST_H
#define INTERVALLE_LIST_H

#include "intervalle.h"

/*
 *	Une liste d'intervalles
 */ 
typedef struct cell{
  Intervalle val;
  struct cell *next;
}Cell;

typedef Cell* Intervalle_list;


/*
 *	TODO: fonctions a implémenter
 */
Intervalle_list add(Intervalle intervalle);
Intervalle_list remove(Intervalle intervalle);