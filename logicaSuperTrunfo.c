// Desafio Super Trunfo - Países ok
// Tema 2 - Comparação das Cartas ok
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. ok
// Siga os comentários para implementar cada parte do desafio. ok

    // Definição das variáveis para armazenar as propriedades das cidadesok
    // Você pode utilizar o código do primeiro desafio ok

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades ok
    // utilizando a função scanf para capturar as entradas.ok
    // utilize o código do primeiro desafio ok

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

#include <stdio.h>
#include <string.h>

int main(){
    char estado1[20], estado2[20], estado3[20], estado4[20];
    char cod1[5], cod2[5], cod3[5], cod4[5];
    char cidadeA[20], cidadeB[20], cidadeC[20], cidadeD[20];
    unsigned long int populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float PIB1, PIB2, PIB3, PIB4;
    float densidade1, densidade2, densidade3, densidade4;
    float densidadeinvertida1, densidadeinvertida2, densidadeinvertida3, densidadeinvertida4;
    float pibper1,pibper2, pibper3, pibper4;
    float superpoder1, superpoder2, superpoder3, superpoder4;
    int pontos1, pontos2, pontos3, pontos4;

    //início do primeiro estado
    printf("Digite o Nome do Primeiro Estado: \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0; // Remove a nova linha

    printf("Digite o código da cidade (Ex: A01, B02): \n");
    fgets(cod1, sizeof(cod1), stdin);
    cod1[strcspn(cod1, "\n")] = 0; // Remove a nova linha

    printf("Digite o Nome da Cidade: \n");
    fgets(cidadeA, sizeof(cidadeA), stdin);
    cidadeA[strcspn(cidadeA, "\n")] = 0; // Remove a nova linha
    
    printf("Digite o número da população: \n");
    scanf("%lu", &populacao1);

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    while ((getchar()) != '\n');

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos1);    

    densidade1 = populacao1 / area1; //calcula densidade demográfica;

    pibper1 = PIB1 / populacao1; //calcula PIB per capita;

    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", cod1);
    printf("Cidade: %s \n", cidadeA);
    printf("Número da população: %lu \n", populacao1);
    printf("a área total é de %.3f km²\n", area1);
    printf("o PIB que a cidade possui é de %.3f \n", PIB1);
    printf("A densidade populacional é: %.3f \n", densidade1);
    printf("O PIB per capita é: %.3f \n", pibper1);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos1);
   
    //fim do primeiro estado
    
    while ((getchar()) != '\n');

    //início do segundo estado
    printf("\nDigite o Nome do Segundo Estado: \n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0; // Remove a nova linha

    printf("Digite o código da cidade (Ex: A01, B02): \n");
    fgets(cod2, sizeof(cod2), stdin);
    cod2[strcspn(cod2, "\n")] = 0; // Remove a nova linha

    //início da segunda cidade
    printf("Digite o Nome da Segunda Cidade: \n");
    fgets(cidadeB, sizeof(cidadeB), stdin);
    cidadeB[strcspn(cidadeB, "\n")] = 0; // Remove a nova linha
    
    printf("Digite o número da população: \n");
    scanf("%lu", &populacao2);

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    while ((getchar()) != '\n');

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos2);    
    
    densidade2 = populacao2 / area2; //calcula densidade demográfica;

    pibper2 = PIB2 / populacao2; //calcula PIB per capita;

    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", cod2);
    printf("A %s tem uma população de %.3lu \n", cidadeB, populacao2);
    printf("a área total é de %.3f \n", area2);
    printf("o PIB que a cidade possui é de %.3f \n", PIB2);
    printf("A densidade populacional é: %.3f \n", densidade2);
    printf("O PIB per capita é: %.3f \n", pibper2);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos2);

    //fim da segunda cidade

    while ((getchar()) != '\n');

    /* Inverte a densidade populacional da primeira carta para usar na soma
    (para favorecimento de menores densidades)*/
    densidadeinvertida1 = 1 / densidade1;
    
    //soma propriedades da primeira carta
    superpoder1 = (float) populacao1 + area1 + PIB1 + densidadeinvertida1 + pibper1 + (float) pontos1;

    /* Inverte a densidade populacional da primeira carta para usar na soma
    (para favorecimento de menores densidades)*/
    densidadeinvertida2 = 1 / densidade2;

    //soma propriedades da segunda carta
    superpoder2 = (float) populacao2 + area2 + PIB2 + densidadeinvertida2 + pibper2 + (float) pontos2;

    //comparação da população
    if (populacao1 > populacao2){
        printf("Cidade %s tem a maior população! \n", cidadeA);
    } else {
        printf("Cidade %s tem a maior população! \n", cidadeB);
    }
    //comparação da área
    if (area1 > area2){
        printf("Cidade %s tem a maior área! \n", cidadeA);
    } else {
        printf("Cidade %s tem a maior área! \n", cidadeB);
    }
    //comparação do PIB
    if (PIB1 > PIB2){
        printf("Cidade %s tem o maior PIB! \n", cidadeA);
    } else {
        printf("Cidade %s tem o maior PIB! \n", cidadeB);
    }
    //comparação dos pontos turísticos
    if (pontos1 > pontos2){
        printf("Cidade %s tem mais pontos turísticos! \n", cidadeA);
    } else {
        printf("Cidade %s tem mais pontos turísticos! \n", cidadeB);
    }
    //comparação densidade demográfica
    if (densidadeinvertida1 > densidadeinvertida2){
        printf("Cidade %s tem a menor densidade demográfica! \n", cidadeA);
    } else {
        printf("Cidade %s tem a menor densidade demográfica! \n", cidadeB);
    }
    //comparação pib per capita
    if (pibper1 > pibper2){
        printf("Cidade %s tem mais pontos turísticos! \n", cidadeA);
    } else {
        printf("Cidade %s tem mais pontos turísticos! \n", cidadeB);
    }
    //comparação superpoder
    if (superpoder1 > superpoder2){
        printf("Cidade %s tem o maior SUPERPODER \n", cidadeA);
    } else {
        printf("Cidade %s tem o maior SUPERPODER! \n", cidadeB);
    }
    //exibição de resultados
    if (superpoder1 > superpoder2){
        printf("A cidade vencedora é: %s", cidadeA);
    } else {
        printf("A cidade vencedora é: %s", cidadeB);
    }

    //início do terceiro estado
    printf("\nDigite o Nome do Terceiro Estado: \n");
    fgets(estado3, sizeof(estado3), stdin);
    estado3[strcspn(estado3, "\n")] = 0; // Remove a nova linha

    printf("Digite o código da cidade (Ex: A01, B02): \n");
    fgets(cod3, sizeof(cod3), stdin);
    cod3[strcspn(cod3, "\n")] = 0; // Remove a nova linha

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');

    //início da terceira cidade

    printf("\nDigite o Nome da Terceira Cidade: \n");
    fgets(cidadeC, sizeof(cidadeC), stdin);
    cidadeC[strcspn(cidadeC, "\n")] = 0; // Remove a nova linha

    printf("Digite o número da população: \n");
    scanf("%lu", &populacao3);

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area3);

    while ((getchar()) != '\n');

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB3);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos3);    

    densidade3 = populacao3 / area3; //calcula densidade demográfica;

    pibper3 = PIB3 / populacao3; //calcula PIB per capita;

    printf("Estado: %s\n", estado3);
    printf("Código da Carta: %s\n", cod3);
    printf("A %s tem uma população de %.3lu \n", cidadeC, populacao3);
    printf("a área total é de %.3f \n", area3);
    printf("o PIB que a cidade possui é de %.3f\n", PIB3);
    printf("A densidade populacional é: %.3f\n", densidade3);
    printf("O PIB per capita é: %.3f\n", pibper3);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos3);
    
    //fim da terceira cidade
    
    while ((getchar()) != '\n');
    
    //início do quarto estado
    printf("\nDigite o Nome do Quarto Estado: \n");
    fgets(estado4, sizeof(estado4), stdin);
    estado4[strcspn(estado4, "\n")] = 0; // Remove a nova linha

    printf("Digite o código da cidade (Ex: A01, B02): \n");
    fgets(cod4, sizeof(cod4), stdin);
    cod4[strcspn(cod4, "\n")] = 0; // Remove a nova linha

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');

     //início da quarta cidade
    printf("\nDigite o Nome da Quarta Cidade: \n");
    fgets(cidadeD, sizeof(cidadeD), stdin);
    cidadeD[strcspn(cidadeD, "\n")] = 0; // Remove a nova linha

    printf("Digite o número da população: \n");
    scanf("%lu", &populacao4);

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area4);

    while ((getchar()) != '\n');

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB4);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos4);    

    densidade4 = populacao4 / area4; //calcula densidade demográfica;

    pibper4 = PIB4 / populacao4; //calcula PIB per capita;

    printf("Estado: %s\n", estado4);
    printf("Código da Carta: %s\n", cod4);
    printf("A %s tem uma população de %.3lu \n", cidadeD, populacao4);
    printf("a área total é de %.3f \n", area4);
    printf("o PIB que a cidade possui é de %.3f\n", PIB4);
    printf("A densidade populacional é: %.3f\n", densidade4);
    printf("O PIB per capita é: %.3f\n", pibper4);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos4);
    //fim da quarta cidade

/* Inverte a densidade populacional da primeira carta para usar na soma
    (para favorecimento de menores densidades)*/
    densidadeinvertida3 = 1 / densidade3;
    
    //soma propriedades da primeira carta
    superpoder3 = (float) populacao3 + area3 + PIB3 + densidadeinvertida3 + pibper3 + (float) pontos3;

    /* Inverte a densidade populacional da primeira carta para usar na soma
    (para favorecimento de menores densidades)*/
    densidadeinvertida4 = 1 / densidade4;

    //soma propriedades da segunda carta
    superpoder4 = (float) populacao4 + area4 + PIB4 + densidadeinvertida4 + pibper4 + (float) pontos4;

    //início da comparação das cartas
    printf ("Populacao: Carta 3 (%lu) vs Carta 4 (%lu) - Vencedor: %s\n", populacao3, populacao4, populacao3 > populacao4 ? "Carta 3" : "Carta 4");

    printf ("Area: Carta 3 (%.3f) vs Carta 4 (%.3f) - Vencedor: %s\n", area3, area4, area3 > area4 ? "Carta 3" : "Carta 4");

    printf ("PIB: Carta 3 (%.3f) vs Carta 4 (%.3f) - Vencedor: %s\n", PIB3, PIB4, PIB3 > PIB4 ? "Carta 3" : "Carta 4");

    printf ("Pontos Turísticos: Carta 3 (%d) vs Carta 4 (%d) - Vencedor: %s\n", pontos3, pontos4, pontos3 > pontos4 ? "Carta 3" : "Carta 4");

    printf ("Densidade populacional: Carta 3 (%.6f) vs Carta 4 (%.6f) - Vencedor: %s\n", densidadeinvertida3, densidadeinvertida4, densidadeinvertida3 > densidadeinvertida4 ? "Carta 3" : "Carta 4");

    printf ("PiB per capita: Carta 3 (%.3f) vs Carta 4 (%.3f) - Vencedor: %s\n", pibper3, pibper4, pibper3 > pibper4 ? "Carta 3" : "Carta 4");

    printf ("SuperPoder: Carta 3 (%.3f) vs Carta 4 (%.3f) - Vencedor: %s\n", superpoder3, superpoder4, superpoder3 > superpoder4 ? "Carta 3" : "Carta 4");

    return 0;
}