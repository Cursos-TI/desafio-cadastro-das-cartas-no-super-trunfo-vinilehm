#include <stdio.h>

int main(){

    printf("Super Trunfo\n");

    char estado1;
    char carta1[30];
    char cidade1[5];
    int populacao1;
    float area1;
    float pib1;
    int npt1; 

    printf("Carta 1:\n");

    printf("Sua carta é de qual estado Brasileiro?:\n");
    scanf("%s", &estado1);

    printf("Qual o código da sua carta?:\n");
    scanf("%s", &carta1);

    printf("Qual o nome da sua cidade?:\n");
    scanf("%s", &cidade1);

    printf("Qual a população da cidade?:\n");
    scanf("%f", &populacao1);

    printf("Qual a área aproximada desta cidade?:\n");
    scanf("%f", &area1);

    printf("Qual o PIB respectivo desta cidade?:\n");
    scanf("%f", &pib1);

    printf("À quantos pontos turísticos nesta cidade?:\n");
    scanf("%f", &npt1);











    return 0;
}
