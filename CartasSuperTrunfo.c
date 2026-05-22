#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
char estado1;
char codigo1[4];
char cidade1[20];
unsigned long int populacao1; // Atualizado para unsigned long int conforme nível mestre
float area1;
float pib1;
int nturisticos1;

char estado2;
char codigo2[4];
char cidade2[20];
unsigned long int populacao2; // Atualizado para unsigned long int conforme nível mestre
float area2;
float pib2;
int nturisticos2;

float densidade1;
float densidade2;
float pibcapita1;
float pibcapita2;

float superPoder1; // Adicionado nível mestre
float superPoder2; // Adicionado nível mestre

  // Área para entrada de dados

printf("Dados da Carta 1: \n");
printf("Digite a letra do Estado (Ex.: C - Ceará): \n");
scanf(" %c", &estado1); 

printf("Digite o código da carta (ex: A01, B03): \n");
scanf("%3s", codigo1);
    
printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", cidade1); 

printf("Digite a população: \n");
scanf("%lu", &populacao1); // Atualizado para %lu

getchar();

printf("Digite a área (km²): \n");
scanf("%f", &area1);

printf("Digite o PIB: \n");
scanf("%f", &pib1);

getchar();

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &nturisticos1);

printf("Dados da Carta 2: \n");
printf("Digite a letra do Estado (Ex.: C - Ceará): \n");
scanf(" %c", &estado2); 

printf("Digite o código da carta (ex: A01, B03): \n");
scanf("%3s", codigo2);
    
printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", cidade2); 

printf("Digite a população: \n");
scanf("%lu", &populacao2); // Atualizado para %lu

getchar();

printf("Digite a área (km²): \n");
scanf("%f", &area2);

printf("Digite o PIB: \n");
scanf("%f", &pib2);

getchar();

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &nturisticos2);

  // Área para cálculos

  densidade1 = (float)populacao1 / area1;
  densidade2 = (float)populacao2 / area2;

  pibcapita1 = pib1 / (float)populacao1;
  pibcapita2 = pib2 / (float)populacao2;

  // Cálculo Super Poder - Nível Mestre
  superPoder1 = (float)populacao1 + area1 + pib1 + (float)nturisticos1 + pibcapita1 + (1.0f / densidade1);
  superPoder2 = (float)populacao2 + area2 + pib2 + (float)nturisticos2 + pibcapita2 + (1.0f / densidade2);

  // Área para exibição dos dados da cidade
printf("\nCarta 1: \n\n");
printf("Estado: %c \n", estado1);
printf("Código: %s \n", codigo1);
printf("Cidade: %s \n", cidade1);
printf("População: %lu\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos turísticos: %d\n", nturisticos1);
printf("Densidade populacional: %.2f\n", densidade1);
printf("PIB per capita: %.2f\n", pibcapita1);

printf("\nCarta 2: \n\n");
printf("Estado: %c \n", estado2);
printf("Código: %s \n", codigo2);
printf("Cidade: %s \n", cidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos turísticos: %d\n", nturisticos2);
printf("Densidade populacional: %.2f\n", densidade1);
printf("PIB per capita: %.2f\n", pibcapita2);

// Área de Comparação - Nível Mestre
// printf("\nComparação de Cartas:\n");
// printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
// printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
// printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
// printf("Pontos Turísticos: Carta 1 venceu (%d)\n", nturisticos1 > nturisticos2);
// printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
// printf("PIB per Capita: Carta 1 venceu (%d)\n", pibcapita1 > pibcapita2);
// printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

// Menu interativo - Nível Aventureiro

int opcao;

printf("\n=====================================\n");
printf("              MENU                  \n");
printf("=====================================\n");

printf("Escolha um atributo para comparar:\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Populacional\n");

printf("\nDigite a opcao: ");
scanf("%d", &opcao);

switch(opcao) {

    case 1:

        printf("\nComparacao de Populacao\n");

        if(populacao1 > populacao2) {
            printf("Vencedor: %s\n", cidade1);

        } else if(populacao2 > populacao1) {
            printf("Vencedor: %s\n", cidade2);

        } else {
            printf("Empate!\n");
        }

        break;

    case 2:

        printf("\nComparacao de Area\n");

        if(area1 > area2) {
            printf("Vencedor: %s\n", cidade1);

        } else if(area2 > area1) {
            printf("Vencedor: %s\n", cidade2);

        } else {
            printf("Empate!\n");
        }

        break;

    case 3:

        printf("\nComparacao de PIB\n");

        if(pib1 > pib2) {
            printf("Vencedor: %s\n", cidade1);

        } else if(pib2 > pib1) {
            printf("Vencedor: %s\n", cidade2);

        } else {
            printf("Empate!\n");
        }

        break;

    case 4:

        printf("\nComparacao de Pontos Turisticos\n");

        if(nturisticos1 > nturisticos2) {
            printf("Vencedor: %s\n", cidade1);

        } else if(nturisticos2 > nturisticos1) {
            printf("Vencedor: %s\n", cidade2);

        } else {
            printf("Empate!\n");
        }

        break;

    case 5:

        printf("\nComparacao de Densidade Populacional\n");

        // Regra invertida
        if(densidade1 < densidade2) {

            // if aninhado
            if(densidade1 > 0) {
                printf("Vencedor: %s\n", cidade1);
            }

        } else if(densidade2 < densidade1) {

            if(densidade2 > 0) {
                printf("Vencedor: %s\n", cidade2);
            }

        } else {
            printf("Empate!\n");
        }

        break;

    default:
        printf("Opcao invalida!\n");
}

return 0;
}
