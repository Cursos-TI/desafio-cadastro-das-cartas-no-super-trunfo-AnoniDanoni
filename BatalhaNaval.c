#include <stdio.h>

int main(){
    int tabuleiro [10][10] = {
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 3 ,3 ,3 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,3 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,3 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,3 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0}

    };
        //printando na tela o tabuleiro
    printf("\n   0 1 2 3 4 5 6 7 8 9\n\n"); //numeração colunas
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i); // Numeração das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}    