#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Atributos da cidade 1
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Atributos da cidade 2
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

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

    // Exibição dos dados
    printf("\n========= CARTA DA CIDADE 1 =========\n");
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\n========= CARTA DA CIDADE 2 =========\n");
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
