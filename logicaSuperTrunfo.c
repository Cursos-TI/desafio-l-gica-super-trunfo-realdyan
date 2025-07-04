#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis para os atributos das cartas 
char estado1, estado2; // Variável para o estado (A a H)
char codigoCarta1[4], codigoCarta2[4]; // Variável para o código da carta (ex: A01, B03)
char cidade1[50], cidade2[50]; // Variável para o nome da cidade
int populacao1, populacao2;  // Variável para a população
float area1, area2; // Variável para a área em km²
float pib1, pib2; // Variável para o PIB
int pontosTuristicos1, pontosTuristicos2; // Variavel para pontos turisticos
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // Bem vindas ao Desafio Super Trunfo - Cadastro de Cidades
// Este é o ponto de partida para o cadastro das cartas de cidades.

//Cadastro Carta 1
printf("Desafio Super Trunfo - Cadastro de Cartas\n");
printf("\n");
printf("Cadastro Carta 1: \n");
printf("Estado: Digite uma letra de 'A' a 'H' para representar o estado da cidade.\n");
scanf(" %c", &estado1); // Le o estado da cidade 1
printf("Código da Carta: Digite letra do estado seguida de um número de 01 a 04. Ex.: A01 \n");
scanf("%s", codigoCarta1); // Le o código da carta da cidade 1
printf("Nome da Cidade: Digite o nome da cidade. \n");
scanf(" %[^\n]", cidade1); // Le o nome da cidade 1
printf("População: Digite o número de habitantes da cidade. \n");
scanf("%i", &populacao1); // Le a população da cidade 1
printf("Área (em km²): Digite a área da cidade em quilômetros quadrados. \n");
scanf("%f", &area1); // Le a área da cidade 1
printf("PIB: Digite o Produto Interno Bruto da cidade. \n");
scanf("%f", &pib1); // Le o PIB da cidade 1
printf("Número de Pontos Turísticos: Digite a quantidade de pontos turísticos na cidade. \n");
scanf("%i", &pontosTuristicos1); // Le o número de pontos turísticos da cidade 1
printf("\n");


// Cadastro Carta 2
printf("\n");
printf("Cadastro Carta 2:\n");
printf("Estado: Digite uma letra de 'A' a 'H' para representar o estado da cidade.\n");
scanf(" %c", &estado2); // Le o estado da cidade 2
printf("Código da Carta: Digite letra do estado seguida de um número de 01 a 04. Ex.: A01\n");
scanf("%s", codigoCarta2); // Le o código da carta da cidade 2
printf("Nome da Cidade: Digite o nome da cidade. \n");
scanf(" %[^\n]", cidade2); // Le o nome da cidade 2
printf("População: Digite o número de habitantes da cidade. \n");
scanf("%i", &populacao2); // Le a população da cidade 2
printf("Área (em km²): Digite a área da cidade em quilômetros quadrados. \n");
scanf("%f", &area2); // Le a área da cidade 2
printf("PIB: Digite o Produto Interno Bruto da cidade. \n");
scanf("%f", &pib2); // Le o PIB da cidade 2
printf("Número de Pontos Turísticos: Digite a quantidade de pontos turísticos na cidade. \n");
scanf("%i", &pontosTuristicos2); // Le o número de pontos turísticos da cidade 2
printf("\n");

// Cálculo e Variavel da Densidade Populacinal das Cartas

float densidadePopulacional1 = ((double)populacao1 / area1); // Declaração da variavel Densidade Populacinal da Carta 1
float densidadePopulacional2 = ((double)populacao2 / area2); // Declaração da variavel Densidade Populacinal da Carta 2

// Cálculo e Váriavel do PIB per Capita das Cartas
float PIBperCapita1 = ((pib1 * 1e9) / (double)populacao1); // Variavel e Calculo do PIB per Capita da Carta 1
float PIBperCapita2 = ((pib2 * 1e9) / (double)populacao2); // Variavel e Calculo do PIB per Capita da Carta 2

// Declarando Super Poder
float superPoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosTuristicos1 + (float)PIBperCapita1 - (float)densidadePopulacional1; // Declaração e Calculo Super Poder da Carta 1
float superPoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosTuristicos2 + (float)PIBperCapita2 - (float)densidadePopulacional2; // Declaração e Calculo Super Poder da Carta 2


// Exibir Densidade populacional e PIB per Capita Carta 1
printf("\n");
printf("------Dados Carta 1------ \n");
printf("Densidade Populacional: %f \n", densidadePopulacional1);
printf("PIB per Capita: %f \n", PIBperCapita1);
printf("\n");

// Exibir Densidade populacional e PIB per Capita Carta 2
printf("\n");
printf("------Dados Carta 2------ \n");
printf("Densidade Populacional: %f \n", densidadePopulacional2);
printf("PIB per Capita: %f \n", PIBperCapita2);
printf("\n");

// Comparação de atributos escolhido no código para população
printf("------ Comparação das Cartas 1 e 2 ------ \n");
printf("Atributo para comparação escolhido foi População.\n");
printf("\n");
printf("--------------------------------- \n");
printf("------População Carta 1: %i------ \n", populacao1);
printf("------População Carta 2: %i------ \n", populacao2);
printf("--------------------------------- \n");
printf("----------- Resultado ----------- \n");
if (populacao1 > populacao2)
{
   printf("População: Carta 1 Venceu \n");
} else if (populacao1 < populacao2)
{
   printf("População: Carta 2 Venceu \n");
} else if (populacao1 == populacao2)
{
   printf("População: Empate \n");
} else
{
    printf("! \n");
}
printf("--------------------------------- \n");
printf("\n");



    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
