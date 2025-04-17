#include <stdio.h>


int main(){
  
     // Dados da carta C01 (podem ser substituídos futuramente pelo usuário)
    int população = 540756;                 // População da cidade        
    int pontosTuristicos = 29;              // Número de pontos turísticos
    char codigo[5] = "A01";                 // Código da carta (string de até 4 caracteres + '\0')        
    char estado[20] = "minasGerais";        // Nome do estado (até 19 caracteres + '\0')
    char cidade[20] = "juizDefora";         // Nome da cidade
    double area = 1.436;                    // Área da cidade em km²
    double pib = 20.29755928;               // Produto Interno Bruto da cidade

     // Dados da carta C02
    int população2 = 540756;
    int pontosTuristicos2 = 15;
    char codigo2[5] = "B01";
    char estado2[20] = "rioDeJaneiro";
    char cidade2[20] = "rioDasOstras";
    double area2 = 228;
    double pib2 = 56.09692;

    int cartas;
   
    // Pergunta ao usuário quantas cartas serão usadas na rodada
    printf("Quantas cartas você irá utilizar nesta rodada? ");
    scanf("%d", cartas);

    // Entrada dos dados da primeira carta (C01)
    printf("Código da carta: ");
    scanf("%s", &codigo);


    printf("Digite os atributos da %s\n", codigo);

    //carta C01
    printf("Digite o Estado: ");
    scanf("%s", &estado);

    printf("Nome da Cidade: ");
    scanf(" %s", &cidade);

    printf("População: ");
    scanf("%d", &população);

    printf("Área em km²: ");
    scanf("%f", &area);

    printf("PIB bruto: ");
    scanf("%f", &pib);
    
    printf("Quantos pontos turistico: ");
    scanf("%d", &pontosTuristicos);

    // Exibe os dados da primeira carta
    printf("Carta A01\n");
    printf("Estado de: %s - Cidade: %s - Carta: %s\n", estado, cidade, codigo);
    printf("População: %d\n", população);
    printf("Área em km²: %.3f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    
    // Entrada dos dados da segunda carta (C02)
    printf("Código da carta: ");
    scanf("%s", &codigo);

    printf("Digite os atributos da %s\n", codigo2);

    //carta C02
    printf("Digite o Estado: ");
    scanf("%s", &estado2);

    printf("Nome da Cidade: ");
    scanf(" %s", &cidade2);

    printf("População: ");
    scanf("%d", &população2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB bruto: ");
    scanf("%f", &pib2);
    
    printf("Quantos pontos turistico: ");
    scanf("%d", &pontosTuristicos2);

    // Exibe os dados da segunda carta
    printf("Carta A01\n");
    printf("Estado de: %s - Cidade: %s - Carta: %s\n", estado2, cidade2, codigo2);
    printf("População: %d\n", população2);
    printf("Área em km²: %.3f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
