#include <stdio.h>


    int main(){
    
        int carta = 1;
        char estado = 'A';
        char codigo[20] = "A01";
        char cidade[50] = "Sao paulo";
        int populacao;
        float area;
        float pib;
        int pontos;
        
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
        char codigo2[20] = "B02";
        char cidade2[50] = "Rio de Janeiro";
        int populacao2; 
        int pontos2;
        float area2;
        float pib2;
        
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
        
    
        int superpoder = (int)pib + area + pontos + populacao + pib_per_cap - densidadeperc;
        int superpoder2 = (int)pib2 + area2 + pontos2 + populacao2 + pib_per_cap2 - densidadeperc2;
        
        int comparacao_populacao = (populacao < populacao2);
        int comparacao_turistico = (pontos < pontos2);
        int comparacao_area = (area < area2);
        int comparacao_pib = (pib < pib2);
        int comparacao_poder = (superpoder < superpoder2);
        int comparacao_pib_cap = (pib_per_cap < pib_per_cap2);
        int comparacao_densidade = (densidadeperc > densidadeperc2);
        
        int resultadoa = comparacao_populacao + 1;
        int resultadob = comparacao_area + 1;
        int resultadoc = comparacao_pib + 1;
        int resultadod = comparacao_turistico + 1;
        int resultadoe = comparacao_densidade + 1;
        int resultadof = comparacao_pib_cap + 1;
        int resultadog = comparacao_poder + 1;
    
    
        printf("Comparacao de cartas:\n");
        printf("Populacao: Carta %d venceu\n", resultadoa);
        printf("Area: Carta %d venceu\n", resultadob);
        printf("PIB: Carta %d venceu\n", resultadoc);
        printf("Pontos turisticos: Carta %d venceu\n", resultadod);
        printf("Densidade Populacional: Carta %d venceu\n", resultadoe);
        printf("PIB per capita: Carta %d venceu\n", resultadof);
        printf("Super poder: Carta %d venceu\n", resultadog);
    
    
            
    
        return 0;
    }