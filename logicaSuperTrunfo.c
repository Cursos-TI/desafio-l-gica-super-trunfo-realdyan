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

// Escolha de Dois Atributos para comparação
printf("\n");
printf("Escolha Dois atributos para comparar entre as Cartas \n");
printf("\n");
//Menu para comparação
int menu1, menu2; // Variavel para coletar resposta sobre quais Atributos comparar

printf("\n");
printf("Digite o numero que representa o atributo\n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Pontos Turísticos \n");
printf("5. Densidade Populacional \n");
printf("6. PIB per Capita \n");
printf("\n");

printf("Escolha o primeiro atributo a ser comparado entre as Cartas \n");
scanf("%i", &menu1);

printf("Escolha o segundo atributo a ser comparado entre as Cartas \n");
scanf("%i", &menu2);
printf("\n");

//Variaveis para opcoes do menu 1 e 2 usados para verificar quem venceu
const char *resultado1 = ""; 
const char *resultado2 = "";

// Variaveis Para Soma das escolhas
float valor1_carta1 = 0, valor2_carta1 = 0;
float valor1_carta2 = 0, valor2_carta2 = 0;

// If para verificar se os atributos escolhidos pelo usuario sao  repetidos
if (menu1 == menu2) {
   printf("Atributos repetidos!");
} else
{

switch (menu1)
{
case 1:
printf("População Carta 1: %i \n População Carta 2: %i \n", populacao1, populacao2);
resultado1 = (populacao1 > populacao2) ? "População da Carta 1 Venceu\n" : "População da Carta 2 Venceu\n";
printf("%s", resultado1);
valor1_carta1 = populacao1; valor1_carta2 = populacao2;
break;

case 2: 
printf("Área Carta 1: %.2f \n Área Carta 2: %.2f \n", area1, area2);
resultado1 = (area1 > area2) ? "Área da Carta 1 Venceu" : "Área da Carta 2 Venceu";
printf("%s", resultado1);
valor1_carta1 = area1; valor1_carta2 = area2;
break;

case 3: 
printf("PIB Carta 1: %.2f \n PIB Carta 2: %.2f \n", pib1, pib2);
resultado1 = (pib1 > pib2) ? "PIB da Carta 1 Venceu" : "PIB da Carta 2 Venceu";
printf("%s", resultado1);
valor1_carta1 = pib1; valor1_carta2 = pib2;
break;

case 4:
printf("Pontos Turisticos Carta 1: %i \n Pontos Turisticos Carta 2: %i \n", pontosTuristicos1, pontosTuristicos2);
resultado1 = (pontosTuristicos1 > pontosTuristicos2) ? "Pontos Turisticos da Carta 1 Venceu \n" : "Pontos Turisticos da Carta 2 Venceu \n";
printf("%s", resultado1);
valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2;
break;

case 5:
printf("Densidade Populacional Carta 1: %.2f \n Densidade Populacional Carta 2: %.2f \n", densidadePopulacional1, densidadePopulacional2);
resultado1 = (densidadePopulacional1 > densidadePopulacional2) ? "PIB per Capita da Carta 1 Venceu" : "PIB per Capita da Carta 2 Venceu";
printf("%s", resultado1);
valor1_carta1 = densidadePopulacional1; valor1_carta2 = densidadePopulacional2;
break;

case 6: 
printf("PIB per Capita Carta 1: %.2f \n PIB per Capita Carta 2: %.2f \n", PIBperCapita1, PIBperCapita2);
resultado1 = (PIBperCapita1 < PIBperCapita2) ? "PIB per Capita da Carta 1 Venceu \n" : "PIB per Capita da Carta 2 Venceu \n";
printf("%s", resultado1);
valor1_carta1 = PIBperCapita1; valor1_carta2 = PIBperCapita2;
break;

default:
    printf("Inválido!\n");
    break;

}

printf("\n");

//Menu 2
switch (menu2)
{
case 1: 
printf("População Carta 1: %i \n População Carta 2: %i \n", populacao1, populacao2);
resultado2 = (populacao1 > populacao2) ? "População da Carta 1 Venceu" : "População da Carta 2 Venceu";
printf("%s", resultado2);
valor2_carta1 = populacao1; valor2_carta2 = populacao2;
break;

case 2:
printf("Área Carta 1: %.2f \n Área Carta 2: %.2f \n", area1, area2);
resultado2 = (area1 > area2) ? "Área da Carta 1 Venceu \n" : "Área da Carta 2 Venceu \n";
printf("%s", resultado2);
valor2_carta1 = area1; valor2_carta2 = area2;
break;

case 3:
printf("PIB Carta 1: %.2f \n PIB Carta 2: %.2f \n", pib1, pib2);
resultado2 = (pib1 > pib2) ? "PIB da Carta 1 Venceu \n" : "PIB da Carta 2 Venceu \n";
printf("%s", resultado2);
valor2_carta1 = pib1; valor2_carta2 = pib2;
break;

case 4:
printf("Pontos Turisticos Carta 1: %i \n Pontos Turisticos Carta 2: %i \n", pontosTuristicos1, pontosTuristicos2);
resultado2 = (pontosTuristicos1 > pontosTuristicos2) ? "Pontos Turisticos da Carta 1 Venceu \n" : "Pontos Turisticos da Carta 2 Venceu \n";
printf("%s", resultado2);
valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2;
break;

case 5:
printf("Densidade Populacional Carta 1: %.2f \n Densidade Populacional Carta 2: %.2f \n", densidadePopulacional1, densidadePopulacional2);
resultado2 = (densidadePopulacional1 > densidadePopulacional2) ? "Densidade Populacional da Carta 1 Venceu \n" : "Densidade Populacional da Carta 2 Venceu \n";
printf("%s", resultado2);
valor2_carta1 = densidadePopulacional1; valor2_carta2 = densidadePopulacional2;
break;

case 6: 
printf("PIB per Capita Carta 1: %.2f \n PIB per Capita Carta 2: %.2f \n", PIBperCapita1, PIBperCapita2);
resultado2 = (PIBperCapita1 < PIBperCapita2) ? "PIB per Capita da Carta 1 Venceu \n" : "PIB per Capita da Carta 2 Venceu \n";
printf("%s", resultado2);
valor2_carta1 = PIBperCapita1; valor2_carta2 = PIBperCapita2;
break;

default:
    printf("Inválido!\n");
    break;

    }

if (resultado1 && resultado2) {
    printf("Cidade: %s Venceu \n", cidade1);
} else if (resultado1 != resultado2)
{
    printf("Cidade: %s Venceu \n", cidade2);
} else {
    printf("Empatou \n");
}

printf("\n");

// Soma total dos atributos escolhidos
float soma1 = valor1_carta1 + valor2_carta1;
float soma2 = valor1_carta2 + valor2_carta2;

//Mostrar na tela a soma dos atributos para das duas cidades
printf("Soma dos atributos escolhidos \n");
printf("Cidade: %s = %.2f \n", cidade1, soma1);
printf("Cidade: %s = %.2f \n ", cidade2, soma2);
printf("\n");

// Resultado final da rodada
if (soma1 > soma2) {
    printf("Resultado: %s venceu essa rodada!\n", cidade1);
} else if (soma2 > soma1) {
    printf("Resultado: %s venceu essa rodada!\n", cidade2);
} else {
    printf("Resultado: Empate!\n");
}

}
 
return 0;

}
