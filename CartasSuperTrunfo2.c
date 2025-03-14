#include <stdio.h>

int main(){

    int carta = 1;
    char estado = 'A';
    char codigo[20];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;
    
    printf("Qual codigo voce deseja atribuir a sua carta:");
        scanf("%s", codigo);
    printf("Qual nome da sua cidade? (Nao coloque espaco, use _)");
        scanf("%s", cidade);
    printf("Quantos habitantes tem sua cidade: \n");
        scanf("%d", &populacao);
    printf("qual a area(km) da sua cidade: \n");
        scanf("%f", &area);
    printf("qual o PIB da sua cidade: \n");
        scanf("%f", &pib);
    printf("Quantos pontos turisticos existem na sua cidade: \n");
        scanf("%d", &pontos); 
    printf("Carta: %d \nEstado: %c \nCodigo: %s\nCidade: %s \nPopulacao: %d \nArea: %.2fkm \nPIB: %.2fbilhoes de reais \nPontos turisticos: %d\n\n", carta, estado, codigo, cidade, populacao, area, pib, pontos);
    
    
    float densidadeperc = populacao / area;
    float pib_per_cap = pib / populacao * 10000000000;
    printf("Outros dados\nDensidade populacional: %.2f hab/km \nPIB per capita: %.2f reais\n\n\n", densidadeperc, pib_per_cap);
    
    
    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[20];
    char cidade2[50];
    int populacao2; 
    int pontos2;
    float area2;
    float pib2;
    
    printf("Qual codigo voce deseja atribuir a sua carta:");
        scanf("%s", codigo);
    printf("Qual nome da sua cidade? (Nao coloque espaco, use _)");
        scanf("%s", cidade);
    printf("Quantos habitantes tem sua cidade: \n");
        scanf("%d", &populacao2);
    printf("qual a area(km) da sua cidade: \n");
        scanf("%f", &area2);
    printf("qual o PIB da sua cidade: \n");
        scanf("%f", &pib2);
    printf("Quantos pontos turisticos existem na sua cidade: \n");
        scanf("%d", &pontos2);
    printf("Carta: %d \nEstado: %c \nCodigo: %s\nCidade: %s \nPopulacao: %d \nArea: %.2fkm \nPIB: %.2fbilhões de reais \nPontos turisticos: %d\n\n", carta2, estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);
    
    float densidadeperc2 = populacao2 / area2;
    float pib_per_cap2 = pib2 / populacao2 * 10000000000 ;
    printf("Outros dados\n Densidade populacional: %.2f hab/km \n PIB per capita: %.2f reais\n\n\n", densidadeperc2, pib_per_cap2);
    
    printf("Comparação de carta (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", cidade, populacao);
    printf("Carta 1 - %s: %d\n\n", cidade2, populacao2);
    int resultado;

    if (populacao > populacao2)
    {resultado = 1;
        printf("Resultado: Carta %d (%s) venceu!", resultado, cidade);
    } 
    else 
    {resultado = 2;
    printf("Resultado: Carta %d (%s) venceu!", resultado, cidade);
    }
    return 0;
}