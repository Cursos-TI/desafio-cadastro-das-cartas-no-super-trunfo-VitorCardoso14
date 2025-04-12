#include <stdio.h>



int main() {
    //carta 1
       char Estado1[20], Codigo_da_Carta1[20], Nome_da_Cidade1[20];


       printf("Digite o Estado da Carta 1: \n");
       scanf("%s", &Estado1);

       printf("Digite o Código da Carta: \n");
       scanf("%s", &Codigo_da_Carta1);

       printf("Digite o Nome da Cidade: \n");
       scanf("%s", &Nome_da_Cidade1);

    //carta 2

       char Estado2[20], Codigo_da_Carta2[20], Nome_da_Cidade2[20];

       printf("Digite o Estado da Carta 2: \n");
       scanf("%s", &Estado2);

       printf("Digite o Código da Carta: \n");
       scanf("%s", &Codigo_da_Carta2);

       printf("Digite o Nome da Cidade: \n");
       scanf("%s", &Nome_da_Cidade2);

       printf("Carta 1\n");
       printf("Estado: %s\n" , Estado1);
       printf("Código da Carta: %s\n", Codigo_da_Carta1);
       printf("Nome da Cidade: %s\n\n", Nome_da_Cidade1);
       printf("Carta 2\n");
       printf("Estado: %s\n" , Estado2);
       printf("Código da Carta: %s\n", Codigo_da_Carta2);
       printf("Nome da Cidade: %s\n", Nome_da_Cidade2);

    return 0;
}
