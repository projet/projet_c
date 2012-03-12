#ifndef ENTIERS_H
#define ENTIERS_H

/*
 *	A voir comment on l'implémente
 *	Sous forme de list ou bit par bit
 *	comme en algo (plus long)
 */
typedef struct cell{
  int val;
  struct cell *next;
}Cell;

typedef Cell* Entier;


/*
 *	fonctions à implementer
 */
Entier loadEntier(char* entier);
void freeEntier(Entier);


#endif