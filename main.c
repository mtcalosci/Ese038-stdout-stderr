#include <stdio.h>
#include <stdlib.h>

#define MAX_STRLEN 50

int main(int argc, char** argv) {
    char stringa[MAX_STRLEN];
    int opzione;
    int i = 1;
    
    printf("Inserisci la %d° stringa\nScrivi '[fine]' per terminare l'inserimento\n",i);
    scanf("%[^\n]",stringa);
    
    while(strcmp(stringa,"[fine]")){
        printf("Dove vuoi scrivere la tua stringa ?\n Premi 1 se vuoi scrivere in STDOUT\n Premi 2 se vuoi scrivere in STDERR\n NUMERO: ");
        scanf("%d", &opzione);
        
        switch(opzione){
            case 1: fprintf(stdout, "stdout: %s\n\n", stringa);
                    break;
            case 2: fprintf(stderr, "stderr: %s\n\n", stringa);
                    break;
            default: fprintf(stderr, "ERRORE! IL NUMERO INSERITO NON E' VALIDO !\n");   
        }
        i++;
        printf("Inserisci la %d° stringa\nScrivi '[fine]' per terminare l'inserimento\n",i);
        scanf("\n%[^\n]",stringa);
       
        }
    
    return (EXIT_SUCCESS);
}

