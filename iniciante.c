#include <stdio.h>

int main()
{
    /* code */

    /* Declara variaveis */

    // carta 1
    char estado1;
    char codigoCarta1[4];
    char nomeDaCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numeroPontosTuristicos1;

    // carta 2
    char estado2;
    char codigoCarta2[4];
    char nomeDaCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeroPontosTuristicos2;

    /* Mensagem Inicial */
    printf("SUPER TRUNFO NIVEL INICIANTE\n\n");

    /* Inicia as variaveis com leitura do teclado */

    // carta 1
    printf("Insira os dados da carta 1\n");
    printf("Estado: ");
    scanf(" %1c", &estado1);
    // Limpa o buffer para evitar conflito
    fflush(stdin);

    printf("Codigo da Carta: ");
    scanf(" %3s", codigoCarta1);

    printf("Nome da cidade: ");
    scanf("%49s", nomeDaCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &numeroPontosTuristicos1);

    // carta 2
    printf("\n\nInsira os dados da carta 2\n");
    printf("Estado: ");
    scanf(" %1c", &estado2);
    // Limpa o buffer para evitar conflito
    fflush(stdin);

    printf("Codigo da Carta: ");
    scanf(" %3s", codigoCarta2);

    printf("Nome da cidade: ");
    scanf("%49s", nomeDaCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &numeroPontosTuristicos2);

    /* Mostra as cartas preenchidas */
    printf("\n\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numeroPontosTuristicos1);

    printf("\n\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n\n", numeroPontosTuristicos2);

    return 0;
}
