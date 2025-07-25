#include <stdio.h>

float calcularDensidade(int popolacao, float area)
{
    float retorno = popolacao / area;
    return retorno;
}

float calcularSuperPoder(unsigned int populacao, float area, float pib, int pontosTuristicos, float densidade)
{
    return populacao + area + pib + pontosTuristicos + (1.0 / densidade);
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

    float superPoder1 = calcularSuperPoder(populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1);
    float superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2);

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

    printf("\n========= RESULTADO DA COMPARAÇÃO =========\n");
    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 0);
    printf("Super Poder: %d\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
