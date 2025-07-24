#include <stdio.h>

float calcularDensidade(int popolacao, float area)
{
    float retorno = popolacao / area;
    return retorno;
}

int main()
{

    // Atributos da cidade 1
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;

    // Atributos da cidade 2
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;

    // Entrada de dados - cidade 1
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²) da cidade 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões) da cidade 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados - cidade 2
    printf("\nDigite a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²) da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões) da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional1 = calcularDensidade(populacao1, area1);
    densidadePopulacional2 = calcularDensidade(populacao2, area2);

    // Exibição dos dados
    printf("\n========= CARTA DA CIDADE 1 =========\n");
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade: %f\n", densidadePopulacional1);

    printf("\n========= CARTA DA CIDADE 2 =========\n");
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade: %f\n", densidadePopulacional2);

    return 0;
}
