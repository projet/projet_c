#include "list.h"



/*
 *	Fonction qui pose probmème
 *	elle ne connais pas l'element
 */

Cell* allouer(void* value, List list){
  
  Cell* cell = (Cell*) malloc(sizeof(Cell));
  if(cell == NULL){
      fprintf(stderr, "Pas assez de mémoire\n");
      exit(1);      
  }
  cell->value  = (void*) malloc(sizeof(sizeoftype));
  if(cell == NULL){
      fprintf(stderr, "Pas assez de mémoire\n");
      exit(1);      
  }
  cell->value = value;
  return cell;
}

void liberer(List *l){
    while(*l != NULL){
      Cell *cell = *l;
      *l = (*l)->next;
      free(cell);      
    }
}

void insertFirst(List *l, void* value){
  Cell* cell = allouer(value);
  cell->next = *l;
  *l = cell;
}

void printList(List l){
 while(l != NULL){ 
   printf("%d ", (int)(l->value));
   l = l->next;
  }
  printf("\n");
}

int main(int agrc, char* argv[]){
    List l = NULL;
    int *i = malloc(sizeof(int));
    *i=5;
    insertFirst(&l, 5, sizeof(int)) ;
    printList(l); 
    liberer(&l);
    return 0;
}



