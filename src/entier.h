#ifndef ENTIERS_H
#define ENTIERS_H


/*
 *	A voir comment on l'implémente
 *	Sous forme de list ou bit par bit
 *	comme en algo
 */
typedef struct cell_entier{
  /* "Quelque soit le système vous êtes sur que char fait 4 octets!" Mr Paumier */
  char val;
  struct cell_entier *next;
}Cell_entier;

typedef Cell_entier* Entier;


/*
 *	fonctions à implementer
 */
Entier loadEntier(char* entier);
void freeEntier(Entier);


#endif