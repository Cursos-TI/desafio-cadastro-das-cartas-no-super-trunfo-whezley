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
    signed long int populacao;
    float area;
    float pib;
    float densidade;
    float pib_per_capita;
    int numPontosTuristicos;
    float super_poder;
    float densidade_invertida;
    //Declarando atributos para a segunda carta
    char codigodaCidade2[15];
    char nomedaCidade2[20];
    signed long int populacao2;
    float area2;
    float pib2;
    float densidade2;
    float pib_per_capita2;
    int numPontosTuristicos2;
    float super_poder2;
    float densidade_invertida2;

    // Cadastro das Cartas:
    //Pedindo para o usuario entrar com os dados da carta
    // Dados da Carta 1
    printf("Digite os dados da carta 1\n");
    printf("Digite o codigo da cidade: ");
        scanf("%s", codigodaCidade);
    printf("Digite o nome da cidade: \n");
        scanf("%s", nomedaCidade);
    printf("Digite a populacao: \n");
        scanf("%li", &populacao);
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
        scanf("%li", &populacao2);
    printf("Digite a area: \n");
        scanf("%f", &area2);
    printf("Digite o PIB: \n");
            scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
            scanf("%i", &numPontosTuristicos2);
    printf("\n");

    //Inserindo a densidade e PIB per capita
    //Carta 1

    densidade = (float)populacao / area;  
    pib_per_capita = pib / populacao;
    densidade_invertida = (1/densidade); // Cálculo do super poder baseado na densidade
    super_poder = pib + populacao + pib_per_capita + numPontosTuristicos + densidade_invertida+area+densidade;
    //Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    densidade_invertida2 = 1/densidade2;
    super_poder2 = pib2 + populacao2 + pib_per_capita2 + numPontosTuristicos2 + densidade_invertida2+area2+densidade2;
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibe os dados das cartas
    //Carta 1
    printf("As seguintes cartas foram cadastradas\n");
    printf("Carta 1:\n");
    printf("Codigo da cidade: %s\n",codigodaCidade);
    printf("Nome da cidade: %s\n",nomedaCidade);
    printf("Populacao: %li\n",populacao);
    printf("Area: %.2f\n",area);
    printf("PIB: %.2f\n",pib);
    printf("Numero de pontos turisticos: %i\n",numPontosTuristicos);
    printf("Densidade: %f habitantes por km²\n", densidade);
    printf("PIB per capita: %.2f habitantes por km²\n\n", pib_per_capita);

    //Carta 2
    printf("Carta 2:\n");
    printf("Codigo da cidade: %s\n",codigodaCidade2);
    printf("Nome da cidade: %s\n",nomedaCidade2);
    printf("Populacao: %li\n",populacao2);
    printf("Area: %.2f\n",area2);
    printf("PIB: %.2f\n",pib2);
    printf("Numero de pontos turisticos: %i\n",numPontosTuristicos2);
    printf("Densidade: %.2f habitantes por km²\n", densidade2);
    printf("PIB per capita: %.2f habitantes por km²\n\n", pib_per_capita2);
    


    char resultadoComparacao;
    
    //Comparacao de cartas
    //Se o resultado for 0 entao a carta 1 venceu, se for 1 entao a carta 2 venceu
    printf("Comparacao de cartas\n");
    resultadoComparacao = populacao > populacao2;
    printf("Populacao: Carta1 venceu? %d\n", resultadoComparacao);
    resultadoComparacao = area > area2;
    printf("Area: Carta1 venceu? %d\n", resultadoComparacao);
    resultadoComparacao = pib > pib2;
    printf("PIB: Carta1 venceu? %d\n", resultadoComparacao);
    resultadoComparacao = numPontosTuristicos > numPontosTuristicos2;
    printf("Numero de pontos turisticos: Carta1 venceu? %d\n", resultadoComparacao);
    resultadoComparacao = (1/densidade) < (1/densidade2);
    printf("Densidade: Carta1 venceu? %d\n", resultadoComparacao);
    resultadoComparacao = pib_per_capita > pib_per_capita2;
    printf("PIB per capita: Carta1 venceu? %c\n", resultadoComparacao);
    resultadoComparacao = super_poder > super_poder2;
    printf("Super poder: Carta1 venceu? %d\n", resultadoComparacao);


    //Codigo para implementar a comparacao de cartas usando o if/else
    printf("\nComparando as cartas usanso if/else\n");
    if (populacao > populacao2) {
        printf("Carta 1 - %s: %li\n", nomedaCidade, populacao);
        printf("Carta 2 - %s: %li\n", nomedaCidade2, populacao2);
        printf("Carta 1(%s) venceu na populacao.\n\n", nomedaCidade);

    }else{printf("Carta 1 - %s: %li\n", nomedaCidade, populacao);
        printf("Carta 2 - %s: %li\n", nomedaCidade2, populacao2);
        printf("Carta 2 venceu na populacao.\n\n");}
        
    if(area > area2) {
        printf("Carta 1 - %s: %.2f\n", nomedaCidade, area);
        printf("Carta 2 - %s: %.2f\n", nomedaCidade2, area2);
        printf("Carta 1 venceu na area.\n\n");
    }else{
        printf("Carta 1 - %s: %.2f\n", nomedaCidade, area);
        printf("Carta 2 - %s: %.2f\n", nomedaCidade2, area2);
        printf("Carta 2 venceu na area.\n\n");}

    if(pib > pib2) {
        printf("Carta 1 - %s: %.2f\n", nomedaCidade, pib);
        printf("Carta 2 - %s: %.2f\n", nomedaCidade2, pib2);
        printf("Carta 1 venceu no PIB.\n\n");
    }else{
        printf("Carta 1 - %s: %.2f\n", nomedaCidade, pib);
        printf("Carta 2 - %s: %.2f\n", nomedaCidade2, pib2);
        printf("Carta 2 venceu no PIB.\n\n");}

    if(numPontosTuristicos > numPontosTuristicos2) {
        printf("Carta 1 - %s: %i\n", nomedaCidade, numPontosTuristicos);
        printf("Carta 2 - %s: %i\n", nomedaCidade2, numPontosTuristicos2);
        printf("Carta 1 venceu no numero de pontos turisticos.\n\n");
    }else{
        printf("Carta 1 - %s: %i\n", nomedaCidade, numPontosTuristicos);
        printf("Carta 2 - %s: %i\n", nomedaCidade2, numPontosTuristicos2);
        printf("Carta 2 venceu no numero de pontos turisticos.\n\n");}

    if((1/densidade) < (1/densidade2)) {
        printf("Carta 1 - %s: %.2f\n", nomedaCidade, densidade_invertida);
        printf("Carta 2 - %s: %.2f\n", nomedaCidade2, densidade_invertida2);
        printf("Carta 1 venceu na densidade.\n\n");
    }else{
        printf("Carta 1 - %s: %i\n", nomedaCidade, numPontosTuristicos);
        printf("Carta 2 - %s: %i\n", nomedaCidade2, numPontosTuristicos2);
        printf("Carta 2 venceu na densidade.\n\n");}

    if(pib_per_capita > pib_per_capita2) {
        printf("Carta 1 - %s: %.2f\n", nomedaCidade, pib_per_capita);
        printf("Carta 2 - %s: %.2f\n", nomedaCidade2, pib_per_capita2);
        printf("Carta 1 venceu no PIB per capita.\n\n");
    }else{
        printf("Carta 1 - %s: %.2f\n", nomedaCidade, pib_per_capita);
        printf("Carta 2 - %s: %.2f\n", nomedaCidade2, pib_per_capita2);
        printf("Carta 2 venceu no PIB per capita.\n\n");}

    if(super_poder > super_poder2) {
        printf("Carta 1 - %s: %.2f\n", nomedaCidade, super_poder);
        printf("Carta 2 - %s: %.2f\n", nomedaCidade2, super_poder2);
        printf("Carta 1 venceu no super poder.\n\n");
    }else{
        printf("Carta 1 - %s: %.2f\n", nomedaCidade, super_poder);
        printf("Carta 2 - %s: %.2f\n", nomedaCidade2, super_poder2);
        printf("Carta 2 venceu no super poder.");


























    }
    




    return 0;
}
