#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/*	Elem a redéfinir dans les autres fichier */
/*
typedef int Elem;
*/

/*
 *	Une cellule contenant un objet dont on ne connais pas la taille
 *	et un pointeur vers l'objet suivant
 */
typedef struct cell {
    void* value;
    struct cell *next;
}Cell;

/*
 *	Une liste connais la taille d'une cellule et un pointeur vers la première cellule
 */
typedef Cell* List_Chaine;
typedef struct list {
  int length;  
  int sizeofvalue;
  List_Chaine first;
}List;


/*
 *	TODO:fonctions
 */
List initList(int size);
void insertFirst(List l, void* value);


Cell* allouer( List l, void* value);
void liberer(List l);


/*
 *	fonctions faites.
 */




#endif
