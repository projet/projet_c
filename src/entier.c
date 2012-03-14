#include "entier.h"

#include <string.h>
#include <stdlib.h>

#ifdef test_entier
#include <stdio.h>
#endif

/*	TODO: fonctions à impplémenter	*/


Entier initEntier(char* s_entier){
  Entier entier;   
  list_initList();
  
  /*
   *	TODO: a implémenter
   */
  list_insertFirst(entier.value, atoi(s_entier));
  entier.length = 1;
  
  return Entier;
}






#ifdef test_entier
int main(int argc, char *argv[]){
  printf("test entier\n");
  
  
  return 0;
}



#endif