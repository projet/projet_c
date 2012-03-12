#ifndef ENTIERS_H
#define ENTIERS_H

/*
 *	A voir comment on l'implémente
 *	Sous forme de list ou bit par bit
 *	comme en algo (plus long)
 */
typedef struct cell_entier{
  int val;
  struct cell_entier *next;
}Cell_entier;

typedef Cell_entier* Entier;


/*
 *	fonctions à implementer
 */
Entier loadEntier(char* entier);
void freeEntier(Entier);


#endif