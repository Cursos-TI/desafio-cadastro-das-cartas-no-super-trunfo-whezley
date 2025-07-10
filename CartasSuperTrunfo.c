#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Declarando os atributos da carta
    char codigodaCidade[15];
    char nomedaCidade[20];
    int populacao;
    float area;
    float pib;
    float densidade;
    float pib_per_capita;
    int numPontosTuristicos;
    //Declarando atributos para a segunda carta
    char codigodaCidade2[15];
    char nomedaCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    float densidade2;
    float pib_per_capita2;
    int numPontosTuristicos2;

    //Inserindo a densidade e PIB per capita
    //Carta 1
    densidade = (float)populacao / area;  
    pib_per_capita = pib / populacao;

    //Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Cadastro das Cartas:
    //Pedindo para o usuario entrar com os dados da carta
    // Dados da Carta 1
    printf("Digite os dados da carta 1\n");
    printf("Digite o codigo da cidade: ");
        scanf("%s", codigodaCidade);
    printf("Digite o nome da cidade: \n");
        scanf("%s", nomedaCidade);
    printf("Digite a populacao: \n");
        scanf("%i", &populacao);
    printf("Digite a area: \n");
        scanf("%f", &area);
    printf("Digite o PIB: \n");
            scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
            scanf("%i", &numPontosTuristicos);
    printf("\n");
    // Dados da Carta 2
    printf("Digite os dados da carta 2\n");
    printf("Digite o codigo da cidade: ");
        scanf("%s", codigodaCidade2);
    printf("Digite o nome da cidade: \n");
        scanf("%s", nomedaCidade2);
    printf("Digite a populacao: \n");
        scanf("%i", &populacao2);
    printf("Digite a area: \n");
        scanf("%f", &area2);
    printf("Digite o PIB: \n");
            scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
            scanf("%i", &numPontosTuristicos2);
    printf("\n");
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibe os dados das cartas
    //Carta 1
    printf("As seguintes cartas foram cadastradas");
    printf("Carta 1:\n");
    printf("Codigo da cidade: %s\n",codigodaCidade);
    printf("Nome da cidade: %s\n",nomedaCidade);
    printf("Populacao: %i\n",populacao);
    printf("Area: %.2f\n",area);
    printf("PIB: %.2f\n",pib);
    printf("Numero de pontos turisticos: %i\n",numPontosTuristicos);
    printf("Densidade: %.2f habitantes por km²\n", densidade);
    printf("PIB per capita: %.2f habitantes por km²\n\nA01", pib_per_capita);

    //Carta 2
    printf("Carta 2:\n");
    printf("Codigo da cidade: %s\n",codigodaCidade2);
    printf("Nome da cidade: %s\n",nomedaCidade2);
    printf("Populacao: %i\n",populacao2);
    printf("Area: %.2f\n",area2);
    printf("PIB: %.2f\n",pib2);
    printf("Numero de pontos turisticos: %i\n",numPontosTuristicos2);
    printf("Densidade: %.2f habitantes por km²\n", densidade2);
    printf("PIB per capita: %.2f habitantes por km²\n", pib_per_capita2);

    
    return 0;
}
