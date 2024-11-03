#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int MIN = 0;
    const int MAX = 2;
    int mossaComputer;
    int mossa;
    int vincita = 0;
    int vincitaComputer = 0;
    srand(time(NULL));
    while (mossa != -1) {
    mossaComputer = rand() % (MAX - MIN + 1) + MIN;
    if (mossaComputer == 0) {
        mossaComputer = 5;
    } else if (mossaComputer == 1) {
        mossaComputer = 2;
    } else {
        mossaComputer = 0;
    }
    printf("mossa computer: %d \n", mossaComputer);
    printf("FAI LA TUA MOSSA!\n");
    printf("inserisci la tua mossa (0 = sasso) (2 = forbici) (5 = carta) (-1 = FINITO!):\n");
    scanf("%d", &mossa);
        if (mossa != 0 && mossa != 2 && mossa != 5 && mossa != -1) {
            printf("NUMERO NON VALIDO! RIPROVA!");
        }
    switch (mossa) {
        case 0:
            if (mossaComputer == 0) {
                printf("PAREGGIO!\n");
            } else if (mossaComputer == 2) {
                printf("HAI VINTO!\n");
                vincita++;
            } else {
                printf("HAI PERSO!\n");
                vincitaComputer++;
            }
        break;
        case 2:
            if (mossaComputer == 0) {
                printf("HAI PERSO!\n");
                vincitaComputer++;
            } else if (mossaComputer == 2) {
                printf("PAREGGIO!\n");
            } else {
                printf("HAI VINTO!\n");
                vincita++;
            }
        break;
        case 5:
            if (mossaComputer == 0) {
                printf("HAI VINTO!\n");
                vincita++;
            } else if (mossaComputer == 2) {
                printf("HAI PERSO!\n");
                vincitaComputer++;
            } else {
                printf("PAREGGIO!\n");
            }
        break;
    }
    }
    printf("FINITO!\n");
    if (vincita > vincitaComputer) {
        printf("HAI VINTO %d VOLTE!", vincita);
    }
    else if (vincitaComputer > vincita) {
        printf("HAI PERSO %d VOLTE", vincitaComputer);
    }
    else {
        printf("PAREGGIO");
    }


    return 0;
}
