#include <stdio.h>

//Codigo Super Trunfo (novato).

int main(){

// Declarações de variaveis.
 
          char Estado1[3], Estado2[3], cod1[4], cod2[4], cid1[20],cid2[20];
          float aria1,aria2,pib1,pib2;
          int pop1,pop2,pont1,pont2;



// Captura de dados das cartas.

        printf("         Cadastro de Cartas Super Trunfo:  \n");
           

           printf("\n");

           printf("      Dados Carta 1: \n");

           printf("\n");


           printf("Digite Estado da Carta 01: ");
           scanf("%s",Estado1);
           printf("\n");

           printf("Digite codigo da Carta 01: ");
           scanf("%s",cod1);
           printf("\n");

           printf("Digite nome da cidade da Carta 01: ");
           scanf("%s",cid1);
           printf("\n");

           printf("Digite população cidade da Carta 01: ");
           scanf("%d",&pop1);
           printf("\n");

           printf("Digite ária da cidade Carta 01: ");
           scanf("%f",&aria1);
           printf("\n");

           printf("Digite pib da cidade da Carta 01: ");
           scanf("%f",&pib1);
           printf("\n");

           printf("Digite quantidade de pontos turisticos da Carta 01: ");
           scanf("%d",&pont1);
           printf("\n");

           printf("\n");

           printf("      Dados Carta 2: \n");

           printf("\n");

           printf("Digite Estado da Carta 02: ");
           scanf("%s",Estado2);
           printf("\n");

           printf("Digite codigo da Carta 02: ");
           scanf("%s",cod2);
           printf("\n");

           printf("Digite nome da cidade da Carta 02: ");
           scanf("%s",cid2);
           printf("\n");


           printf("Digite população cidade da Carta 02: ");
           scanf("%d",&pop2);
           printf("\n");

         printf("Digite ária da cidade Carta 02: ");
         scanf("%f",&aria2);
         printf("\n");


         printf("Digite pib da cidade da Carta 02: ");
         scanf("%f",&pib2);
         printf("\n");

         printf("Digite quantidade de pontos turisticos da Carta 02: ");
         scanf("%d",&pont2);
         printf("\n");


//Exibiçao dos dados da carta1 na tela.  

        printf("          Dados Carta 01:  \n");
        printf("\n");


        printf("Estado: %s \n",Estado1);
        printf("Codigo: %s \n",cod1);
        printf("Cidade: %s \n",cid1);
        printf("População: %d \n",pop1);
        printf("Ária: %f \n",aria1);
        printf("Pib: %f \n",pib1);
        printf("Pontos turisticos: %d \n",pont1);
        printf("\n");
   
// Exibição dos dados da carta 2 na tela. 

        printf("Dados da Carta 02: \n");
        printf("\n");


        printf("Estado: %s \n",Estado2);
        printf("Codigo: %s \n",cod2);
        printf("Cidade: %s \n",cid2);
        printf("População: %d \n",pop2);
        printf("Ária: %f \n",aria2);
        printf("Pib: %f \n",pib2);
        printf("Pontos turisticos: %d \n",pont2);

        printf("\n");







}