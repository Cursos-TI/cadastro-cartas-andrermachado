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

    // Escolha do atributo para comparação (feito diretamente no código)
    // 1 = População, 2 = Área, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per capita
    const int atributo_comparacao = 1;
    const char *nome_atributo;
    double valor_atributo1;
    double valor_atributo2;
    int menor_valor_e_vencedor = 0; // 0 = maior vence, 1 = menor vence

    if (atributo_comparacao == 1) {
        nome_atributo = "Populacao";
        valor_atributo1 = (double)populacao1;
        valor_atributo2 = (double)populacao2;
    } else if (atributo_comparacao == 2) {
        nome_atributo = "Area";
        valor_atributo1 = area1;
        valor_atributo2 = area2;
    } else if (atributo_comparacao == 3) {
        nome_atributo = "PIB";
        valor_atributo1 = pib1;
        valor_atributo2 = pib2;
    } else if (atributo_comparacao == 4) {
        nome_atributo = "Densidade Populacional";
        valor_atributo1 = densidade1;
        valor_atributo2 = densidade2;
        menor_valor_e_vencedor = 1;
    } else {
        nome_atributo = "PIB per Capita";
        valor_atributo1 = pib_percapita1;
        valor_atributo2 = pib_percapita2;
    }

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

    // Comparação de cartas usando apenas um atributo numérico escolhido no código
    printf("\nComparacao de cartas (Atributo: %s):\n", nome_atributo);
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, valor_atributo1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, valor_atributo2);

    if (valor_atributo1 == valor_atributo2) {
        printf("Resultado: Empate! Ambas as cartas tem o mesmo valor de %s.\n", nome_atributo);
    } else if ((menor_valor_e_vencedor == 1 && valor_atributo1 < valor_atributo2) ||
               (menor_valor_e_vencedor == 0 && valor_atributo1 > valor_atributo2)) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
