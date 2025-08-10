#include <stdio.h>

int main() {
    // Definindo a estrutura da carta
    struct Carta {
        char estado;
        char codigo[4];
        char cidade[30];
        int populacao;
        float area;
        float pib;
        int ponto_turistico;
    };
    
    // Declarando as cartas
    struct Carta carta1, carta2;

    // Cadastrar a primeira carta 
    printf("CADASTRO DA PRIMEIRA CARTA\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Cidade: ");
    scanf("%s", carta1.cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (Km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.ponto_turistico);

    // Cadastrar a segunda carta
    printf("\nCADASTRO DA SEGUNDA CARTA\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Cidade: ");
    scanf("%s", carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (Km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.ponto_turistico);

    // Mostrar as cartas cadastradas
    printf("\n=== CARTAS CADASTRADAS ===\n");

    // Exibição dos dados da Carta 1
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.ponto_turistico);

    // Exibição dos dados da Carta 2
    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.ponto_turistico);

    return 0;
}