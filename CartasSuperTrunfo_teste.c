#include <stdio.h>
  char estado1[25], codigo1[25], cidade1[25];
  int populacao1;
  int turismo1;
  float area1;
  float pib1;

  char estado2[25], codigo2[25], cidade2[25];
  int populacao2;
  int turismo2;
  float area2;
  float pib2;

  void entradadadoscarta01(){ // Área para entrada de dados
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

  void entradadadoscarta02(){ // Área para entrada de dados
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

   void exibirdadoscarta01(){ // Área para exibição dos dados da cidade da carta 01
    printf("** CARTA 01 **\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", turismo1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n\n", pib1);
   }

    void exibirdadoscarta02(){ // Área para exibição dos dados da cidade da carta 02
    printf("** CARTA 02 **\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", turismo2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n\n", pib2);
   }

int main() {
 
entradadadoscarta01();
entradadadoscarta02();

exibirdadoscarta01();
exibirdadoscarta02();

 

  


return 0;
} 
