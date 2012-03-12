#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/*	Elem a redéfinir dans les autres fichier */
/*
typedef int Elem;
*/

typedef struct cell{
  Elem elem;
  struct cell *next; 
}Cell;

typedef Cell* List;

/*
 *	TODO:fonctions
 */
Elem getValue(Cell);
void printList(List l);
  


/*
 *	fonctions faites.
 */
Cell* allouer(Elem elem);
void liberer(List *l);
void insertFirst(List *l, Elem elem);

#endif