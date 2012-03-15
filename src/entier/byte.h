#ifndef BYTE_H
#define BYTE_H

/*
 *	Permet de mettre une erreur si on apelle les fonctions avec de mauvais argument
 *	On peut aussi le recoder nous meme avec un #def  (test en modifian une valeur dans
 *	le main de byte depassant 7 pour voir ce que sa fait) : A voir quelle technik choisir
*/
#include "assert.h"

typedef unsigned char byte;

#endif