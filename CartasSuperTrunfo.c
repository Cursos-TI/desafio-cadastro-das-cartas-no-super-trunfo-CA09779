#include <stdio.h>
#include<string.h>
#include<stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[100], estado2[100];
    char codigo1[10], codigo2[10];
    char cidade1[100], cidade2[100];
    char temporario[25];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Registrando Primeira Carta
    printf("Estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';

    printf("Código da Carta: ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);    
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("População: ");
    fgets(temporario, sizeof(temporario), stdin);
    populacao1 = atoi(temporario);

    printf("Área: ");
    fgets(temporario, sizeof(temporario), stdin);
    area1 = atof(temporario);

    printf("PIB: ");
    fgets(temporario, sizeof(temporario), stdin);
    pib1 = atof(temporario);

    printf("Numero de Pontos Turísticos: ");
    fgets(temporario, sizeof(temporario), stdin);
    pontos_turisticos1 = atoi(temporario);


    // Registrando Segunda Carta
    printf("Estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Código da Carta: ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);    
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População: ");
    fgets(temporario, sizeof(temporario), stdin);
    populacao2 = atoi(temporario);

    printf("Área: ");
    fgets(temporario, sizeof(temporario), stdin);
    area2 = atof(temporario);

    printf("PIB: ");
    fgets(temporario, sizeof(temporario), stdin);
    pib2 = atof(temporario);

    printf("Numero de Pontos Turísticos: ");
    fgets(temporario, sizeof(temporario), stdin);
    pontos_turisticos2 = atoi(temporario);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // Exibindo Dados da Primeira Carta
    printf("\nCarta 1: \n");

    printf("Estado: %s\n", estado1);

    printf("Código da Carta: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f km2\n", area1);

    printf("PIB: %.2f bilhões de reais\n", pib1);

    printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibindo Dados da Segunda carta:
    printf("\nCarta 2: \n");

    printf("Estado: %s\n", estado2);

    printf("Código da Carta: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f km2\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
