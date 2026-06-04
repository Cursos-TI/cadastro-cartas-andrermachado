#include <stdio.h>

// Desafio Super Trunfo - Cidades (nível intermediário)
// Leitura de duas cartas com cálculo de densidade, PIB per capita e comparação interativa.

int main(void) {

    // Variáveis para a carta 1
    int codigo1;
    char pais1[50];
    char estado1[3];            // sigla do estado (ex: SP)
    char cidade1[50];
    unsigned long int populacao1;
    double area1;               // km^2
    double pib1;                // em bilhões de reais (entrada)
    int pontos_turisticos1;

    // Variáveis para a carta 2
    int codigo2;
    char pais2[50];
    char estado2[3];
    char cidade2[50];
    unsigned long int populacao2;
    double area2;
    double pib2;                // em bilhões de reais (entrada)
    int pontos_turisticos2;

    // Leitura - Carta 1
    printf("Carta 1:\n");
    printf("Nome do pais: ");
    scanf(" %49[^\n]", pais1);
    printf("Estado (sigla): ");
    scanf(" %2s", estado1);
    printf("Codigo da carta: ");
    scanf("%d", &codigo1);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("Populacao (numero inteiro): ");
    scanf("%lu", &populacao1);
    printf("Area (km2, decimal): ");
    scanf("%lf", &area1);
    printf("PIB (em bilhoes de reais, ex: 699.28): ");
    scanf("%lf", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura - Carta 2
    printf("\nCarta 2:\n");
    printf("Nome do pais: ");
    scanf(" %49[^\n]", pais2);
    printf("Estado (sigla): ");
    scanf(" %2s", estado2);
    printf("Codigo da carta: ");
    scanf("%d", &codigo2);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Populacao (numero inteiro): ");
    scanf("%lu", &populacao2);
    printf("Area (km2, decimal): ");
    scanf("%lf", &area2);
    printf("PIB (em bilhoes de reais, ex: 300.50): ");
    scanf("%lf", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos: densidade populacional e PIB per capita
    double densidade1 = (double)populacao1 / area1;
    double pib_percapita1 = (pib1 * 1e9) / (double)populacao1;

    double densidade2 = (double)populacao2 / area2;
    double pib_percapita2 = (pib2 * 1e9) / (double)populacao2;

    // Menu interativo para escolher o atributo de comparação
    int opcao;
    const char *nome_atributo = "";
    double valor_atributo1 = 0.0;
    double valor_atributo2 = 0.0;
    int menor_valor_e_vencedor = 0; // 0 = maior vence, 1 = menor vence

    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            nome_atributo = "Populacao";
            valor_atributo1 = (double)populacao1;
            valor_atributo2 = (double)populacao2;
            break;
        case 2:
            nome_atributo = "Area";
            valor_atributo1 = area1;
            valor_atributo2 = area2;
            break;
        case 3:
            nome_atributo = "PIB";
            valor_atributo1 = pib1;
            valor_atributo2 = pib2;
            break;
        case 4:
            nome_atributo = "Numero de pontos turisticos";
            valor_atributo1 = (double)pontos_turisticos1;
            valor_atributo2 = (double)pontos_turisticos2;
            break;
        case 5:
            nome_atributo = "Densidade demografica";
            valor_atributo1 = densidade1;
            valor_atributo2 = densidade2;
            menor_valor_e_vencedor = 1;
            break;
        default:
            printf("\nOpcao invalida. Execute o programa novamente e escolha uma opcao entre 1 e 5.\n");
            return 1;
    }

    // Cálculo do Super Poder: soma de todos os atributos numéricos, incluindo inverso da densidade
    float super_poder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontos_turisticos1 + (float)pib_percapita1 + (float)(1.0 / densidade1);
    float super_poder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontos_turisticos2 + (float)pib_percapita2 + (float)(1.0 / densidade2);

    // Exibição - Carta 1
    printf("\nCarta 1:\n");
    printf("Pais: %s\n", pais1);
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
    printf("Pais: %s\n", pais2);
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

    // Exibir resultado da comparação do atributo escolhido
    printf("\nComparacao de cartas (Atributo: %s):\n", nome_atributo);
    printf("Carta 1 - %s: %.2f\n", pais1, valor_atributo1);
    printf("Carta 2 - %s: %.2f\n", pais2, valor_atributo2);

    if (valor_atributo1 == valor_atributo2) {
        printf("Resultado: Empate!\n");
    } else {
        if (menor_valor_e_vencedor) {
            if (valor_atributo1 < valor_atributo2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            }
        } else {
            if (valor_atributo1 > valor_atributo2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            }
        }
    }

    return 0;
}
