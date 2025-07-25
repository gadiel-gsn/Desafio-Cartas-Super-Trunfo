#include <stdio.h>
#include <string.h>

int main()
{
    // Declaração de variáveis
    char estado1[50], estado2[50], codigoDaCarta1[10], codigoDaCarta2[10], nomeDaCidade1[50], nomeDaCidade2[50];
    int populacao1, populacao2, nDePontosTuristicos1, nDePontosTuristicos2;
    float area1, area2, pib1, pib2, DensiPopulacional1, DensiPopulacional2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

    // Entrada de dados para a primeira carta
    printf("Digite o nome do estado da primeira carta: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0'; 

    printf("Digite o código da primeira carta: ");
    fgets(codigoDaCarta1, sizeof(codigoDaCarta1), stdin);
    codigoDaCarta1[strcspn(codigoDaCarta1, "\n")] = '\0';

    printf("Digite o nome da cidade da primeira carta: ");
    fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0';

    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);
    pib1 *= 1000000000;
    getchar();

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &nDePontosTuristicos1);
    getchar();


    // Entrada de dados para a segunda carta

    printf("Digite o nome do estado da segunda carta: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o código da segunda carta: ");
    fgets(codigoDaCarta2, sizeof(codigoDaCarta2), stdin);
    codigoDaCarta2[strcspn(codigoDaCarta2, "\n")] = '\0';

    printf("Digite o nome da cidade da segunda carta: ");
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0'; 

    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);
    pib2 *= 1000000000;
    getchar();

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &nDePontosTuristicos2);
    getchar();

    // Cálculos da primeira carta
    DensiPopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + nDePontosTuristicos1 + area1 + pibPerCapita1 + pib1 + (1.0 / DensiPopulacional1);

     // Calculos da segunda carta
    DensiPopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + nDePontosTuristicos2 + area2 + pibPerCapita2 + pib2 + (1.0 / DensiPopulacional2);


    // Exibição dos dados das cartas
    printf("\nDados da primeira carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1 / 1000000000);
    printf("Números de pontos turísticos: %d\n", nDePontosTuristicos1);
    printf("Densidade populacional da primeira carta: %.2f hab/km²\n", DensiPopulacional1);
    printf("PIB per capita da primeira carta: %.2f\n", pibPerCapita1);
    printf("Super Poder da primeira carta: %.2f\n", superPoder1);
    printf("\nDados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2 / 1000000000);
    printf("Números de pontos turísticos: %d\n", nDePontosTuristicos2);
    printf("Densidade populacional da segunda carta: %.2f hab/km²\n", DensiPopulacional2);
    printf("PIB per capita da segunda carta: %.2f\n", pibPerCapita2);
    printf("Super Poder da segunda carta: %.2f\n", superPoder2);

    // Comparação das cartas 

    printf("\nComparação das cartas: 1 para verdadeiro Carta 1 vence e 0 para falso Carta 2 vence:\n");
    printf("População: %d\n", (populacao1 > populacao2));
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Número de pontos turísticos: %d\n", (nDePontosTuristicos1 > nDePontosTuristicos2));
    printf("Densidade populacional  : %d\n", (DensiPopulacional1 < DensiPopulacional2));
    printf("PIB per capita: %d\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: %d\n", (superPoder1 > superPoder2));
        
    }