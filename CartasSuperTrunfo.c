#include <stdio.h>

int main() {
    // Definindo a estrutura da carta
    struct Carta {
        char estado;
        char codigo[4];
        char cidade[30];
        unsigned long int populacao; // alterado para usingned long int
        float area;
        float pib;
        int ponto_turistico;
        float dencidade; // Novo campo: Dencidade populacional
        float pib_per_capita; // Novo campo: PIB per capita
        float super_poder; // Novo campo: Super Poder
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

    // Calcular a Dencidade populacional e PIB per capita para a primeira carta
    carta1.dencidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    // Calcular o Super Poder para  a primira carta
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + 
                        carta1.ponto_turistico + carta1.pib_per_capita + 
                        (1 / carta1.dencidade); // Cálculo do Super Poder

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

    // Calcular a Dencidade populacional PIB per capita da segunda carta
    carta2.dencidade = carta2.populacao / carta2.area; // Cálculo da Dencidade populacional
    carta2.pib_per_capita = carta2.pib / carta2.populacao; // Cálculo  do PIB per capita

    // Calcular o Super Poder para a segunda carta
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + 
                        carta2.ponto_turistico + carta2.pib_per_capita + 
                        (1 / carta2.dencidade); // Cálculo do Super Poder

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
    printf("Dencidade Populacional: %.2f hab/Km²\n", carta1.dencidade); // Exibir o nono campo
    printf("PIB Per capita: %.2f\n", carta1.pib_per_capita); // Exibir o novo campo
    printf("Super Poder: %.2f\n", carta1.super_poder);

    // Exibição dos dados da Carta 2
    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.ponto_turistico);
    printf("Dencidade Populacional: %.2f hab/Km²\n", carta2.dencidade); // Exibir o novo campo
    printf("PIB Per capita: %.2f\n", carta2.pib_per_capita); // Exibir o novo campo
    printf("Super poder: %.2f\n", carta2.super_poder);

    // Comparação entre as cartas
    printf("\n=== COMPARACAO ENTRE CARTAS ===\n"); // Título para a seão de comparção
     
    // Atributos para maior valor vence
    int vencedor_estado = (carta1.estado > carta2.estado) ? 1 : 2;
    int vencedor_populacao = (carta1.populacao > carta2.populacao) ? 1 : 2;
    int vencedor_area = (carta1.area > carta2.area) ? 1 : 2;
    int vencedor_pib = (carta1.pib > carta2.pib) ? 1 : 2;
    int vencedor_pontos_turisticos = (carta1.ponto_turistico > carta2.ponto_turistico) ? 1 : 2;
    int vencedor_pib_per_capita = (carta1.pib_per_capita > carta2.pib_per_capita) ? 1 : 2;
    int vencedor_super_poder = (carta1.super_poder > carta2.super_poder) ? 1 : 2;

    // Para densidade populacional (menor valor vence)
    int vencedor_dencidade = (carta1.dencidade < carta2.dencidade) ? 1 : 2;

    printf("\nEstado: Carta %d vence\n", vencedor_estado);
    printf("Populacao: Carta %d vence\n", vencedor_populacao);
    printf("Area: Carta %d vence\n", vencedor_area);
    printf("PIB: Carta %d vence\n", vencedor_pib);
    printf("Pontos Turisticos: Carta%d vence\n", vencedor_pontos_turisticos);
    printf("Dencidade Populacional: Carta %d vence\n", vencedor_dencidade);
    printf("PIB Per Capita: Carta %d vence\n", vencedor_pib_per_capita);
    printf("Super poder: Carta %d vence\n", vencedor_super_poder);

    
    return 0;
}