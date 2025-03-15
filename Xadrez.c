#include <stdio.h>
int main()
{

    printf("torre:\n");
        for (int torre = 1; torre <= 5; 
        torre++) {
            printf("esquerda\n");
        }
            printf("-----------------------------------\n");
            
    printf("bispo:\n");
        for (int bispo = 1; bispo <= 5; 
        bispo++) {
            printf("cima, direita\n");
        }
                printf("-----------------------------------\n");
    
    
        printf("rainha:\n");
        for (int rainha = 1; rainha <= 8; 
        rainha++) {
            printf("esquerda\n");
        }
                printf("-----------------------------------\n");
        
        
            printf("Cavalo:\n");
            for (int cavalov = 1; cavalov <= 2; cavalov++) {
                printf("Baixo\n");
                    if (cavalov == 2) { 
                for (int cavaloh = 1; cavaloh <= 1; cavaloh++) {
                    printf("Esquerda\n");
                }
            }
        }
                printf("-----------------------------------\n");
    
    return 0;
}