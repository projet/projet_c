#include "entier.h"

#include <string.h>
#include <stdlib.h>

#ifdef test_entier
#include <stdio.h>
#endif

/*	TODO: fonctions à impplémenter	*/

/* 
 * Tests si la chaîne de caractéres passer en arguments contient bien que des entiers 
 */
int isInteger(char* s_entier){
  int i, length=strlen(s_entier);
  for(i=0;i<length;i++)
    if(s_entier[i]<'0' || s_entier[i] > '9')
      return 0;
    return 1;
}
/*
Entier initEntier(char* s_entier){
  Entier entier;   
  list_initList();
  

  list_insertFirst(entier.value, atoi(s_entier));
  entier.length = 1;

  
  return Entier;
}
*/





#ifdef test_entier
int main(int argc, char *argv[]){
  printf("test entier\n");
  
  
  return 0;
}



#endif
