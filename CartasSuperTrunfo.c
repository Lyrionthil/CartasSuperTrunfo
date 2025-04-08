#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades dos paises
  // Declaração das variáveis para a primeira carta
  char pais1;
  char codigo1[5];
  char nomePais1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  // Nível Aventureiro - Calculando Densidade Populacional e PIB per Capita
  float densidade1;
  float pibPerCapita1;
  
  // Entrada de dados
  // Leitura dos dados da primeira carta
  printf("Digite o pais da carta 1 (A-H): ");
scanf(" %c", &pais1);

printf("Digite o código da carta 1 (ex: A01): ");
scanf("%s", codigo1);

printf("Digite o nome do pais da carta 1: ");
scanf(" %[^\n]", nomePais1);

printf("Digite a população do pais da carta 1: ");
scanf("%d", &populacao1);

printf("Digite a área do pais da carta 1 (em km²): ");
scanf("%f", &area1);

printf("Digite o PIB do pais da carta 1 (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos do pais da carta 1: ");
scanf("%d", &pontosTuristicos1);

// Cálculos da carta 1
densidade1 = populacao1 / area1;
pibPerCapita1 = (pib1 * 1000000000) / populacao1;

  // Exibição dos dados do Pais1
  printf("\nCarta 1:\n");
  printf("pais: %c\n", pais1);
  printf("Código: %s\n", codigo1);
  printf("Nome do Pais: %s\n", nomePais1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

// Declaração das variáveis para a segunda carta
char pais2;
char codigo2[5];
char nomePais2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

// Leitura dos dados da segunda carta
printf("Digite o pais da carta 2 (A-H): ");
scanf(" %c", &pais2);
printf("Digite o código da carta 2 (ex: B02): ");
scanf("%s", codigo2);
printf("Digite o nome do pais da carta 2: ");
scanf(" %[^\n]", nomePais2);
printf("Digite a população do pais da carta 2: ");
scanf("%d", &populacao2);
printf("Digite a área do pais da carta 2 (em km²): ");
scanf("%f", &area2);
printf("Digite o PIB do pais da carta 2 (em bilhões de reais): ");
scanf("%f", &pib2);
printf("Digite o número de pontos turísticos do pais da carta 2: ");
scanf("%d", &pontosTuristicos2);

// Área para exibição dos dados do Pais2
printf("\nCarta 2:\n");
printf("pais: %c\n", pais2);
printf("Código: %s\n", codigo2);
printf("Nome do Pais: %s\n", nomePais2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
} 
