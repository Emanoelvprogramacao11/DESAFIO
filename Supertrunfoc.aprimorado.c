#include <stdio.h>

int main() {
    char letra[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turista;
    float densidade;
    float pibcapita;

    printf("Entre A e H escolha um:\n ");
    scanf("%49s", &letra); 

    printf("O codigo da carta é:\n ");
    scanf("%49s", &codigo); 

    printf("Qual a cidade:\n ");
    scanf("%49s", &cidade); 

    printf("Qual a população:\n");
    scanf("%d", &populacao);

    printf("Qual a área:\n");
    scanf("%f", &area);

    printf("Qual o PIB:\n");
    scanf("%f", &pib);

    printf("Número de turistas:\n");
    scanf("%d", &turista);

    printf("Qual a densidade:\n");
    scanf("%f", &densidade);  

     printf("Qual a pibcapita:\n");
    scanf("%f", &pibcapita);

    printf("Letra: %s\n Código: %s\n", letra, codigo);

    printf("Cidade: %s\n População: %d\n", cidade, populacao);

    printf("Área: %.2f\n PIB: %.2f\n", area, pib);

    printf("Turistas: %d\n", turista);

    float densidade = (float) populacao / area; 
    printf("A densidade populacional é: %.2f\n", densidade);
    
    float pibcapita = (float) pib / populacao;
    printf("O valor do pib per capita é: %.2f\n", pibcapita);

    int resultadoA, resultadoB;

    resultadoA = resultadoA > resultadoB;
    resultadoB = resultadoB > resultadoA;
    printf("Qual resultado da comparação de A e B:", (resultadoA >= resultadoB));

    return 0;
}
