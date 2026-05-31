#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  int carta, codigo_carta, populacao, area, PIB, pontos;
    char cidade[20], estado[2];

        
    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo_carta);

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%d", &area);

    printf("Digite o PIB: \n");
    scanf("%d", &PIB);

    printf("Codigo da carta: %d\n", codigo_carta);
    scanf("%d", &codigo_carta);

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %d\n", area);
    printf("PIB: %d\n", PIB);
    printf("Estado: %s\n", estado);
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
