#include "list.h"

/*
 *	Fonction sur les List
 */
List list_initList(){
  List list = (List) malloc(sizeof(List_Param));
  if(list == NULL){
      fprintf(stderr, "Pas assez de mémoire\n");
      exit(1);      
  }
  list->first = NULL;
  list->length = 0;
  return list;
}

void list_insertFirst(List list, void* value){
  cellList_insertFirst(&list->first, value);
  list->length++;
}

void* list_removeFirst(List list){
  
  
  /*
   *
   *	Ta premiere implementation qui marchait.
   *
  void* res = cell_getValue(cellList_getCell(list->first));
  cellList_removeFirst(&list->first);
  return res;
  */
  
  
  /*
   *
   *	Ta seconde implementation qui ne marchait pas : message d'erreur de conversion.
   *
  void* res = cellList_removeFirst(&list->first);  
  return res;
  */
  
  
  /*
   * Celle que j'ai faite
   */
  return cell_getValue(cellList_removeFirst(&list->first));
 
}


void list_liberer(List list){
    Cell_List *l = &(list->first);
    while(*l != NULL){
      Cell *cell = *l;
      *l = (*l)->next;
      free(cell);     
      list->length--;
    }
}








#ifdef test_list
/*
 *	Fonction de test!    
 */

typedef struct point{
    int x;
    int y;
}Point;

int main(int argc, char* argv[]){  
    Point p1;
    p1.x = 1; p1.y = 2;  
    Point p2;
    p2.x = 3; p2.y = 4; 
    
    List list = list_initList(sizeof(Point));
    list_insertFirst(list, &p1);
    list_insertFirst(list, &p2);  
    
    Point* test[2];
    test[0] = (Point*) list_removeFirst(list);
    test[1] = (Point*) list_removeFirst(list);
     
    /*
    printf("p2.x: %d, p2.y: %d\n", test[0]->x, test[0]->y);
    printf("p1.x: %d, p1.y: %d\n", test[1]->x, test[1]->y);
    */
    list_liberer(list);
    
    return !(test[0]->x==3 && test[0]->y==4 && test[1]->x==1 && test[1]->y==2);
}
#endif


