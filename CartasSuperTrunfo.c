#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    // Variáveis da primeira carta
    char estado1[50];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da segunda carta
    char estado2[50];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    // Os pedidos do terminal são exibidos pelo printf e são coletadas as informações pelo scanf
    // A solicitação da população não poderá ser preenchida com pontos em meio aos números pelo usuário, pois sua variável é int
    // Os nomes não poderão conter espaço
    // Conforme os prints solicitam, o usuário insere as informações para preeencher as variáveis solicitadas no terminal

    // Dados da carta 1

    printf("Digite o estado da primeira carta(sem espaço ex:MinasGerais): \n");
    scanf("%s", &estado1);

    printf("Digite código primeira carta(ex: A01): \n");
    scanf("%s", &codigo1);
    
    printf("Digite o nome da cidade(sem espaço ex:JuizDeFora): \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a população da cidade(obs: sem pontos): \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km² ex:123.67): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade(ex:123.67): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Dados da carta 2

    printf("Digite o estado da segunda carta(sem espaço ex:MinasGerais): \n");
    scanf("%s", &estado2);

    printf("Digite código segunda carta(ex: A01): \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade(sem espaço ex:JuizDeFora): \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a população da cidade(obs: sem pontos): \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km² ex:123.67): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade(ex:123.67): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // A exibição das cartas é exibida pelo printf de forma organizada, linha por linha
    // A exibição das cartas esta na seguinte ordem: estado, código, nome da cidade, população, área, PIB e número de pontos turísticos

    // Print da primeira carta

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Print da segunda carta
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
