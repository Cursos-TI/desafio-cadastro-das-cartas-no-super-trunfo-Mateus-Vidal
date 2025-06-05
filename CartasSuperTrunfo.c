#include <stdio.h>

int main() {
    char estadoCarta1;
    char codigoCarta1[5];
    char nomeCidadeCarta1[30];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontoTuristicoCarta1;
    float densidadePopulacional;
    float pibPerCap1;
    
    char estadoCarta2;
    char codigoCarta2[5];
    char nomeCidadeCarta2[30];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontoTuristicoCarta2;
    float densidadePopulacional2;
    float pibPerCap2;
    

    // Carta 1

    printf("Digite uma letra de 'A' a 'H' para o estado:\n");
    scanf("%c", &estadoCarta1);  

    printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidadeCarta1);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacaoCarta1);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &areaCarta1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pibCarta1);

    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pontoTuristicoCarta1);

    densidadePopulacional = (float) populacaoCarta1 / areaCarta1;

    pibPerCap1 = (float) pibCarta1 / areaCarta1;
    



    // Carta 2

    getchar();
    printf("Digite uma letra de 'A' a 'H' para o estado:\n");
    scanf("%c", &estadoCarta2);  

    printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidadeCarta2);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacaoCarta2);

    printf("Digite a area da cidade em quilometros quadrados: \n");
    scanf("%f", &areaCarta2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pibCarta2);

    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pontoTuristicoCarta2);

    densidadePopulacional2 = (float) populacaoCarta2 / areaCarta2;

    pibPerCap2 = (float) pibCarta2 / areaCarta2;
    
    
    // Resultado Carta 1
    printf("\nCartão 1: \n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
    printf("População: %d\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaCarta1);
    printf("PIB: %.2f reais\n", pibCarta1);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristicoCarta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCap1);

    // Resultado Carta 2
    printf("\nCartão 2: \n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaCarta2);
    printf("PIB: %.2f reais\n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristicoCarta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCap2);

    return 0;
}
