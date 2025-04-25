#include <stdio.h>


int main(){
    // Pergunta ao usuário quantas cartas serão usadas na rodada
    int cartas;
    printf("Quantas cartas você irá utilizar nesta rodada? ");
    scanf("%d", &cartas);


     // Dados da carta C01 (podem ser substituídos futuramente pelo usuário)
    int populacao1;                 // População da cidade        
    int pontosTuristicos1;              // Número de pontos turísticos
    char codigo1[5];                 // Código da carta (string de até 4 caracteres + '\0')        
    char estado1[20];        // Nome do estado (até 19 caracteres + '\0')
    char cidade1[20];         // Nome da cidade
    float area1;                    // Área da cidade em km²
    float pib1;               // Produto Interno Bruto da cidade

    printf("---Entrada de dados da carta C01---\n");
    // Entrada dos dados da primeira carta (C01)
    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Digite os atributos da %s\n", codigo1);

    //carta C01
    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB bruto: ");
    scanf("%f", &pib1);
    
    printf("Quantos pontos turistico: ");
    scanf("%d", &pontosTuristicos1);

    //calculo para a carta C01
    float densidadePopulacional1;
    float pibperCapita1;
    densidadePopulacional1 = populacao1 / area1;
    pibperCapita1 = pib1 / populacao1;
    
    // Exibe os dados da primeira carta
    printf("***Carta C01***\n");
    printf("Estado de: %s - Cidade: %s - Carta: %s\n", estado1, cidade1, codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km^2\n", area1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("PIB: %.6f\n", pib1);
    printf("Pib per Capita: %.6f reais\n", pibperCapita1);
    printf("Densidade populacional: %.2f hab/km^2\n", densidadePopulacional1);
    

      // Dados da carta C02
      int populacao2;
      int pontosTuristicos2;
      char codigo2[5];
      char estado2[20];
      char cidade2[20];
      float area2;
      float pib2;
  

    printf("Perfeito!\n");
   
    printf("---Entrada de dados da carta C02---\n");
    // Entrada dos dados da segunda carta (C02)
    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Digite os atributos da %s\n", codigo2);

    //carta C02
    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB bruto: ");
    scanf("%f", &pib2);
    
    printf("Quantos pontos turistico: ");
    scanf("%d", &pontosTuristicos2);

    //calculo para a carta C02
    float densidadePopulacional2 = populacao2 / area2;
    float pibperCapita2 = pib2 / populacao2;

    // Exibe os dados da segunda carta
    printf("***Carta C02***\n");
    printf("Estado de: %s - Cidade: %s - Carta: %s\n", estado2, cidade2, codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km^2\n", area2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("PIB: %.6f\n", pib2);
    printf("Pib per Capita: %.6f reais\n", pibperCapita2);
    printf("Densidade populacional: %.2f hab/km^2\n", densidadePopulacional2);
    
    
    return 0;
}
