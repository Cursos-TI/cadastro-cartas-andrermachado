#include <stdio.h>

// Desafio Super Trunfo - Cidades (nível intermediário)
// Leitura de duas cartas com cálculos de densidade populacional e PIB per capita.

int main(void) {

    // Variáveis para a carta 1
    int codigo1;
    char estado1[3];            // sigla do estado (ex: SP)
    char cidade1[50];
    long long populacao1;
    double area1;               // km^2
    double pib1;                // em bilhões de reais (entrada)
    int pontos_turisticos1;

    // Variáveis para a carta 2
    int codigo2;
    char estado2[3];
    char cidade2[50];
    long long populacao2;
    double area2;
    double pib2;                // em bilhões de reais (entrada)
    int pontos_turisticos2;

    // Leitura - Carta 1
    printf("Carta 1:\n");
    printf("Estado (sigla): \n");
    scanf("%2s", estado1);
    printf("Codigo da carta: \n");
    scanf("%d", &codigo1);
    printf("Nome da cidade: \n");
    scanf("%49s", cidade1);
    printf("Populacao (numero inteiro): \n");
    scanf("%lld", &populacao1);
    printf("Area (km2, decimal): \n");
    scanf("%lf", &area1);
    printf("PIB (em bilhoes de reais, ex: 699.28): \n");
    scanf("%lf", &pib1);
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Leitura - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado (sigla): \n");
    scanf("%2s", estado2);
    printf("Codigo da carta: \n");
    scanf("%d", &codigo2);
    printf("Nome da cidade: \n");
    scanf("%49s", cidade2);
    printf("Populacao (numero inteiro): \n");
    scanf("%lld", &populacao2);
    printf("Area (km2, decimal): \n");
    scanf("%lf", &area2);
    printf("PIB (em bilhoes de reais, ex: 300.50): \n");
    scanf("%lf", &pib2);
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos: densidade populacional e PIB per capita
    // Observação: o PIB foi lido em bilhões de reais, por isso multiplicamos por 1e9
    double densidade1 = (double)populacao1 / area1;
    double pib_percapita1 = (pib1 * 1e9) / (double)populacao1;

    double densidade2 = (double)populacao2 / area2;
    double pib_percapita2 = (pib2 * 1e9) / (double)populacao2;

    // Exibição - Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %d\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lld\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);

    // Exibição - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %d\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lld\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);

    return 0;
}
