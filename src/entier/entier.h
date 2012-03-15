#ifndef ENTIERS_H
#define ENTIERS_H

typedef unsigned char byte;

typedef struct entier{
  int length;
  byte *value;
}Entier;


/*
 *	fonctions à implementer
 */
Entier loadEntier(char* entier);
void freeEntier(Entier);


#endif