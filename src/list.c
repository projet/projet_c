#include "list.h"



/*
 *	Fonction qu'il faut donner en param (?? pointeur ???)
 *	change en fonction du type de liste
 */
int getValue(Elem elem){
  return elem;
}

void printList(List l){
 while(l != NULL){ 
   printf("%d ", l->elem);
   l = l->next;
  }
  printf("\n");
}



Cell* allouer(Elem elem){
  Cell* cell = (Cell*) malloc(sizeof(Cell));
  if(cell == NULL){
      fprintf(stderr, "Pas assez de mémoire\n");
      exit(1);      
  }
  cell->elem = elem;
  return cell;
}

void liberer(List *l){
    while(l != NULL){
      Cell *cell = *l;
      *l = (*l)->next;
      free(cell);      
    }
}

void insertFirst(List *l, Elem elem){
  Cell* cell = allouer(elem);
  cell->next = *l;
  *l = cell;
}

int main(int agrc, char* argv[]){
    List l = NULL;
    insertFirst(&l, 5) ;
    printList(l); 
    liberer(&l);
    return 0;
}