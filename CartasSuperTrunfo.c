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
  // Área para entrada de dados
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

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
return 0;
} 
