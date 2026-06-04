#include <stdio.h>

// Desafio Super Trunfo - Cidades (nível avançado)
// Leitura de duas cartas com cálculo de densidade, PIB per capita, Super Poder e comparações.

int main(void) {

    // Variáveis para a carta 1
    int codigo1;
    char estado1[3];            // sigla do estado (ex: SP)
    char cidade1[50];
    unsigned long int populacao1;
    double area1;               // km^2
    double pib1;                // em bilhões de reais (entrada)
    int pontos_turisticos1;

    // Variáveis para a carta 2
    int codigo2;
    char estado2[3];
    char cidade2[50];
    unsigned long int populacao2;
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
    scanf("%lu", &populacao1);
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
    scanf("%lu", &populacao2);
    printf("Area (km2, decimal): \n");
    scanf("%lf", &area2);
    printf("PIB (em bilhoes de reais, ex: 300.50): \n");
    scanf("%lf", &pib2);
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos: densidade populacional e PIB per capita
    double densidade1 = (double)populacao1 / area1;
    double pib_percapita1 = (pib1 * 1e9) / (double)populacao1;

    double densidade2 = (double)populacao2 / area2;
    double pib_percapita2 = (pib2 * 1e9) / (double)populacao2;

    // Cálculo do Super Poder: soma de todos os atributos numéricos, incluindo inverso da densidade
    float super_poder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontos_turisticos1 + (float)pib_percapita1 + (float)(1.0 / densidade1);
    float super_poder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontos_turisticos2 + (float)pib_percapita2 + (float)(1.0 / densidade2);

    // Exibição - Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %d\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %d\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações entre as cartas
    int popula_vence = populacao1 > populacao2;
    int area_vence = area1 > area2;
    int pib_vence = pib1 > pib2;
    int pontos_vence = pontos_turisticos1 > pontos_turisticos2;
    int densidade_vence = densidade1 < densidade2;
    int pib_percapita_vence = pib_percapita1 > pib_percapita2;
    int super_poder_vence = super_poder1 > super_poder2;

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", popula_vence);
    printf("Area: Carta 1 venceu (%d)\n", area_vence);
    printf("PIB: Carta 1 venceu (%d)\n", pib_vence);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos_vence);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_vence);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_percapita_vence);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_vence);

    return 0;
}
