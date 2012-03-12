#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int Elem;

typedef struct cell{
  Elem elem;
  struct cell *next; 
}Cell;

typedef Cell* List;

/*
 *	TODO:fonctions des lists
 */
void printList(List l);
Cell* allouer(Elem elem);
void liberer(List *l);
void insertFirst(List *l, Elem elem);

#endif