#include <stdio.h>

int main(){
    char carta[5];
    int numero; 
    char pais[10];
    char estado[10];
    char cidade[10];
    float populacao;
    float area;
    float pib;
    float turisticos;

    printf("Digite sua carta (letra e número): \n");
    scanf("%c %d", &carta, &numero);
    getchar();

    printf("Digite seu pais: \n");
    scanf("%c", pais);
    getchar();

    printf("Digite seu estado: \n");
    scanf("%s", estado);
    getchar();

    printf("Digite sua cidade: \n");
    scanf("%s", cidade);
    getchar();

    printf("Digite sua populacao: \n");
    scanf("%f", &populacao);
    getchar();

    printf("Digite sua area em km²: \n");
    scanf("%f", area);
    getchar();

    printf("Digite seu pib: \n");
    scanf("%f", pib);
    getchar();

    printf("Digite seus pontos turisticos: \n");
    scanf("%d", turisticos);
    getchar();

    printf("Carta 01: %c%d\n", carta, numero);
    printf("Pais: %c\n", pais);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %f\n", turisticos);

    return 0;


}