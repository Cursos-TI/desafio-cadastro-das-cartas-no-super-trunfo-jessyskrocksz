#include <stdio.h>

int main(){
    char carta[2];
    int numero; 
    char pais[30];
    char estado[30];
    char cidade[30];
    float populacao;
    float area;
    float pib;
    int turisticos;

    printf("Digite sua Primeira Carta (letra e número): \n");
    scanf(" %c %d", &carta[0], &numero);
    
    getchar();

    printf("Digite seu País: \n");
    scanf(" %[^\n]", pais);
    
    printf("Digite seu Estado: \n");
    scanf(" %[^\n]", estado);
    
    printf("Digite sua Cidade: \n");
    scanf(" %[^\n]", cidade);
    
    printf("Digite sua População: \n");
    scanf("%f", &populacao);
   
    printf("Digite sua Área em km²: \n");
    scanf("%f", &area);
    
    printf("Digite seu PIB: \n");
    scanf("%f", &pib);
   
    printf("Digite seus Pontos Turísticos: \n");
    scanf("%d", &turisticos);
    
    printf("Carta 01: %c%d\n", carta[0], numero);
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", turisticos);

    printf("Digite a Segunda Carta (letra e número): \n");
    scanf(" %c %d", &carta[1], &numero);

    getchar();

    printf("Digite seu País: \n");
    scanf(" %[^\n]", pais);

    printf("Digite seu Estado: \n");
    scanf(" %[^\n]", estado);

    printf("Digite sua Cidade: \n");
    scanf(" %[^\n]", cidade);

    printf("Digite sua População: \n");
    scanf("%f", &populacao);

    printf("Digite sua Área em km²: \n");
    scanf("%f", &area);

    printf("Digite seu PIB: \n");
    scanf("%f", &pib);

    printf("Digite seus Pontos Turísticos: \n");
    scanf("%d", &turisticos);

    printf("Carta 02: %c%d\n", carta[1], numero);
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", turisticos);

    return 0;


}