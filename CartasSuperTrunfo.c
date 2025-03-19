#include <stdio.h>

int main() {
    printf("Super Trunfo\n");

    char estado1[127];  
    char carta1[127];   
    char cidade1[126];  
    int populacao1;     
    float area1;        
    float pib1;         
    int npt1;           // Número de pontos turísticos

    printf("Carta 1:\n");

    printf("Sua carta é de qual estado Brasileiro?:\n");
    scanf("%s", estado1); 

    printf("Qual o código da sua carta?:\n");
    scanf("%s", carta1);   

    printf("Qual o nome da sua cidade?:\n");
    scanf("%s", cidade1);

    printf("Qual a população da cidade?:\n");
    scanf("%d", &populacao1);  

    printf("Qual a área aproximada desta cidade?:\n");
    scanf("%f", &area1);  

    printf("Qual o PIB respectivo desta cidade?:\n");
    scanf("%f", &pib1);   

    printf("À quantos pontos turísticos nesta cidade?:\n");
    scanf("%d", &npt1);   

    
    printf("Seu estado é: %s\n", estado1);
    printf("O código da sua carta é: %s\n", carta1);
    printf("O nome da sua cidade é: %s\n", cidade1);
    printf("A população da cidade é: %d\n", populacao1);
    printf("A área aproximada desta cidade é: %f\n", area1);  
    printf("O PIB respectivo desta cidade é: %f\n", pib1);  
    printf("A quantidade de pontos turísticos nesta cidade é: %d\n", npt1);


    char estado2[127];  
    char carta2[127];   
    char cidade2[126];  
    int populacao2;     
    float area2;        
    float pib2;         
    int npt2;           // Número de pontos turísticos

    printf("Carta 2:\n");

    printf("Sua carta é de qual estado Brasileiro?:\n");
    scanf("%s", estado2); 

    printf("Qual o código da sua carta?:\n");
    scanf("%s", carta2);   

    printf("Qual o nome da sua cidade?:\n");
    scanf("%s", cidade2);

    printf("Qual a população da cidade?:\n");
    scanf("%d", &populacao2);  

    printf("Qual a área aproximada desta cidade?:\n");
    scanf("%f", &area2);  

    printf("Qual o PIB respectivo desta cidade?:\n");
    scanf("%f", &pib2);   

    printf("À quantos pontos turísticos nesta cidade?:\n");
    scanf("%d", &npt2);   

    
    printf("Seu estado é: %s\n", estado2);
    printf("O código da sua carta é: %s\n", carta2);
    printf("O nome da sua cidade é: %s\n", cidade2);
    printf("A população da cidade é: %d\n", populacao2);
    printf("A área aproximada desta cidade é: %f\n", area2);  
    printf("O PIB respectivo desta cidade é: %f\n", pib2);  
    printf("A quantidade de pontos turísticos nesta cidade é: %d\n", npt2);

    return 0;
}

