#include <stdio.h>
#include <string.h>
//#include "parse.h"

#define LENGTH_COMMANDE 50

void parse_commande(char *commande, char *liste_commande[]){
    int i_commande = 0;
    int i_liste = 0;
    int i_tmp = 0;
    char str_tmp[LENGTH_COMMANDE] = "";
    char commande_a_copier[LENGTH_COMMANDE][LENGTH_COMMANDE];

    
    while (commande[i_commande] != '\n' && commande[i_commande] != 0){
        printf("%lu|\n", strlen(str_tmp));

        if (commande[i_commande] == ' ' ){
            if (1){
                strcpy(commande_a_copier[i_liste], str_tmp);
                for (int i = 0; i <= i_tmp; i++){
                    str_tmp[i] = 0;
                }
                i_tmp = 0;
                i_liste++;
                i_commande++;
        }
        } else {
            str_tmp[i_tmp] =  commande[i_commande];
            i_tmp++;
            i_commande++;
        }
    }
    if (strcmp(str_tmp, "")){
        strcpy(commande_a_copier[i_liste], str_tmp);
        i_liste++;
    }



    for (int i = 0; i<i_liste; i++){
        printf("%d : %s\n", i, commande_a_copier[i]);
    }



}

int main(){
    char *c[500] ;
    parse_commande("sudo apt install wget coucou abeille jkcjhz efz b ezfe  f zef    zef", c);
    return 0;
}