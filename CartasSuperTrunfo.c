#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

char estado, estado2, codigo[20], codigo2[20], nome_cidade[20],
nome_cidade2[20];
int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
float area, area2, pib, pib2, densidade, densidade2, pibpc, pibpc2;

int bilhao = 1000000000;

int main() {
  // Carta 1
  printf("-=-=-=-=CARTA 1=-=-=-=-\n");
  printf("Digite o estado: ");
  scanf("%s", &estado);
  printf("Digite o Cdigo da carta: ");
  scanf("%s", codigo);
  printf("Digite o nome da cidade: ");
  getchar(); // Usando isso para evitar que a linha pule para o final do
  // programa
  fgets(nome_cidade, 20,
        stdin); // fgets ao inves de scanf, para capturar espacos
  printf("Digite o total da populacao: ");
  scanf("%d", &populacao);
  getchar();
  printf("Digite a Area total em km2: ");
  scanf("%f", &area);
  printf("Digite o PIB: ");
  scanf("%f", &pib);
  printf("Digite o total de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos);
  getchar();
  densidade = populacao/area;
  pibpc = (pib * bilhao)/populacao;
  // repete
  printf("-=-=-=-=CARTA 2=-=-=-=-\n"); printf("Digite o estado: ");
  scanf("%s", &estado2);
  printf("Digite o Cdigo da carta: ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  getchar();
  fgets(nome_cidade2, 20, stdin);
  printf("Digite o total da populacao: ");
  scanf("%d", &populacao2);
  getchar();
  printf("Digite a Area total em km2: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o total de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos2);
  getchar();

  printf("Carta 1\n");
  printf("ESTADO: %s\n", &estado);
  printf("CODIGO: %s\n", codigo);
  printf("NOME DA CIDADE: %s", nome_cidade);
  printf("POPULACAO: %d\n", populacao);
  printf("AREA: %.2f km2\n", area);
  printf("PIB: %.2f bilhoes de reais\n", pib);
  printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontos_turisticos);
  printf("DENSIDADE POPULACIONAL: %.2f\n", densidade);
  printf("PIB PER CAPITA: %.2f\n", pibpc);
  printf("\n");
  printf("Carta 2\n");
  printf("ESTADO: %s\n", &estado2);
  printf("CODIGO: %s\n", codigo2);
  printf("NOME DA CIDADE: %s", nome_cidade2);
  printf("POPULACAO: %d\n", populacao2);
  printf("AREA: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontos_turisticos2);
}
