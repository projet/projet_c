#ifndef LIST_H
#define LIST_H



#include "cell.h"


/*
 *	Une liste connais la taille d'une cellule et un pointeur vers la première cellule
 */
typedef struct list_param {
  int length;  
  Cell_List first;
}List_Param;
typedef List_Param* List;


/*
 *	TODO:fonctions
 */


/*
 *	fonctions faites.
 */
List list_initList();
void list_insertFirst(List l, void* value);
void list_liberer(List l);



#endif
