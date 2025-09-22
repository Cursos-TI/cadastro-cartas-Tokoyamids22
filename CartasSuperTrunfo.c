#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades


    // Carta 1
    char estado1[20], codigo1[10], nome1[30];
    int populacao1, pontos1;
    float area1, pib1;

    // Carta 2
    char estado2[20], codigo2[10], nome2[30];
    int populacao2, pontos2;
    float area2, pib2;

  // Área para entrada de dados

    printf("=== Bem vindo ao Super Trunfo de Países! ===\n");
    printf("=== Criando a Primeira Carta ===\n");

    printf("Digite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta (Ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área por km² da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);

    printf("\n=== Criando a Segunda Carta ===\n");

    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta (Ex: B02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área por km² da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade

  // Resultado final das duas cartas
    printf("\n================ RESULTADO FINAL ================\n");

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

return 0;
} 
