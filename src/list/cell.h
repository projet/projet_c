#ifndef CELL_LIST_H
#define CELL_LIST_H

#include <stdlib.h>
#include <stdio.h>

/*
 *	Une cellule contenant un objet dont on ne connais pas la taille
 *	et un pointeur vers l'objet suivant
 */
typedef struct cell {
    void* value;
    struct cell *next;
}Cell;
typedef Cell* Cell_List;

Cell* cell_allouer(void* value);
void* cell_getValue(Cell cell);

Cell cellList_getCell(Cell_List list);
Cell_List cellList_getNext(Cell_List list);
void cellList_insertFirst(Cell_List* list_cell, void* value);
Cell cellList_removeFirst(Cell_List* list_cell);


#endif