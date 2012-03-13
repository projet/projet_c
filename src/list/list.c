#include "list.h"



/*
 *	Fonction qui pose probmème
 *	elle ne connais pas l'element
 */
List initList(int size){
  List list; 
  list.first = NULL;
  list.length = 0;
  list.sizeofvalue = size; 
  return list;
}

Cell* allouer(List list, void* value){
  
  Cell* cell = (Cell*) malloc(sizeof(Cell));
  if(cell == NULL){
      fprintf(stderr, "Pas assez de mémoire\n");
      exit(1);      
  }
  cell->value  = (void*) malloc(sizeof(list.sizeofvalue));
  if(cell == NULL){
      fprintf(stderr, "Pas assez de mémoire\n");
      exit(1);      
  }
  /* memcpy(cell->value, value, sizeoftype); */
  cell->value = value;
  return cell;
}

void liberer(List list){
    List_Chaine *l = &(list.first);
    while(*l != NULL){
      Cell *cell = *l;
      *l = (*l)->next;
      free(cell);      
    }
}

void insertFirst(List list, void* value){
  Cell* cell = allouer(list, value);
  cell->next = list.first;
  list.first = cell;
  list.length++;
}


/*
 *	Fonctions de tests
 */
void printList(List list){
 List_Chaine l = list.first;
 while(l != NULL){ 
   printf("%d ", (int)(l->value));
   l = l->next;
  }
  printf("\n");
}

int main(int agrc, char* argv[]){
    List list = initList(sizeof(int));
    int i = 5;
    insertFirst(list, &i) ;
    printList(list); 
    liberer(list);
    return 0;
}



