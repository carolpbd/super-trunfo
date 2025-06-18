#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1;
    char codigo1[4]; // Código da carta 1
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Entrada da carta 1
    printf("Cadastro da Carta 01:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Qual é o código da carta? (Ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);
    
    printf("Qual a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Informe o PIB (em bilhões de R$): ");
    scanf("%f", &pib1);
    
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Mostrar carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Entrada da carta 2
    printf("\nCadastro da Carta 2:\n");
    
    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Informe o código da carta (Ex: A01): ");
    scanf("%s", codigo2);
    
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    
    printf("Informe a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Mostrar carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
