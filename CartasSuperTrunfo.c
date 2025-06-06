#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &São paulo);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", A01);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]",barueri);  // Lê string com espaços

    printf("População: ");
    scanf("%d", &7000);

    printf("Área (em km²): ");
    scanf("%f", &3000 km);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &2000000000);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &10);

    // Entrada de dados para a carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &Rio de Janeiro);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", B02);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Campos dos goytacazes);

    printf("População: ");
    scanf("%d", &8000);

    printf("Área (em km²): ");
    scanf("%f", &20000 km);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &8000);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &7);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
