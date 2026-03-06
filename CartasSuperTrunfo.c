#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[25], codigo[25], cidade[25];
  int populacao;
  int turismo;
  float area;
  float pib;

  // Área para entrada de dados
  printf("Digite o estado:\n");
  scanf("%s", &estado);

  printf("Digite o código da carta: (Estado + numero da carta)\n");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade:\n");
  scanf("%s", &cidade);

  printf("Digite a população:\n");
  scanf("%d", &populacao);

  printf("Digite a quantidade de pontos turisticos:\n");
  scanf("%d", &turismo);

  printf("Digite a área (em km²):\n");
  scanf("%f", &area);

  printf("Digite o PIB (em bilhões de reais):\n");
  scanf("%f", &pib);

  // Área para exibição dos dados da cidade
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Pontos Turísticos: %d\n", turismo);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);


return 0;
} 
