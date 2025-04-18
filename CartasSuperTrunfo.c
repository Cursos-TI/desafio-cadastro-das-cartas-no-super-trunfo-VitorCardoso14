#include <stdio.h>



int main() {
    //carta 1
       char Estado1[50], Codigo_da_Carta1[50], Nome_da_Cidade1[50];
       int Populacao1, Numero_de_Pontos_Turisticos1;
       float Area1, PIB1, Densidade_Populacional1, PIB_per_Capita1, Super_Poder1;


       printf("Digite o Estado da Carta 1: ");
       scanf("%s", &Estado1);

       printf("Digite o Código da Carta: ");
       scanf("%s", &Codigo_da_Carta1);

       printf("Digite o Nome da Cidade: ");
       scanf("%s", &Nome_da_Cidade1);

       printf("Digite a População: ");
       scanf("%d", &Populacao1);

       printf("Digite a Área(em km²): ");
       scanf("%f", &Area1);

       printf("Digite o PIB: ");
       scanf("%f", &PIB1);
       
       printf("Digite o Número de Pontos Turisticos: ");
       scanf("%d", &Numero_de_Pontos_Turisticos1);

       Densidade_Populacional1 = Populacao1 / Area1;
       
       PIB_per_Capita1 = PIB1 / Populacao1;

       Super_Poder1 = Populacao1 + Numero_de_Pontos_Turisticos1 + Area1 + PIB1 + Densidade_Populacional1 + PIB_per_Capita1;

    //carta 2

       char Estado2[50], Codigo_da_Carta2[50], Nome_da_Cidade2[50];
       int Populacao2, Numero_de_Pontos_Turisticos2;
       float Area2, PIB2, Densidade_Populacional2, PIB_per_Capita2, Super_Poder2;

       printf("Digite o Estado da Carta 2: ");
       scanf("%s", &Estado2);

       printf("Digite o Código da Carta: ");
       scanf("%s", &Codigo_da_Carta2);

       printf("Digite o Nome da Cidade: ");
       scanf("%s", &Nome_da_Cidade2);

       printf("Digite a População: ");
       scanf("%d", &Populacao2);

       printf("Digite a Área(em km²): ");
       scanf("%f", &Area2);

       printf("Digite o PIB: ");
       scanf("%f", &PIB2);

       printf("Digite o Número de Pontos Turisticos: ");
       scanf("%d", &Numero_de_Pontos_Turisticos2);

       Densidade_Populacional2 = Populacao2 / Area2;

       PIB_per_Capita2 = PIB2 / Populacao2;

       Super_Poder2 = Populacao2 + Numero_de_Pontos_Turisticos2 + Area2 + PIB2 + Densidade_Populacional2 + PIB_per_Capita2;

       printf("Carta 1\n");
       printf("Estado: %s\n" , Estado1);
       printf("Código da Carta: %s\n", Codigo_da_Carta1);
       printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
       printf("População: %d\n", Populacao1);
       printf("Área(em km²): %.2f\n", Area1);
       printf("PIB: %.2f\n", PIB1);
       printf("Números de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos1);
       printf("Densidade Populacional: %.2f\n", Densidade_Populacional1);
       printf("PIB per Capita: %.2f\n", PIB_per_Capita1);
       printf("Super Poder: %.1f\n\n", Super_Poder1);

       printf("Carta 2\n");
       printf("Estado: %s\n" , Estado2);
       printf("Código da Carta: %s\n", Codigo_da_Carta2);
       printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
       printf("População: %d\n", Populacao2);
       printf("Área(em km²): %.2f\n", Area2);
       printf("PIB: %.2f\n", PIB2);
       printf("Números de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos2);
       printf("Densidade Populacional: %.2f\n", Densidade_Populacional2);
       printf("PIB per Capita: %.2f\n", PIB_per_Capita2);
       printf("Super Poder: %.1f\n\n", Super_Poder2);

    return 0;
}
