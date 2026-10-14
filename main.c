#include <stdio.h>
#include <string.h>

#define  LENGTH_COMMANDE 50

int contains_newline(char commande[LENGTH_COMMANDE]){
    for (int i = 0; i < LENGTH_COMMANDE; i++){
        if (commande[i] == '\n'){
            return 1;
        } if (commande[i] == 0){
            return 0;
        }
    }
    return 0;
}

int main(int argc, char *argv[]){
    while (1){
        char commande[LENGTH_COMMANDE];

        printf(">> ");
        fflush(stdout);

        if (fgets(commande, sizeof(commande), stdin) != NULL){ // A comprendre
            if (contains_newline(commande)){
                if (strcmp(commande, "exit\n") == 0){
                    break;
                }
            } else {
                int c;
                while ((c=getchar()) != '\n' && c != EOF) {}
            }
        }
    }
    return 0;
}


