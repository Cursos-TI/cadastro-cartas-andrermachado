#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Definição das variáveis
  int codigo_carta, codigo_carta1, populacao, populacao1, area, area1, PIB, PIB1;
  char cidade[20], cidade1[20], estado[3], estado1[3];

  // Entrada de dados
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

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta:\n");
    scanf("%d", &codigo_carta1);

    printf("Digite a cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area: \n");
    scanf("%d", &area1);

    printf("Digite o PIB1: \n");
    scanf("%d", &PIB1);
    
    printf("Digite o estado1: \n");
    scanf("%s", estado1);

    
    // exibição de dados

    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %d\n", area);
    printf("PIB: %d\n", PIB);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %d\n", area1);
    printf("PIB: %d\n", PIB1);
    printf("Estado: %s\n", estado1);


 

    // Área para definição das variáveis para armazenar as propriedades das cidades
  // Área para definição das variáveis para armazenar as propriedades das cidades


  

return 0;
} 
