#include <stdio.h>

int main() {
    printf("Super Trunfo\n");

   
    char estado1[127];  
    char carta1[127];   
    char cidade1[127];  
    int populacao1;     
    float area1;        
    float pib1;         
    int npt1;  // Número de pontos turísticos  
    float densidade1, percapita1; 
    
    
    // Carta 1

    printf("Carta 1:\n");

    printf("Sua carta é de qual estado brasileiro?: ");
    scanf("%s", estado1); 

    printf("Qual o código da sua carta?: ");
    scanf("%s", carta1);   

    printf("Qual o nome da sua cidade?: ");
    scanf("%s", cidade1);

    printf("Qual a população da cidade?: ");
    scanf("%d", &populacao1);  

    printf("Qual a área aproximada desta cidade?: ");
    scanf("%f", &area1);  

    printf("Qual o PIB respectivo desta cidade?: ");
    scanf("%f", &pib1);   

    printf("Quantos pontos turísticos há nesta cidade?: ");
    scanf("%d", &npt1);   

    //calculo
    densidade1 = (float)populacao1 / area1;
    percapita1 = pib1 / populacao1;

    //Resultado

    printf("\n------------------------------------------------\n");
    printf("Resumo da Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);  
    printf("PIB: R$ %.2f bilhões\n", pib1);  
    printf("Pontos turísticos: %d\n", npt1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", percapita1);
    printf("------------------------------------------------\n");
    printf("\n");


    // Carta 2


    char estado2[127];  
    char carta2[127];   
    char cidade2[127];  
    int populacao2;     
    float area2;        
    float pib2;         
    int npt2;  // Número de pontos turísticos  
    float densidade2, percapita2; 
    
    

    printf("Carta 2:\n");

    printf("Sua carta é de qual estado brasileiro?: ");
    scanf("%s", estado2); 

    printf("Qual o código da sua carta?: ");
    scanf("%s", carta2);   

    printf("Qual o nome da sua cidade?: ");
    scanf("%s", cidade2);

    printf("Qual a população da cidade?: ");
    scanf("%d", &populacao2);  

    printf("Qual a área aproximada desta cidade?: ");
    scanf("%f", &area2);  

    printf("Qual o PIB respectivo desta cidade?: ");
    scanf("%f", &pib2);   

    printf("Quantos pontos turísticos há nesta cidade?: ");
    scanf("%d", &npt2);   

    // Calculo
    densidade2 = (float)populacao2 / area2;
    percapita2 = pib2 / populacao2;
    

    //Resultado
    printf("\n------------------------------------------------\n");
    printf("Resumo da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);  
    printf("PIB: R$ %.2f bilhões\n", pib2);  
    printf("Pontos turísticos: %d\n", npt2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", percapita2);
    printf("------------------------------------------------\n");

    return 0;
}
