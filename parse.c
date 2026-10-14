#include <stdio.h>
#include "parse.h"

#define LENGTH_COMMANDE 50

void parse_commande(char *commande, char *liste_commande[]){
    int i_commande = 0;
    int i_liste = 0;
    char str_tmp[LENGTH_COMMANDE] = "";


    while (commande[i_commande] != '\n' && commande[i_commande] != 0){
        if (commande[i_commande] == ' '){
            liste_commande[i_liste] = str_tmp;
            str_tmp[LENGTH_COMMANDE] = "";
            i_liste++
        }
         

    }
}