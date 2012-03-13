#include "list.h"

/*
 *	Fonction qui pose probmème
 *	elle ne connais pas l'element
 */
List initList(int size){
  List list = (List) malloc(sizeof(List_Param));
  if(list == NULL){
      fprintf(stderr, "Pas assez de mémoire\n");
      exit(1);      
  }
  list->sizeofvalue = size;
  list->first = NULL;
  list->length = 0;
  return list;
}

Cell* allouer(void* value, int sizeofvalue){  
  Cell* cell = (Cell*) malloc(sizeof(Cell));
  if(cell == NULL){
      fprintf(stderr, "Pas assez de mémoire\n");
      exit(1);      
  }
  cell->value = value;
  /*memcpy(cell->value, value, sizeofvalue);*/
  return cell;
}

void liberer(List list){
    List_Chaine *l = &(list->first);
    while(*l != NULL){
      Cell *cell = *l;
      *l = (*l)->next;
      free(cell);     
      list->length--;
    }
}

void insertFirst(List list, void* value){
  Cell* cell = allouer(value, list->sizeofvalue);
  cell->next = list->first;
  list->first = cell;
  list->length++;
}


void* getValue(Cell cell){
  return cell.value;
}

Cell getFirst(List list){
  return *list->first;
}


#ifdef test_list
/*
 *	Fonction de test!    
 */

typedef struct point{
    int x;
    int y;
}Point;

int main(int agrc, char* argv[]){
    
  
    printf("coucou\n");
  
    Point p1;
    p1.x = p1.y = 7;    
    
    List list = initList(sizeof(Point));
    insertFirst(list, &p1) ;
    
    p1.x = p1.y = 9;    
    
    Point* p2;
    p2 = (Point*) getValue(getFirst(list));
    
    printf("p.x: %d, p.y: %d\n", p2->x, p2->y);
    liberer(list);
    return 0;
}
#endif


