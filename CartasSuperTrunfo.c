#include <stdio.h>

int main() {
    char estado[30], estado2[30];
    char codigocarta[10], codigocarta2[10];
    char ncidade[30], ncidade2[30];
    
    int populacao, npontosturisticos, pop2, npt2;
    float area, area2, pib2, pib;

    // Primeira carta
    printf("======Dados referentes à primeira carta======\n");
    printf("Digite o nome do primeiro estado:\n");
    scanf("%s", estado);

    printf("Digite o código da primeira carta:\n");
    scanf("%s", codigocarta);

    printf("Digite o nome da primeira cidade:\n");
    scanf("%s", ncidade);

    printf("Digite a população da primeira cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos da primeira cidade:\n");
    scanf("%d", &npontosturisticos);

    printf("Digite a área da primeira cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB da primeira cidade:\n");
    scanf("%f", &pib);

    // Segunda carta
    printf("\n======Dados referentes à segunda carta======\n");
    printf("Digite o nome do segundo estado:\n");
    scanf("%s", estado2);

    printf("Digite o código da segunda carta:\n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da segunda cidade:\n");
    scanf("%s", ncidade2);

    printf("Digite a população da segunda cidade:\n");
    scanf("%d", &pop2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade:\n");
    scanf("%d", &npt2);

    printf("Digite a área da segunda cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade:\n");
    scanf("%f", &pib2);

    // Exibição dos dados
    printf("\n======Dados fornecidos ao programa======\n");

    printf("\n======Primeira carta======\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigocarta);
    printf("Cidade: %s\n", ncidade);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", npontosturisticos);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);

    printf("\n======Segunda carta======\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", ncidade2);
    printf("População: %d\n", pop2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);

    return 0;
}
