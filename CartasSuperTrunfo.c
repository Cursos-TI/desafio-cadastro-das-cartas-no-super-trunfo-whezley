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
    int numPontosTuristicos;
    //Declarando atributos para a segunda carta
    char codigodaCidade2[15];
    char nomedaCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
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

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    return 0;
}
