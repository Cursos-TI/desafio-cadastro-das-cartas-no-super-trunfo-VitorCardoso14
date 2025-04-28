#include <stdio.h>



int main() {
   //carta 1
   //tipos de variais que vão armazenar as informações atraves do scanf
       char Estado1[50], Codigo_da_Carta1[50], Nome_da_Cidade1[50], Estado2[50], Codigo_da_Carta2[50], Nome_da_Cidade2[50];
       int Numero_de_Pontos_Turisticos1, Numero_de_Pontos_Turisticos2,
       Populacao, Area, PIB, Numero_de_Pontos_Turisticos, Densidade_Populacional, PIB_per_Capita, Super_Poder;
       float Area1, PIB1, Densidade_Populacional1, PIB_per_Capita1, Super_Poder1, Area2, PIB2, Densidade_Populacional2, PIB_per_Capita2, Super_Poder2;
       unsigned long int Populacao1, Populacao2;

   //printf para solicitar os valores
   //scanf para armazenar os valores

       printf("Digite o Estado da Carta 1: ");
       scanf("%s", &Estado1);

       printf("Digite o Código da Carta: ");
       scanf("%s", &Codigo_da_Carta1);

       printf("Digite o Nome da Cidade: ");
       scanf("%s", &Nome_da_Cidade1);

       printf("Digite a População: ");
       scanf("%lu", &Populacao1);

       printf("Digite a Área(em km²): ");
       scanf("%f", &Area1);

       printf("Digite o PIB: ");
       scanf("%f", &PIB1);
       
       printf("Digite o Número de Pontos Turisticos: ");
       scanf("%d", &Numero_de_Pontos_Turisticos1);

   //divisão da população pela area para gerar a densidade populacional

       Densidade_Populacional1 = Populacao1 / Area1;

   //divisão do PIB pela população para gerar o PIB per capita
       
       PIB_per_Capita1 = PIB1 / Populacao1;

   //soma de todos os atributos para ser apresentado junto com os outros atributos das cartas

       Super_Poder1 = Populacao1 + Numero_de_Pontos_Turisticos1 + Area1 + PIB1 - Densidade_Populacional1 + PIB_per_Capita1;





   //carta 2

   //printf para solicitar os valores
   //scanf para armazenar os valores

       printf("Digite o Estado da Carta 2: ");
       scanf("%s", &Estado2);

       printf("Digite o Código da Carta: ");
       scanf("%s", &Codigo_da_Carta2);

       printf("Digite o Nome da Cidade: ");
       scanf("%s", &Nome_da_Cidade2);

       printf("Digite a População: ");
       scanf("%lu", &Populacao2);

       printf("Digite a Área(em km²): ");
       scanf("%f", &Area2);

       printf("Digite o PIB: ");
       scanf("%f", &PIB2);

       printf("Digite o Número de Pontos Turisticos: ");
       scanf("%d", &Numero_de_Pontos_Turisticos2);

   //divisão da população pela area para gerar a densidade populacional

       Densidade_Populacional2 = Populacao2 / Area2;

   //divisão do PIB pela população para gerar o PIB per capita

       PIB_per_Capita2 = PIB2 / Populacao2;

   //soma de todos os atributos para ser apresentado junto com os outros atributos das cartas

       Super_Poder2 = Populacao2 + Numero_de_Pontos_Turisticos2 + Area2 + PIB2 - Densidade_Populacional2 + PIB_per_Capita2;

   //Comparação dos valores para determinar quem ganhou(carta 1 = 1 e carta 2 = 0)

       Populacao = Populacao1 > Populacao2;
       
       Area = Area1 > Area2;

       PIB = PIB1 > PIB2;

       Numero_de_Pontos_Turisticos = Numero_de_Pontos_Turisticos1 > Numero_de_Pontos_Turisticos2;

       Densidade_Populacional = Densidade_Populacional1 < Densidade_Populacional2;

       PIB_per_Capita = PIB_per_Capita1 > PIB_per_Capita2;

       Super_Poder = Super_Poder1 > Super_Poder2;

   //Apresentação de todos os atributos das cartas que foram registrados    

       printf("Carta 1\n");
       printf("Estado: %s\n" , Estado1);
       printf("Código da Carta: %s\n", Codigo_da_Carta1);
       printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
       printf("População: %lu\n", Populacao1);
       printf("Área: %.2f km²\n", Area1);
       printf("PIB: %.2f bilhões de reais\n", PIB1);
       printf("Números de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos1);
       printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
       printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);
       printf("Super Poder: %.1f\n\n", Super_Poder1);

       printf("Carta 2\n");
       printf("Estado: %s\n" , Estado2);
       printf("Código da Carta: %s\n", Codigo_da_Carta2);
       printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
       printf("População: %lu\n", Populacao2);
       printf("Área: %.2f km²\n", Area2);
       printf("PIB: %.2f bilhões de reais\n", PIB2);
       printf("Números de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos2);
       printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
       printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);
       printf("Super Poder: %.1f\n\n", Super_Poder2);

   //Comparação das carta se a carta 1 for maior apresenta 1 indicando que ela ganhou se for menor que a carta 2 aparece 0 indicando que a carta 2 ganhou
   //apenas na densidade populacional foi usado < por que o menor é quem ganha


   //pode ser comparado dessa forma usando a variavel da comparação acima
       printf("População: Carta %d Venceu!\n", Populacao);
       printf("Área: Carta %d Venceu!\n", Area);
       printf("PIB: Carta %d Venceu!\n", PIB);
   //ou comparado dessa forma comparando os dois valores direto no printf
       printf("Número de Pontos Turisticos: Carta %d Venceu!\n", Numero_de_Pontos_Turisticos1 > Numero_de_Pontos_Turisticos2);
       printf("Densidade Populacional: Carta %d Venceu!\n", Densidade_Populacional1 < Densidade_Populacional2);
       printf("PIB per Capita: Carta %d Venceu!\n", PIB_per_Capita1 > PIB_per_Capita2);
       printf("Super Poder: Carta %d Venceu!\n", Super_Poder1 > Super_Poder2);



    return 0;
}
