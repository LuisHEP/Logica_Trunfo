#include <stdio.h>
#include <string.h>

// Estrutura da Carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
    float pibPerCapita;
} Carta;

int main() {
    // Cadastro das cartas
    Carta carta1 = {'a', "a01", "cidade um", 1000000, 500.0, 200.0, 10};
    Carta carta2 = {'b', "b02", "cidade dois", 500000, 600.0, 180.0, 8};

    // Calcular a densidade demográfica e PIB per capita
    carta1.densidadeDemografica = carta1.populacao / carta1.area;
    carta2.densidadeDemografica = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Atributo de comparação escolhido
    int atributo = 1; // 1-População, 2-Área, 3-PIB, 4-Densidade, 5-PIB per capita

    float valor1_carta1 = 0, valor1_carta2 = 0;
    char nomeAtributo[50];

    // Atribuindo valores de acordo com o atributo escolhido
    switch (atributo) {
        case 1:
            valor1_carta1 = carta1.populacao;
            valor1_carta2 = carta2.populacao;
            strcpy(nomeAtributo, "Populacao");
            break;
        case 2:
            valor1_carta1 = carta1.area;
            valor1_carta2 = carta2.area;
            strcpy(nomeAtributo, "Area");
            break;
        case 3:
            valor1_carta1 = carta1.pib;
            valor1_carta2 = carta2.pib;
            strcpy(nomeAtributo, "PIB");
            break;
        case 4:
            valor1_carta1 = carta1.densidadeDemografica;
            valor1_carta2 = carta2.densidadeDemografica;
            strcpy(nomeAtributo, "Densidade Populacional");
            break;
        case 5:
            valor1_carta1 = carta1.pibPerCapita;
            valor1_carta2 = carta2.pibPerCapita;
            strcpy(nomeAtributo, "PIB per Capita");
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Exibindo as comparações
    printf("\nComparacao de cartas (Atributo: %s):\n", nomeAtributo);
    printf("Carta 1 - %s: %.2f\n", carta1.nomeCidade, valor1_carta1);
    printf("Carta 2 - %s: %.2f\n", carta2.nomeCidade, valor1_carta2);

    // Comparação com base no atributo escolhido
    if (atributo == 4) { // Densidade: menor vence
        if (valor1_carta1 < valor1_carta2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else if (valor1_carta2 < valor1_carta1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else { // Outros: maior vence
        if (valor1_carta1 > valor1_carta2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else if (valor1_carta2 > valor1_carta1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    return 0;
}