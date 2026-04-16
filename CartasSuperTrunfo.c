#include <stdio.h>

int main(){

    //carta 1 
    
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //carta 2

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //entrada de dados carta 1

    printf("Digite o estado: ");
    scanf("%c", &estado1);
    printf("Digite o codigo: ");
    scanf("%s", codigo1);
    printf("Digite a cidade: ");
    scanf("%s", cidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o pib: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    //entrada de dados carta 2

    printf("Digite o estado: ");
    scanf("%c", &estado2);
    printf("Digite o codigo: ");
    scanf("%s", codigo2);
    printf("Digite a cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
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
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);

    //exibição carta 2

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    
