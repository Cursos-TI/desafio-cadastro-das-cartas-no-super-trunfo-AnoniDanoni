#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.




int main(){

    int carta = 1;
    char estado = 'A';
    char codigo[20] = "A01";
    char cidade[50];
    int populacao; 
    float area;
    float pib;
    int pontos;

    printf("Qual nome do seu estado:");
    scanf("%s", &cidade);
    printf("Quantos habitantes tem sua cidade: \n");
    scanf("%d", &populacao);
    printf("qual a area(km) da sua cidade: \n");
    scanf("%f", &area);
    printf("qual o PIB da sua cidade: \n");
    scanf("%f", &pib);
    printf("Quantos pontos turisticos existem na sua cidade: \n");
    scanf("%d", &pontos); 
    printf("Carta: %d \nEstado: %c \nCodigo: %s\nCidade: %s \nPopulacao: %d \nArea: %.2fkm \nPIB: %.2fbilhões de reais \nPontos turisticos: %d\n\n", carta, estado, codigo, cidade, populacao, area, pib, pontos);


    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[20] = "B02";
    char cidade2[50];
    int populacao2; 
    float area2;
    float pib2;
    int pontos2;


    printf("Qual nome do seu estado:");
    scanf("%s", &cidade2);
    printf("Quantos habitantes tem sua cidade: \n");
    scanf("%d", &populacao2);
    printf("qual a area(km) da sua cidade: \n");
    scanf("%f", &area2);
    printf("qual o PIB da sua cidade: \n");
    scanf("%f", &pib2);
    printf("Quantos pontos turisticos existem na sua cidade: \n");
    scanf("%d", &pontos2);
    printf("Carta: %d \nEstado: %c \nCodigo: %s\nCidade: %s \nPopulacao: %d \nArea: %.2fkm \nPIB: %.2fbilhões de reais \nPontos turisticos: %d", carta2, estado2, codigo2, populacao2, area2, pib2, pontos2);
    
    return 0;
}