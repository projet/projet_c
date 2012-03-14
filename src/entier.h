#ifndef ENTIERS_H
#define ENTIERS_H

#include "list/list.h"

typedef unsigned char byte;

typedef struct entier{
  List value;
}Entier;


/*
 *	fonctions à implementer
 */
Entier loadEntier(char* entier);
void freeEntier(Entier);


#endif