#ifndef LIST_H
#define LIST_H



#include "cell.h"


/*
 *	Une liste connais la taille d'une cellule et un pointeur vers la première cellule
 */
typedef struct list_param {
  int length;  
  int sizeofvalue;
  Cell_List first;
}List_Param;
typedef List_Param* List;


/*
 *	TODO:fonctions
 */


/*
 *	fonctions faites.
 */
List initList(int size);
void insertFirst(List l, void* value);
void liberer(List l);



#endif
