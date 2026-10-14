#include <stdio.h>
#include <string.h>

#define  length_commande 50

int in(char commande[length_commande]){
    for (int i = 0; i < length_commande; i++){
        if (commande[i] == '\n'){
            return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[]){
    int work = 1;
    while (work){
        char commande[length_commande];

        printf(">> ");
        fflush(stdout);

        if (fgets(commande, sizeof(commande), stdin) != NULL){ // A comprendre
            if (in(commande)){
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


