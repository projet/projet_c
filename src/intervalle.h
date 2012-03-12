#ifndef INTERVALLE_H
#define INTERVALLE_H

#include "entier.h"


/*
 *	les bornes d'un intervalle: 2 entier (exemple [1212, 9888])
 */
typedef struct intervalle{
    Entier bornes[2];
}Intervalle;

/*
 *	TODO: fonctions a implémenter
 */

/* Remet l'intervalle dans le bon sens [99; 0] -> [0; 99] */
void normaliseIntervalle(Intervalle intervalle);

/* Initialise un intervalle */
Intervalle initIntervalle();

#endif