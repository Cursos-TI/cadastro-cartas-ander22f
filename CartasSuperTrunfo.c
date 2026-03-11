#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados 
//e printf para exibir as informações. 

  char estado1[25], codigo1[25], cidade1[25]; // Variáveis para armazenar os dados da carta 01
  int populacao1;
  int turismo1;
  float area1;
  float pib1;
  float pibpc01;
  float densidadep01;

  char estado2[25], codigo2[25], cidade2[25]; // Variáveis para armazenar os dados da carta 02
  int populacao2;
  int turismo2;
  float area2;
  float pib2;
  float pibpc02;
  float densidadep02; 

  void entradadadoscarta01(){ // Área para entrada de dados da carta 01
    printf("** CARTA 01 **\n");
    printf("Digite o estado:\n"); 
    scanf("%s", &estado1);

    printf("Digite o código da carta: (Estado + numero da carta)\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turismo1);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);
  }

  void entradadadoscarta02(){ // Área para entrada de dados da carta 02
    printf("** CARTA 02 **\n");
    printf("Digite o estado:\n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: (Estado + numero da carta)\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turismo2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);
  }

 void calculopibpc01(){ // Área para cálculo do PIB per capita da carta 01
    pibpc01 = (float) pib1*1000000000 / populacao1;
 }

  void calculopibpc02(){ // Área para cálculo do PIB per capita da carta 02
    pibpc02 = (float) pib2*1000000000 / populacao2;
 }

void calculodensidadep01(){ // Área para cálculo da densidade populacional da carta 01
    densidadep01 = (float) populacao1 / area1;
}

void calculodensidadep02(){ // Área para cálculo da densidade populacional da carta 02
    densidadep02 = (float) populacao2 / area2;
}

   void exibirdadoscarta01(){ // Área para exibição dos dados da carta 01
    printf("** CARTA 01 **\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", turismo1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep01);
    printf("PIB per capita: %.2f reais\n\n", pibpc01);
   }

    void exibirdadoscarta02(){ // Área para exibição dos dados da carta 02
    printf("** CARTA 02 **\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", turismo2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep02);
    printf("PIB per capita: %.2f reais\n\n", pibpc02);
   }

int main() {
 
entradadadoscarta01(); // Função para entrada de dados da carta 01
calculopibpc01(); // Função para cálculo do PIB per capita da carta 01

entradadadoscarta02(); // Função para entrada de dados da carta 02


calculopibpc02(); // Função para cálculo do PIB per capita da carta 02

calculodensidadep01(); // Função para cálculo da densidade populacional da carta 01
calculodensidadep02(); // Função para cálculo da densidade populacional da carta 02

exibirdadoscarta01(); // Função para exibição dos dados da carta 01
exibirdadoscarta02(); // Função para exibição dos dados da carta 02

 

  


return 0;
} 
