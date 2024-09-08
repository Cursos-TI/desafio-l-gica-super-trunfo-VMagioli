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
    int opcao, atributo1, atributo2, cidade1, cidade2;

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

    printf("\nEstado: %s\n", estado1);
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

    printf("\nEstado: %s\n", estado2);
    printf("Código da Carta: %s\n", cod2);
    printf("A %s tem uma população de %.3lu \n", cidadeB, populacao2);
    printf("a área total é de %.3f \n", area2);
    printf("o PIB que a cidade possui é de %.3f \n", PIB2);
    printf("A densidade populacional é: %.3f \n", densidade2);
    printf("O PIB per capita é: %.3f \n", pibper2);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos2);

    //fim da segunda cidade

    while ((getchar()) != '\n');

    //início do terceiro estado
    printf("\nDigite o Nome do Terceiro Estado: \n");
    fgets(estado3, sizeof(estado3), stdin);
    estado3[strcspn(estado3, "\n")] = 0; // Remove a nova linha

    printf("Digite o código da cidade (Ex: A01, B02): \n");
    fgets(cod3, sizeof(cod3), stdin);
    cod3[strcspn(cod3, "\n")] = 0; // Remove a nova linha

    //início da terceira cidade

    printf("Digite o Nome da Terceira Cidade: \n");
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

    printf("\nEstado: %s\n", estado3);
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

     //início da quarta cidade
    printf("Digite o Nome da Quarta Cidade: \n");
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
    while ((getchar()) != '\n');
    densidade4 = populacao4 / area4; //calcula densidade demográfica;

    pibper4 = PIB4 / populacao4; //calcula PIB per capita;

    printf("\nEstado: %s\n", estado4);
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
    densidadeinvertida1 = 1 / densidade1;
    
    //soma propriedades da primeira carta
    superpoder1 = (float) populacao1 + area1 + PIB1 + densidadeinvertida1 + pibper1 + (float) pontos1;

    /* Inverte a densidade populacional da primeira carta para usar na soma
    (para favorecimento de menores densidades)*/
    densidadeinvertida2 = 1 / densidade2;

    //soma propriedades da segunda carta
    superpoder2 = (float) populacao2 + area2 + PIB2 + densidadeinvertida2 + pibper2 + (float) pontos2;

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
   
   do{
    printf("\nMenu Principal\n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Pontos Turísticos\n");
    printf("5. Comparar Densidade Demográfica\n");
    printf("6. Comparar PIB per capita\n");
    printf("7. Comparar SUPERPODER\n");
    printf("8. Escolher Cidades e Atributos para comparar\n");
    printf("9. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao){
        
        //comparação da população
    case 1:
    if (populacao1 > populacao2 && populacao1 > populacao3 && populacao1 > populacao4){
        printf("Cidade %s tem a maior população! \n", cidadeA);
        printf("A cidade vencedora é: %s\n", cidadeA);
        break;
    } else if (populacao2 > populacao1 && populacao2 > populacao3 && populacao2 > populacao4) {
        printf("Cidade %s tem a maior população! \n", cidadeB);
        printf("A cidade vencedora é: %s\n", cidadeB);
        break;
    } else if (populacao3 > populacao1 && populacao3 > populacao2 && populacao3 > populacao4) {
        printf("Cidade %s tem a maior população! \n", cidadeC);
        printf("A cidade vencedora é: %s\n", cidadeC);
        break;
    } else {
        printf("Cidade %s tem a maior população! \n", cidadeD);
        printf("A cidade vencedora é: %s\n", cidadeD);
        break;
    }
        
        //comparação da área
    case 2:
    if (area1 > area2 && area1 > area3 && area1 > area4){
        printf("Cidade %s tem a maior área! \n", cidadeA);
        printf("A cidade vencedora é: %s\n", cidadeA); break;
    } else if (area2 > area1 && area2 > area3 && area2 > area4) {
        printf("Cidade %s tem a maior área! \n", cidadeB); 
        printf("A cidade vencedora é: %s\n", cidadeB); break;
    } else if (area3 > area1 && area3 > area2 && area3 > area4) {
        printf("Cidade %s tem a maior área! \n", cidadeC);
        printf("A cidade vencedora é: %s\n", cidadeC); break;
    } else {
        printf("Cidade %s tem a maior área! \n", cidadeD);
        printf("A cidade vencedora é: %s\n", cidadeD); break;
    }
        
        //comparação do PIB
    case 3:
    if (PIB1 > PIB2 && PIB1 > PIB3 && PIB1 > PIB4){
        printf("Cidade %s tem o maior PIB! \n", cidadeA);
        printf("A cidade vencedora é: %s\n", cidadeA); break;
    } else if (PIB2 > PIB1 && PIB2 > PIB3 && PIB2 > PIB4) {
        printf("Cidade %s tem o maior PIB! \n", cidadeB);
        printf("A cidade vencedora é: %s\n", cidadeB); break;
    } else if (PIB3 > PIB1 && PIB3 > PIB2 && PIB3 > PIB4) {
        printf("Cidade %s tem o maior PIB! \n", cidadeC);
        printf("A cidade vencedora é: %s\n", cidadeC); break; 
    } else {
        printf("Cidade %s tem o maior PIB! \n", cidadeD);
        printf("A cidade vencedora é: %s\n", cidadeD); break;
    }
      
        //comparação dos pontos turísticos
    case 4:
    if (pontos1 > pontos2 && pontos1 > pontos3 && pontos1 > pontos4){
        printf("Cidade %s tem mais pontos turísticos! \n", cidadeA);
        printf("A cidade vencedora é: %s\n", cidadeA); break;
    } else if (pontos2 > pontos1 && pontos2 > pontos3 && pontos2 > pontos4) {
        printf("Cidade %s tem mais pontos turísticos! \n", cidadeB);
        printf("A cidade vencedora é: %s\n", cidadeB); break;
    } else if (pontos3 > pontos1 && pontos3 > pontos2 && pontos3 > pontos4) {
        printf("Cidade %s tem mais pontos turísticos! \n", cidadeC);
        printf("A cidade vencedora é: %s\n", cidadeC); break;
    } else {
        printf("Cidade %s tem mais pontos turísticos! \n", cidadeD);
        printf("A cidade vencedora é: %s\n", cidadeD); break;
    }
        break;
    
        //comparação densidade demográfica
    case 5:
    if (densidadeinvertida1 > densidadeinvertida2 && densidadeinvertida1 > densidadeinvertida3 && densidadeinvertida1 > densidadeinvertida4){
        printf("Cidade %s tem a menor densidade demográfica! \n", cidadeA);
        printf("A cidade vencedora é: %s\n", cidadeA); break;
    } else if (densidadeinvertida2 > densidadeinvertida1 && densidadeinvertida2 > densidadeinvertida3 && densidadeinvertida2 > densidadeinvertida4) {
        printf("Cidade %s tem a menor densidade demográfica! \n", cidadeB);
        printf("A cidade vencedora é: %s\n", cidadeB); break; 
    } else if (densidadeinvertida3 > densidadeinvertida1 && densidadeinvertida3 > densidadeinvertida2 && densidadeinvertida3 > densidadeinvertida4) {
        printf("Cidade %s tem a menor densidade demográfica! \n", cidadeC);
        printf("A cidade vencedora é: %s\n", cidadeC); break;
    } else {
        printf("Cidade %s tem a menor densidade demográfica! \n", cidadeD);
        printf("A cidade vencedora é: %s\n", cidadeD); break;
    }
        break;
        
        //comparação pib per capita
    case 6:
    if (pibper1 > pibper2 && pibper1 > pibper3 && pibper1 > pibper4){
        printf("Cidade %s tem o maior PIB per capita! \n", cidadeA);
        printf("A cidade vencedora é: %s\n", cidadeA); break;
    } else if (pibper2 > pibper1 && pibper2 > pibper3 && pibper2 > pibper4) {
        printf("Cidade %s tem o maior PIB per capita! \n", cidadeB);
        printf("A cidade vencedora é: %s\n", cidadeB); break;
    } else if (pibper3 > pibper1 && pibper3 > pibper2 && pibper3 > pibper4) {
        printf("Cidade %s tem o maior PIB per capita! \n", cidadeC);
        printf("A cidade vencedora é: %s\n", cidadeC); break;
    } else {
        printf("Cidade %s tem o maior PIB per capita! \n", cidadeD);
        printf("A cidade vencedora é: %s\n", cidadeD); break;
    }
        

        //comparação superpoder
    case 7:
    if (superpoder1 > superpoder2 && superpoder1 > superpoder3 && superpoder1 > superpoder4){
        printf("Cidade %s tem o maior SUPERPODER! \n", cidadeA);
        printf("A cidade vencedora é: %s\n", cidadeA); break;
    } else if (superpoder2 > superpoder1 && superpoder2 > superpoder3 && superpoder2 > superpoder4) {
        printf("Cidade %s tem o maior SUPERPODER! \n", cidadeB);
        printf("A cidade vencedora é: %s\n", cidadeB); break;
    } else if (superpoder3 > superpoder1 && superpoder3 > superpoder2 && superpoder3 > superpoder4) {
        printf("Cidade %s tem o maior SUPERPODER! \n", cidadeC);
        printf("A cidade vencedora é: %s\n", cidadeC); break;
    } else {
        printf("Cidade %s tem o maior SUPERPODER! \n", cidadeD);
        printf("A cidade vencedora é: %s\n", cidadeD); break;
    }

    case 8:
        //escolha das cidades
        printf("Escolha a primeira cidade para comparar:\n");
        printf("\n");
        printf("1. %s \n", cidadeA);
        printf("2. %s \n", cidadeB);
        printf("3. %s \n", cidadeC);
        printf("4. %s \n", cidadeD);
        printf("Escolha uma opção: ");
        scanf("%d", &cidade1);

        printf("\n");

        printf("Escolha a segunda cidade para comparar:\n");
        printf("\n");
        printf("1. %s\n", cidadeA);
        printf("2. %s\n", cidadeB);
        printf("3. %s\n", cidadeC);
        printf("4. %s\n", cidadeD);
        printf("Escolha uma opção: ");
        scanf("%d", &cidade2);

        printf("\n");

        //seleção dos atributos
        printf("Escolha o primeiro atributo para comparar:\n");
        printf("\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("6. PIB per capita\n");
        printf("7. SUPERPODER\n");
        printf("Escolha uma opção: ");
        scanf("%d", &atributo1);

        printf("\n");

        printf("Escolha o segundo atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("6. PIB per capita\n");
        printf("7. SUPERPODER\n");
        printf("Escolha uma opção: ");
        scanf("%d", &atributo2);

        //declaração de variáveis para receber os valores de comparação das cidades escolhidas e atributos
        /*
        float valor1, valor2;

        valor1: Armazena o valor do primeiro atributo da primeira cidade selecionada.
        valor2: Armazena o valor do primeiro atributo da segunda cidade selecionada.
        Esses valores são do tipo float, porque os atributos que estamos comparando (como área, PIB, densidade, etc.) 
        geralmente são números com ponto flutuante.

        char *nome1, *nome2;

        nome1: Armazena o nome do primeiro atributo que está sendo comparado.
        nome2: Armazena o nome do segundo atributo que está sendo comparado.
        Essas variáveis são ponteiros para strings (char *), porque armazenam o nome dos atributos,
        como "População", "Área", "PIB", etc.

        char *nome_cidade1, *nome_cidade2;

        nome_cidade1: Armazena o nome da primeira cidade que está sendo comparada.
        nome_cidade2: Armazena o nome da segunda cidade que está sendo comparada.
        Assim como nome1 e nome2, essas variáveis são ponteiros para strings (char *), 
        e armazenam os nomes das cidades, como "São Paulo", "Rio de Janeiro", etc. */
        float valor1, valor2, valor3, valor4;
        char *nome1, *nome2;
        char *nome_cidade1, *nome_cidade2;

        //menu para identificar os valores das cidades e atributos
        switch (cidade1)
        {
        case 1: nome_cidade1 = cidadeA; break;
        case 2: nome_cidade1 = cidadeB; break;
        case 3: nome_cidade1 = cidadeC; break;
        case 4: nome_cidade1 = cidadeD; break;        
        default: printf("Cidade inválida. Escolha uma cidade entre 1 e 4."); continue;
        }
        switch (cidade2)
        {
        case 1: nome_cidade2 = cidadeA; break;
        case 2: nome_cidade2 = cidadeB; break;
        case 3: nome_cidade2 = cidadeC; break;
        case 4: nome_cidade2 = cidadeD; break;
        default: printf("Cidade inválida. Escolha uma cidade entre 1 e 4."); continue;
        }
        
        //switch para escolha do atributo 1 e comparação
        switch (atributo1)
        {
        case 1:
            valor1 = cidade1 == 1 ? populacao1 : cidade1 == 2 ? populacao2 : cidade1 == 3 ? populacao3 : populacao4;
            valor2 = cidade2 == 1 ? populacao1 : cidade2 == 2 ? populacao2 : cidade2 == 3 ? populacao3 : populacao4;
            nome1 = "População";
            break;
        
        case 2:
            valor1 = cidade1 == 1 ? area1 : cidade1 == 2 ? area2 : cidade1 == 3 ? area3 : area4;
            valor2 = cidade2 == 1 ? area1 : cidade2 == 2 ? area2 : cidade2 == 3 ? area3 : area4;
            nome1 = "Área";
            break;

        case 3:
            valor1 = cidade1 == 1 ? PIB1 : cidade1 == 2 ? PIB2 : cidade1 == 3 ? PIB3 : PIB4;
            valor2 = cidade2 == 1 ? PIB1 : cidade2 == 2 ? PIB2 : cidade2 == 3 ? PIB3 : PIB4;
            nome1 = "PIB";
            break;
        case 4:
            valor1 = cidade1 == 1 ? pontos1 : cidade1 == 2 ? pontos2 : cidade1 == 3 ? pontos3 : pontos4;
            valor2 = cidade2 == 1 ? pontos1 : cidade2 == 2 ? pontos2 : cidade2 == 3 ? pontos3 : pontos4;
            nome1 = "Pontos Turísticos";
            break;

        case 5:
            valor1 = cidade1 == 1 ? densidadeinvertida1 : cidade1 == 2 ? densidadeinvertida2 : cidade1 == 3 ? densidadeinvertida3 : densidadeinvertida4;
            valor2 = cidade2 == 1 ? densidadeinvertida1 : cidade2 == 2 ? densidadeinvertida2 : cidade2 == 3 ? densidadeinvertida3 : densidadeinvertida4;
            nome1 = "Densidade Demográfica";
            break;

        case 6: 
            valor1 = cidade1 == 1 ? pibper1 : cidade1 == 2 ? pibper2 : cidade1 == 3 ? pibper3 : pibper4;
            valor2 = cidade2 == 1 ? pibper1 : cidade2 == 2 ? pibper2 : cidade2 == 3 ? pibper3 : pibper4;
            nome1 = "PIB per capita";
            break;
        case 7:
            valor1 = cidade1 == 1 ? superpoder1 : cidade1 == 2 ? superpoder2 : cidade1 == 3 ? superpoder3 : superpoder4;
            valor2 = cidade2 == 1 ? superpoder1 : cidade2 == 2 ? superpoder2 : cidade2 == 3 ? superpoder3 : superpoder4;
            nome1 = "Super Poder";
            break;
        default: 
            printf("Opção inválida. Escolha um atributo entre 1 e 7."); continue;
        }
            
            //switch para escolha do atributo 2 e comparação
        switch (atributo2)
        {
        case 1:
            valor3 = cidade1 == 1 ? populacao1 : cidade1 == 2 ? populacao2 : cidade1 == 3 ? populacao3 : populacao4;
            valor4 = cidade2 == 1 ? populacao1 : cidade2 == 2 ? populacao2 : cidade2 == 3 ? populacao3 : populacao4;
            nome2 = "População";
        break;
        
        case 2:
            valor3 = cidade1 == 1 ? area1 : cidade1 == 2 ? area2 : cidade1 == 3 ? area3 : area4;
            valor4 = cidade2 == 1 ? area1 : cidade2 == 2 ? area2 : cidade2 == 3 ? area3 : area4;
            nome2 = "Área";
        break;

        case 3:
            valor3 = cidade1 == 1 ? PIB1 : cidade1 == 2 ? PIB2 : cidade1 == 3 ? PIB3 : PIB4;
            valor4 = cidade2 == 1 ? PIB1 : cidade2 == 2 ? PIB2 : cidade2 == 3 ? PIB3 : PIB4;
            nome2 = "PIB";
        break;
        case 4:
            valor3 = cidade1 == 1 ? pontos1 : cidade1 == 2 ? pontos2 : cidade1 == 3 ? pontos3 : pontos4;
            valor4 = cidade2 == 1 ? pontos1 : cidade2 == 2 ? pontos2 : cidade2 == 3 ? pontos3 : pontos4;
            nome2 = "Pontos Turísticos";
        break;

        case 5:
            valor3 = cidade1 == 1 ? densidadeinvertida1 : cidade1 == 2 ? densidadeinvertida2 : cidade1 == 3 ? densidadeinvertida3 : densidadeinvertida4;
            valor4 = cidade2 == 1 ? densidadeinvertida1 : cidade2 == 2 ? densidadeinvertida2 : cidade2 == 3 ? densidadeinvertida3 : densidadeinvertida4;
            nome2 = "Densidade Demográfica";
        break;

        case 6: 
            valor3 = cidade1 == 1 ? pibper1 : cidade1 == 2 ? pibper2 : cidade1 == 3 ? pibper3 : pibper4;
            valor4 = cidade2 == 1 ? pibper1 : cidade2 == 2 ? pibper2 : cidade2 == 3 ? pibper3 : pibper4;
            nome2 = "PIB per capita";
        break;
        case 7:
            valor3 = cidade1 == 1 ? superpoder1 : cidade1 == 2 ? superpoder2 : cidade1 == 3 ? superpoder3 : superpoder4;
            valor4 = cidade2 == 1 ? superpoder1 : cidade2 == 2 ? superpoder2 : cidade2 == 3 ? superpoder3 : superpoder4;
            nome2 = "Super Poder";
        break;
        default: 
            printf("Opção inválida. Escolha um atributo entre 1 e 7.\n"); continue;
        }
        
       // Exibir comparação para o primeiro atributo
            printf("\nComparação entre %s e %s:\n", nome_cidade1, nome_cidade2);

        if (valor1 == valor2) {
            printf("Atributo %s: %s e %s têm valores iguais: %.2f (Empate)\n", nome1, nome_cidade1, nome_cidade2, valor1);
        } else if (valor1 > valor2) {
            printf("Atributo %s: %s tem um valor maior: %.5f > %.5f\n", nome1, nome_cidade1, valor1, valor2);
        } else {
            printf("Atributo %s: %s tem um valor maior: %.5f > %.5f\n", nome1, nome_cidade2, valor2, valor1);
        }

        // Exibir comparação para o segundo atributo
        if (valor3 == valor4) {
            printf("Atributo %s: %s e %s têm valores iguais: %.2f (Empate)\n", nome2, nome_cidade1, nome_cidade2, valor3);
        } else if (valor3 > valor4) {
            printf("Atributo %s: %s tem um valor maior: %.5f > %.5f\n", nome2, nome_cidade1, valor3, valor4);
        } else {
            printf("Atributo %s: %s tem um valor maior: %.5f > %.5f\n", nome2, nome_cidade2, valor4, valor3);
        }
    
        //sair do programa
        case 9:
        printf("Saindo...\n");
        break;

        //nenhuma das opções
        default:
        printf("opção inválida! escolha uma opção de 1 a 7\n");
        break;
    }    
    } while (opcao != 9);
        return 0;
}