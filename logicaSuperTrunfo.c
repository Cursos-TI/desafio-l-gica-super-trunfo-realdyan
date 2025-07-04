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

//Menu para comparação
int menu; // Variavel para coletar resposta do menu
printf("Escolha o atributo a ser comparado entre as Cartas \n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Pontos Turísticos \n");
printf("5. Densidade Populacional \n");
printf("6. PIB per Capita \n");
scanf("%i", &menu);
printf("\n");

switch (menu)
{
case 1: // Escolha População
printf("--------------------------------- \n");
printf("Atributo escolhido para Comparação: População.\n");
printf("------População Carta 1: %i------ \n", populacao1);
printf("------População Carta 2: %i------ \n", populacao2);
if (populacao1 > populacao2)
{
   printf("População: Carta 1: %s Venceu \n", cidade1);
} else if (populacao1 < populacao2)
{
   printf("População: Carta 2: %s Venceu \n", cidade2);
} else if (populacao1 == populacao2)
{
   printf("População: Empate \n");
} else
{
    printf("! \n");
}
printf("--------------------------------- \n");
printf("\n");
    break;


case 2: // Escolha Area
printf("--------------------------------- \n");
printf("Atributo escolhido para Comparação: Área.\n");
printf("------Área Carta 1: %f------ \n", area1);
printf("------Área Carta 2: %f------ \n", area2);
if (area1 > area2)
{
   printf("------Área: Carta 1: %s Venceu \n", cidade1);
} else if (area1 < area2)
{
   printf("------Área: Carta 2: %s Venceu \n", cidade2);
} else if (area1 == area2)
{
   printf("------Área: Empate \n");
} else
{
    printf("! \n");
}
printf("--------------------------------- \n");
printf("\n");
break;

case 3: // PIB
printf("--------------------------------- \n");
printf("Atributo escolhido para Comparação: PIB.\n");
printf("------PIB Carta 1: %f------ \n", pib1);
printf("------PIB Carta 2: %f------ \n", pib2);
if (pib1 > pib2)
{
   printf("------PIB: Carta 1: %s Venceu \n", cidade1);
} else if (pib1 < pib2)
{
   printf("------PIB: Carta 2: %s Venceu \n", cidade2);
} else if (pib1 == pib2)
{
   printf("------PIB: Empate \n");
} else
{
    printf("! \n");
}
printf("--------------------------------- \n");
printf("\n");
break;


case 4: // Pontos Turisticos
printf("--------------------------------- \n");
printf("Atributo escolhido para Comparação: Pontos Turisticos.\n");
printf("------Pontos Turisticos Carta 1: %i------ \n", pontosTuristicos1);
printf("------Pontos Turisticos Carta 2: %i------ \n", pontosTuristicos2);
if (pontosTuristicos1 > pontosTuristicos2)
{
   printf("------Pontos Turisticos: Carta 1: %s Venceu \n", cidade1);
} else if (pontosTuristicos1 < pontosTuristicos2)
{
   printf("------Pontos Turisticos: Carta 2: %s Venceu \n", cidade2);
} else if (pontosTuristicos1 == pontosTuristicos2)
{
   printf("------Pontos Turisticos: Empate \n");
} else
{
    printf("! \n");
}
printf("--------------------------------- \n");
printf("\n");
break;


case 5: // Densidade Populacional
printf("--------------------------------- \n");
printf("Atributo escolhido para Comparação: Densidade Populacional.\n");
printf("para Densidade Populacional o menor valor vence.\n");
printf("------Densidade Populacional Carta 1: %f------ \n", densidadePopulacional1);
printf("------Densidade Populacional Carta 2: %f------ \n", densidadePopulacional2);
if (densidadePopulacional1 < densidadePopulacional2)
{
   printf("------Densidade Populacional: Carta 1: %s Venceu \n", cidade1);
} else if (densidadePopulacional1 > densidadePopulacional2)
{
   printf("------Densidade Populacional: Carta 2: %s Venceu \n", cidade2);
} else if (densidadePopulacional1 == densidadePopulacional2)
{
   printf("------Densidade Populacional: Empate \n");
} else
{
    printf("! \n");
}
printf("--------------------------------- \n");
printf("\n");
break;


case 6: // PIB per Capita
printf("--------------------------------- \n");
printf("Atributo escolhido para Comparação: PIB per Capita.\n");
printf("------PIB per Capita Carta 1: %f------ \n", PIBperCapita1);
printf("------PIB per Capita Carta 2: %f------ \n", PIBperCapita2);
if (PIBperCapita1 > PIBperCapita2)
{
   printf("------PIB per Capita: Carta 1: %s Venceu \n", cidade1);
} else if (PIBperCapita1 < PIBperCapita2)
{
   printf("------PIB per Capita: Carta 2: %s Venceu \n", cidade2);
} else if (PIBperCapita1 == PIBperCapita2)
{
   printf("------PIB per Capita: Empate \n");
} else
{
    printf("! \n");
}
printf("--------------------------------- \n");
printf("\n");
break;


default:
    printf("Inválido!\n");
    break;
}




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
