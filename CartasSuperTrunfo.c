#include <stdio.h>

// Desafio Super Trunfo - Países
int main() {
   // Declaração das variáveis da carta 1
   char pais1;                          // Letra identificadora da carta (A-H)
   char codigo1[5];                     // Código da carta, ex: A01
   char nomePais1[50];                  // Nome do país
   unsigned long int populacao1;        // População do país (tipo alterado para suportar valores grandes)
   float area1, pib1;                   // Área em km² e PIB em bilhões de reais
   int pontosTuristicos1;              // Número de pontos turísticos
   float densidade1, pibPerCapita1;     // Cálculos derivados
   float superPoder1;                   // Super Poder da carta

   // Declaração das variáveis da carta 2
   char pais2;
   char codigo2[5];
   char nomePais2[50];
   unsigned long int populacao2;
   float area2, pib2;
   int pontosTuristicos2;
   float densidade2, pibPerCapita2;
   float superPoder2;

   // ========================
   // Entrada de dados - Carta 1
   // ========================
   printf("Digite o pais da carta 1 (A-H): ");
   scanf(" %c", &pais1);

   printf("Digite o código da carta 1 (ex: A01): ");
   scanf("%s", codigo1);

   printf("Digite o nome do pais da carta 1: ");
   scanf(" %[^\n]", nomePais1); // Lê string com espaços

   printf("Digite a população do pais da carta 1: ");
   scanf("%lu", &populacao1); // %lu para unsigned long int

   printf("Digite a área do pais da carta 1 (em km²): ");
   scanf("%f", &area1);

   printf("Digite o PIB do pais da carta 1 (em bilhões de reais): ");
   scanf("%f", &pib1);

   printf("Digite o número de pontos turísticos do pais da carta 1: ");
   scanf("%d", &pontosTuristicos1);

   // ========================
   // Cálculos - Carta 1
   // ========================
   densidade1 = populacao1 / area1;
   pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1; // PIB convertido para reais
   superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

   // ========================
   // Entrada de dados - Carta 2
   // ========================
   printf("Digite o pais da carta 2 (A-H): ");
   scanf(" %c", &pais2);

   printf("Digite o código da carta 2 (ex: B02): ");
   scanf("%s", codigo2);

   printf("Digite o nome do pais da carta 2: ");
   scanf(" %[^\n]", nomePais2);

   printf("Digite a população do pais da carta 2: ");
   scanf("%lu", &populacao2);

   printf("Digite a área do pais da carta 2 (em km²): ");
   scanf("%f", &area2);

   printf("Digite o PIB do pais da carta 2 (em bilhões de reais): ");
   scanf("%f", &pib2);

   printf("Digite o número de pontos turísticos do pais da carta 2: ");
   scanf("%d", &pontosTuristicos2);

   // ========================
   // Cálculos - Carta 2
   // ========================
   densidade2 = populacao2 / area2;
   pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;
   superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

   // ========================
   // Exibição das Cartas
   // ========================
   printf("\n--- Carta 1 ---\n");
   printf("Pais: %c\nCódigo: %s\nNome: %s\n", pais1, codigo1, nomePais1);
   printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", populacao1, area1, pib1, pontosTuristicos1);
   printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", densidade1, pibPerCapita1, superPoder1);

   printf("\n--- Carta 2 ---\n");
   printf("Pais: %c\nCódigo: %s\nNome: %s\n", pais2, codigo2, nomePais2);
   printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
   printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", densidade2, pibPerCapita2, superPoder2);

   // ========================
   // Comparação entre Cartas
   // ========================
   printf("\n--- Comparação de Cartas ---\n");
   printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
   printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
   printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
   printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
   printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor densidade vence
   printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
   printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
   return 0;

  }