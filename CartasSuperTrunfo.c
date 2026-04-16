#include <stdio.h>

int main(){

    //carta 1 
    
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //carta 2

    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //entrada de dados carta 1

    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo: ");
    scanf("%s", codigo1);
    printf("Digite a cidade: ");
    scanf("%s", cidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o pib: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    //entrada de dados carta 2

    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo: ");
    scanf("%s", codigo2);
    printf("Digite a cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o pib: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    //exibição carta 1

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);

    //exibição carta 2

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    //Calcular a Densidade Populacional

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    //exibição da densidade populacional

    printf("Densidade populacional: %.2f\n", densidade1);
    printf("Densidade populacional: %.2f\n", densidade2); 

    //Calcular o PIB per Capita

    float pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;

    //exibição do PIB per Capita

    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("PIB per Capita: %.2f\n", pib_per_capita2); 


    //super poder
    
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pib_per_capita1 + (1.0f / densidade1);
    float super_poder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pib_per_capita2 + (1.0f / densidade2);

    //exibição do super poder

    printf("Super poder: %.2f\n", super_poder1);
    printf("Super poder: %.2f\n", super_poder2);

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}

