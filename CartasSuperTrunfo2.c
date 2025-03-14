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
    
    int input, resultado;
    printf("Escolha um atributo para batalhar:\n");
    printf("[1] Populacao\n[2] Area\n[3] PIB\n[4] Pontos turisticos\n[5] Densidade populacional\n[6] PIB PER CAPITA\n");
    scanf("%d", &input);
    
    
    switch (input) {
            case 1:
                printf("Comparacao de Populacao:\n%s: %d vs %s: %d\n", cidade, populacao, cidade2, populacao2);
                resultado = (populacao > populacao2) ? 1 : 2;
                break;
            case 2:
                printf("Comparacao de Area:\n%s: %.2f km² vs %s: %.2f km²\n", cidade, area, cidade2, area2);
                resultado = (area > area2) ? 1 : 2;
                break;
            case 3:
                printf("Comparacao de PIB:\n%s: %.2f bilhoes vs %s: %.2f bilhoes\n", cidade, pib, cidade2, pib2);
                resultado = (pib > pib2) ? 1 : 2;
                break;
            case 4:
                printf("Comparacao de Pontos turisticos:\n%s: %d vs %s: %d\n", cidade, pontos, cidade2, pontos2);
                resultado = (pontos > pontos2) ? 1 : 2;
                break;
            case 5:
                printf("Comparacao de Densidade populacional:\n%s: %.2f hab/km² vs %s: %.2f hab/km²\n", cidade, densidadeperc, cidade2, densidadeperc2);
                resultado = (densidadeperc > densidadeperc) ? 1 : 2;
                break;
            case 6:
                printf("Comparacao de PIB per capita:\n%s: %.2f reais vs %s: %.2f reais\n", cidade, pib_per_cap, cidade2, pib_per_cap2);
                resultado = (pib_per_cap > pib_per_cap2) ? 1 : 2;
                break;
            default:
                printf("Opcao invalida! Nenhum vencedor.\n");
                return 0;
        }
    
        // Exibir resultado
        printf("Resultado: Carta %d (%s) venceu!\n", resultado, (resultado == 1) ? cidade : cidade2);
        
    
    } 
    
