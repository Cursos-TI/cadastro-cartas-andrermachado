#include <stdio.h>

// Desafio Super Trunfo - Cidades (nível avançado)
// Leitura de duas cartas com comparação de dois atributos, menus dinâmicos e operador ternário.

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

    // Variáveis para os dois atributos escolhidos
    int opcao1, opcao2;
    const char *nome_atributo1 = "";
    const char *nome_atributo2 = "";
    double valor1_carta1 = 0.0, valor1_carta2 = 0.0;
    double valor2_carta1 = 0.0, valor2_carta2 = 0.0;
    int menor_vence1 = 0, menor_vence2 = 0; // 0 = maior vence, 1 = menor vence

    // Exibição - Carta 1
    printf("\n=== CARTAS CADASTRADAS ===\n");
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

    // Menu para escolher o primeiro atributo
    printf("\n=== ESCOLHA DO PRIMEIRO ATRIBUTO ===\n");
    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // Validação e processamento do primeiro atributo
    switch (opcao1) {
        case 1:
            nome_atributo1 = "Populacao";
            valor1_carta1 = (double)populacao1;
            valor1_carta2 = (double)populacao2;
            menor_vence1 = 0;
            break;
        case 2:
            nome_atributo1 = "Area";
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            menor_vence1 = 0;
            break;
        case 3:
            nome_atributo1 = "PIB";
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            menor_vence1 = 0;
            break;
        case 4:
            nome_atributo1 = "Numero de pontos turisticos";
            valor1_carta1 = (double)pontos_turisticos1;
            valor1_carta2 = (double)pontos_turisticos2;
            menor_vence1 = 0;
            break;
        case 5:
            nome_atributo1 = "Densidade demografica";
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            menor_vence1 = 1;
            break;
        default:
            printf("\nOpcao invalida. Execute o programa novamente e escolha uma opcao entre 1 e 5.\n");
            return 1;
    }

    // Menu dinâmico para escolher o segundo atributo (diferente do primeiro)
    printf("\n=== ESCOLHA DO SEGUNDO ATRIBUTO ===\n");
    printf("Escolha o segundo atributo para comparar as cartas (diferente do primeiro):\n");
    
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Numero de pontos turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade demografica\n");
    
    printf("Opcao: ");
    scanf("%d", &opcao2);

    // Validação: verificar se o segundo atributo é diferente do primeiro
    if (opcao2 == opcao1) {
        printf("\nErro: O segundo atributo deve ser diferente do primeiro! Execute o programa novamente.\n");
        return 1;
    }

    // Processamento do segundo atributo
    switch (opcao2) {
        case 1:
            nome_atributo2 = "Populacao";
            valor2_carta1 = (double)populacao1;
            valor2_carta2 = (double)populacao2;
            menor_vence2 = 0;
            break;
        case 2:
            nome_atributo2 = "Area";
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            menor_vence2 = 0;
            break;
        case 3:
            nome_atributo2 = "PIB";
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            menor_vence2 = 0;
            break;
        case 4:
            nome_atributo2 = "Numero de pontos turisticos";
            valor2_carta1 = (double)pontos_turisticos1;
            valor2_carta2 = (double)pontos_turisticos2;
            menor_vence2 = 0;
            break;
        case 5:
            nome_atributo2 = "Densidade demografica";
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            menor_vence2 = 1;
            break;
        default:
            printf("\nOpcao invalida. Execute o programa novamente e escolha uma opcao entre 1 e 5.\n");
            return 1;
    }

    // Calcular vencedor para cada atributo usando operador ternário
    int vencedor_atributo1 = (menor_vence1 == 1) ? 
        (valor1_carta1 < valor1_carta2 ? 1 : (valor1_carta1 > valor1_carta2 ? 2 : 0)) :
        (valor1_carta1 > valor1_carta2 ? 1 : (valor1_carta1 < valor1_carta2 ? 2 : 0));

    int vencedor_atributo2 = (menor_vence2 == 1) ? 
        (valor2_carta1 < valor2_carta2 ? 1 : (valor2_carta1 > valor2_carta2 ? 2 : 0)) :
        (valor2_carta1 > valor2_carta2 ? 1 : (valor2_carta1 < valor2_carta2 ? 2 : 0));

    // Calcular soma dos atributos e determinar o vencedor final
    double soma_carta1 = valor1_carta1 + valor2_carta1;
    double soma_carta2 = valor1_carta2 + valor2_carta2;
    int vencedor_final = (soma_carta1 > soma_carta2) ? 1 : (soma_carta1 < soma_carta2) ? 2 : 0;

    // Exibir resultado da comparação
    printf("\n=== RESULTADO DA COMPARACAO ===\n");
    printf("\nPrimeiro Atributo: %s\n", nome_atributo1);
    printf("  Carta 1 (%s): %.2f\n", pais1, valor1_carta1);
    printf("  Carta 2 (%s): %.2f\n", pais2, valor1_carta2);
    printf("  Vencedor: %s\n", vencedor_atributo1 == 1 ? pais1 : (vencedor_atributo1 == 2 ? pais2 : "Empate"));

    printf("\nSegundo Atributo: %s\n", nome_atributo2);
    printf("  Carta 1 (%s): %.2f\n", pais1, valor2_carta1);
    printf("  Carta 2 (%s): %.2f\n", pais2, valor2_carta2);
    printf("  Vencedor: %s\n", vencedor_atributo2 == 1 ? pais1 : (vencedor_atributo2 == 2 ? pais2 : "Empate"));

    printf("\n--- Soma dos Atributos ---\n");
    printf("  Carta 1 (%s): %.2f\n", pais1, soma_carta1);
    printf("  Carta 2 (%s): %.2f\n", pais2, soma_carta2);

    printf("\n=== RESULTADO FINAL ===\n");
    if (vencedor_final == 0) {
        printf("Empate! Ambas as cartas alcancaram a mesma soma.\n");
    } else if (vencedor_final == 1) {
        printf("Resultado: Carta 1 (%s) venceu a rodada!\n", pais1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu a rodada!\n", pais2);
    }

    return 0;
}
