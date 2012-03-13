#include <stdio.h>

#include "intervalle_list.h"


/*	
 *	Paramètres du programme (challenger [OPITIONS] )
 * -i/--inclusion F1: fichier contenant la première liste d'intervalles. Si cette option est omise, le résultat doit bien entendu être une liste vide.
 * -e/--exclusion F2: fichier contenant la seconde liste d'intervalles. Par défaut, toutes les valeurs de la liste d'entrées sont autorisées.
 * -o/--output F3: fichier de sortie. Par défaut, le résultat sera affiché sur la sortie standard du programme.
 */

int main(int argc, char **argv){
   Intervalle_list inclusion;
   Intervalle_list exclusion;
   Intervalle_list resultat;

   inclusion = LoadFromFile("");
   exclusion = LoadFromFile("");
   
   resultat = calcul(inclusion, exclusion);
   
   
   /*
    *	TODO: a faire...
    */
   
   
   return 0;
}
