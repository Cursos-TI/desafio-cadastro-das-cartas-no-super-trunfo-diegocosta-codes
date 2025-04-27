#include <stdio.h>
int main(){

    char Estado ;
    char CodigoDaCarta [5];
    char Cidade[50];
    int populacao;
    float area;
    float pib;
    int PontosTuristicos;
    float Densidade;
    float PibPerCapita;
    float SuperPoder;
    
    printf ("digite o Estado(C para CE e B para BA):\n");
    scanf (" %c", &Estado);

    printf ("digite o CodigoDaCarta(C01 e B02):\n");
    scanf (" %s", CodigoDaCarta);

    printf ("digite a Cidade:\n");
    scanf (" %s", Cidade);

    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf(" %f", &pib);

    printf("Digite o número de PontosTuristicos:\n");
    scanf(" %d", &PontosTuristicos);

    Densidade = populacao / area;
    PibPerCapita = (pib * 1000000000) / populacao;
    SuperPoder = populacao + area + pib + PontosTuristicos + PibPerCapita + (1/Densidade)
    
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", CodigoDaCarta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n",populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade);
    printf("PIB per capita: R$ %.2f\n", PibPerCapita);
    printf ( "SuperPoder: %2f\n", SuperPoder)

    printf ("digite o Estado(C para CE e B para BA) da segunda cidade:\n");
    scanf (" %c", &Estado);

    printf ("digite o CodigoDaCarta(C01 e B02):\n");
    scanf (" %s", CodigoDaCarta);

    printf ("digite a Cidade:\n");
    scanf (" %s", Cidade);

    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf(" %f", &pib);

    printf("Digite o número de PontosTuristicos:\n");
    scanf(" %d", &PontosTuristicos);

    Densidade = populacao / area;
    PibPerCapita = (pib * 1000000000) / populacao;
    SuperPoder = populacao + area + pib + PontosTuristicos + PibPerCapita + (1/Densidade)


    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", CodigoDaCarta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n",populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade);
    printf("PIB per capita: R$ %.2f\n", PibPerCapita);
    printf ( "SuperPoder: %2f\n", SuperPoder)

        // Comparação dos atributos
        printf("\n--- Comparação de Cartas ---\n");

        printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
        printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
        printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PontosTuristicos1 > PontosTuristicos2);
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade1 < Densidade2); // menor densidade vence
        printf("PIB per Capita: Carta 1 venceu (%d)\n", PibPerCapita1 > PibPerCapita2);
        printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);



    
    return 0;


}