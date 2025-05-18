#include <stdio.h>
#include <stdlib.h> // incluindo biblioteca para poder usar system("clear"); e limpar a tela.
#include <string.h> // incluindo biblioteca para poder contar a quantidade de caracteres

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Definição das variáveis utilizadas no sistema
    int n_pontos_turisticos[2], populacao[2], seletor_comparacao, c, variavel_ajuste;
    float area[2], pib[2], densidade[2], pib_per_capita[2], super_poder[2];
    char estado[2][3], cod_carta[2][3], nome_cidade[2][50];

    // Cadastro das cidades
    printf(" ---------- CADASTRAR CIDADES --------- \n");
    printf(" -------------- Cidade 1 -------------- \n\n");

    printf("Qual é o nome da cidade? \n");
    fgets(nome_cidade[0], 50, stdin);
    // eliminar o \n para não interferir na exibição final do programa, para isso conta o comprimento da string
    variavel_ajuste = strlen(nome_cidade[0]);
    if(variavel_ajuste > 0 && nome_cidade[0][variavel_ajuste-1] == '\n') {
        nome_cidade[0][variavel_ajuste-1] = '\0';
    }

    printf("Qual é o estado da cidade? \n");
    scanf("%2s", estado[0]);

    // limpa o 'buffer' e impedir bug do \n, ao usar fgets após usar scanf
    while ((c = getchar()) != '\n' && c != EOF) { }
    
    printf("Qual é o código da carta? \n");
    fgets(cod_carta[0], 3, stdin);

    // eliminar o \n para não interferir na exibição final do programa, para isso conta o comprimento da string
    variavel_ajuste = strlen(cod_carta[0]);
    if(variavel_ajuste > 0 && cod_carta[0][variavel_ajuste-1] == '\n') {
        cod_carta[0][variavel_ajuste-1] = '\0';
    }

    printf("Qual é a quantidade de população da cidade? \n");
    scanf("%i", &populacao[0]);

    printf("Qual é a área desta cidade? \n");
    scanf("%f", &area[0]);

    printf("Qual é o valor do PIB desta cidade? \n");
    scanf("%f", &pib[0]);

    printf("Qual é a quantidade de pontos turísticos da cidade? \n");
    scanf("%i", &n_pontos_turisticos[0]);

    // Calculando a Densidade, Pib per capita e Super Poder com base nos valores fornecidos
    densidade[0] = populacao[0] / area[0];
    pib_per_capita[0] = pib[0] / populacao[0];

    // limpar a tela
    system("clear");
    // limpa o 'buffer' e impedir bug do \n ao usar fgets após usar scanf
    while ((c = getchar()) != '\n' && c != EOF) { }

    printf("\n -------------- Cidade 2 -------------- \n\n");
    printf("Qual é o nome da cidade? \n");
    fgets(nome_cidade[1], 50, stdin);

    // eliminar o \n para não interferir na exibição final do programa, para isso conta o comprimento da string
    variavel_ajuste = strlen(nome_cidade[1]);
    if(variavel_ajuste > 0 && nome_cidade[1][variavel_ajuste-1] == '\n') {
        nome_cidade[1][variavel_ajuste-1] = '\0';
    }

    printf("Qual é o estado da cidade? \n");
    scanf("%2s", estado[1]);

    // limpa o 'buffer' e impedir bug do \n, ao usar fgets após usar scanf
    while ((c = getchar()) != '\n' && c != EOF) { }

    printf("Qual é o código da carta? \n");
    fgets(cod_carta[1], 3, stdin);

    // eliminar o \n para não interferir na exibição final do programa, para isso conta o comprimento da string
    variavel_ajuste = strlen(cod_carta[1]);
    if(variavel_ajuste > 0 && cod_carta[1][variavel_ajuste-1] == '\n') {
        cod_carta[1][variavel_ajuste-1] = '\0';
    }

    printf("Qual é a quantidade de população da cidade? \n");
    scanf("%i", &populacao[1]);

    printf("Qual é a área desta cidade? \n");
    scanf("%f", &area[1]);

    printf("Qual é o valor do PIB desta cidade? \n");
    scanf("%f", &pib[1]);

    printf("Qual é a quantidade de pontos turísticos da cidade? \n");
    scanf("%i", &n_pontos_turisticos[1]);


    // Calculando a Densidade, Pib per capita e Super Poder com base nos valores fornecidos
    densidade[1] = populacao[1] / area[1];
    pib_per_capita[1] = pib[1] / populacao[1];

    // limpar a tela
    system("clear");

    // Comparação das cartas cadastradas. Menu de seleção
    printf("\n -------- Comparação das Cartas -------- \n\n");
    printf("1 - Para comparar a População\n");
    printf("2 - Para comparar a Área\n");
    printf("3 - Para comparar o PIB\n");
    printf("4 - Para comparar a Densidade Populacional\n");
    printf("5 - Para comparar o PIB per capita\n");
    printf("6 - Para comparar o Número de Pontos Turísticos\n\n");
    printf("Escolha a opção desejada: ");
    scanf("%d", &seletor_comparacao);

    switch(seletor_comparacao) {
        case 1:
            printf("\nCarta 1 - %.49s (%.2s): %i\n", nome_cidade[0], estado[0], populacao[0]);
            printf("Carta 2 - %.49s (%.2s): %i\n", nome_cidade[1], estado[1], populacao[1]);

            if(populacao[0] > populacao[1]){
                printf("Resultado: Carta 1 (%.49s) venceu!\n\n", nome_cidade[0]);
            } else {
                printf("Resultado: Carta 2 (%.49s) venceu!\n\n", nome_cidade[1]);
            }
            break;
        case 2:
            printf("\nCarta 1 - %.49s (%.2s): %.2f\n", nome_cidade[0], estado[0], area[0]);
            printf("Carta 2 - %.49s (%.2s): %.2f\n", nome_cidade[1], estado[1], area[1]);

            if(area[0] > area[1]){
                printf("Resultado: Carta 1 (%.49s) venceu!\n\n", nome_cidade[0]);
            } else {
                printf("Resultado: Carta 2 (%.49s) venceu!\n\n", nome_cidade[1]);
            }
            break;
        case 3:
            printf("\nCarta 1 - %.49s (%.2s): %.2f\n", nome_cidade[0], estado[0], pib[0]);
            printf("Carta 2 - %.49s (%.2s): %.2f\n", nome_cidade[1], estado[1], pib[1]);

            if(pib[0] > pib[1]){
                printf("Resultado: Carta 1 (%.49s) venceu!\n\n", nome_cidade[0]);
            } else {
                printf("Resultado: Carta 2 (%.49s) venceu!\n\n", nome_cidade[1]);
            }
            break;
        case 4:
            printf("\nCarta 1 - %.49s (%.2s): %.2f\n", nome_cidade[0], estado[0], densidade[0]);
            printf("Carta 2 - %.49s (%.2s): %.2f\n", nome_cidade[1], estado[1], densidade[1]);

            if(densidade[0] < densidade[1]){
                printf("Resultado: Carta 1 (%.49s) venceu!\n\n", nome_cidade[0]);
            } else {
                printf("Resultado: Carta 2 (%.49s) venceu!\n\n", nome_cidade[1]);
            }
            break;
        case 5:
            printf("\nCarta 1 - %.49s (%.2s): %.2f\n", nome_cidade[0], estado[0], pib_per_capita[0]);
            printf("Carta 2 - %.49s (%.2s): %.2f\n", nome_cidade[1], estado[1], pib_per_capita[1]);

            if(pib_per_capita[0] > pib_per_capita[1]){
                printf("Resultado: Carta 1 (%.49s) venceu!\n\n", nome_cidade[0]);
            } else {
                printf("Resultado: Carta 2 (%.49s) venceu!\n\n", nome_cidade[1]);
            }
            break;
        case 6:
            printf("\nCarta 1 - %.49s (%.2s): %i\n", nome_cidade[0], estado[0], n_pontos_turisticos[0]);
            printf("Carta 2 - %.49s (%.2s): %i\n", nome_cidade[1], estado[1], n_pontos_turisticos[1]);

            if(n_pontos_turisticos[0] > n_pontos_turisticos[1]){
            printf("Resultado: Carta 1 (%.49s) venceu!\n\n", nome_cidade[0]);
            } else {
                printf("Resultado: Carta 2 (%.49s) venceu!\n\n", nome_cidade[1]);
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
    return 0;
}
