#include <stdio.h>

int main() {
    printf("Super Trunfo\n");

    // Dados da carta 1
    char estado1[127], carta1[127], cidade1[127];
    unsigned long int populacao1;
    float area1, pib1;
    int npt1;
    float densidade1, percapita1, superPoder1;

    // Entrada da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: ");
    scanf(" %s", estado1);
    printf("Código da carta: ");
    scanf(" %s", carta1);
    printf("Nome da cidade: ");
    scanf(" %s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em reais): ");
    scanf("%f", &pib1);  // Agora o valor inserido deve estar em reais
    printf("Pontos turísticos: ");
    scanf("%d", &npt1);

    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + npt1 + percapita1 + (1.0 / densidade1);

    // Saída carta 1
    printf("\nResumo da Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", npt1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", percapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Dados da carta 2
    char estado2[127], carta2[127], cidade2[127];
    unsigned long int populacao2;
    float area2, pib2;
    int npt2;
    float densidade2, percapita2, superPoder2;

    // Entrada da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %s", estado2);
    printf("Código da carta: ");
    scanf(" %s", carta2);
    printf("Nome da cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em reais): ");
    scanf("%f", &pib2);  // Agora o valor inserido deve estar em reais
    printf("Pontos turísticos: ");
    scanf("%d", &npt2);

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + npt2 + percapita2 + (1.0 / densidade2);

    // Saída carta 2
    printf("\nResumo da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", percapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n\nComparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", npt1 > npt2 ? 1 : 2, npt1 > npt2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", percapita1 > percapita2 ? 1 : 2, percapita1 > percapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}
