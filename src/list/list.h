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
typedef Cell* First;
typedef struct list {
    int sizeofvalue;
    First first;
}List;


/*
 *	TODO:fonctions
 */
List init(int size);
void insertFirst(List l, void* value);


Cell* allouer( List l, void* value);



/*
 *	fonctions faites.
 */

void liberer(List *l);


#endif
