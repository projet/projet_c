#include "cell.h"

/*
 *	Fonctions sur les cells
 */
Cell* cell_allouer(void* value){  
  Cell* cell = (Cell*) malloc(sizeof(Cell));
  if(cell == NULL){
      fprintf(stderr, "Pas assez de mémoire\n");
      exit(1);      
  }
  cell->value = value;
  /*memcpy(cell->value, value, sizeofvalue);*/
  return cell;
}

void* cell_getValue(Cell cell){
  return cell.value;
}

/*
 *	Fonctions sur les listes
 */
Cell cellList_getCell(Cell_List list){
    return *list;
}

Cell_List cellList_getNext(Cell_List list){
  return list->next;
}

void cellList_insertFirst(Cell_List* list_cell, void* value){
  Cell* cell = cell_allouer(value);
  cell->next = *list_cell;
  *list_cell = cell;
}

Cell cellList_removeFirst(Cell_List* list_cell){
  Cell *cell;
  if(list_cell != NULL){
    cell = *list_cell;
    *list_cell = cellList_getNext(*list_cell);
  }
  return *cell;
}





#ifdef test_cell

int main(int argc, char* argv[]){
  Cell_List list = NULL;
  int i=0, j=1, k=2, l=3;
  
  cellList_insertFirst(&list, &i);
  cellList_insertFirst(&list, &j);
  cellList_insertFirst(&list, &k);
  cellList_insertFirst(&list, &l);
  
  int *test[4];
  test[0] = cell_getValue(cellList_removeFirst(&list));
  test[1] = cell_getValue(cellList_removeFirst(&list));
  test[2] = cell_getValue(cellList_removeFirst(&list));
  test[3] = cell_getValue(cellList_removeFirst(&list));  
  
  /*
  printf("l: %d\n", *test[0]);
  printf("k: %d\n", *test[1]);
  printf("j: %d\n", *test[2]);
  printf("i: %d\n", *test[3]);
  */
  
  return !(*test[0]==3 && *test[1]==2 && *test[2]==1 && *test[3]==0);
}


#endif

