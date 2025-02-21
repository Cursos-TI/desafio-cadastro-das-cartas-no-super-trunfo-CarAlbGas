#include <stdio.h>

// Desafio Super Trunfo 
// Tema 1 - Cadastro das Cartas


int main(){
    
    // Definiçao de Variaveis usadas.

    char  EstCar1 = 'A',EstCar2 = 'B';                                                                                        
    char  CodCar1[4] = "A01", NomeCidCar1[20] = "cidade1", CodCar2[4] = "A01", NomeCidCar2[20] = "cidade2";    
    float AriaCar1 = 1.1, PibCar1 = 1.1, AriaCar2 = 1.1, PibCar2 = 1.1;                                        
    int   PopCar1 = 1, PontTurCar1 = 1, PopCar2 = 1, PontTurCar2 = 1;                                          

    

    // Captura de Dados das cartas .                                  

        printf("Cadastro de Cartas Super Trunfo. \n ");                                                                
        printf("    Cadastro Carta 1: \n");
        printf("\n"); 
                                                                                        
        printf("Digite Estado para carta 1: ");                                                                                
        scanf("%c",&EstCar1);
        printf("\n");

        printf("Digite codigo para carta 1: ");
        scanf("%s",&CodCar1);
        printf("\n");

        printf("Digite nome da cidade para carta 1: ");
        scanf("%s",&NomeCidCar1);
        printf("\n");

        printf("Digite População da cidade para carta 1: ");
        scanf("%d",&PopCar1);
        printf("\n");

        printf("Digite ária da cidade para carta 1: ");
        scanf("%f",&AriaCar1);
        printf("\n");

        printf("Digite pib da Cidade para carta 1: ");
        scanf("%f",&PibCar1);
        printf("\n");

        printf("Digite quantidade de pontos turisticos da Cidade para carta 1: ");
        scanf("%d",&PontTurCar1);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("    Cadastro Carta 2 : \n");  
                                                                                                                            
        printf("Digite Estado para carta 2: ");
        scanf("%c",&EstCar2);
        printf("\n");                                                                           
        
10
        printf("Digite codigo para carta 2: ");
        scanf("%s",&CodCar2);
        printf("\n");

        printf("Digite nome da cidade para carta 2: ");
        scanf("%s",&NomeCidCar2);
        printf("\n");

        printf("Digite População da cidade para carta 2: ");
        scanf("%d",&PopCar2);
        printf("\n");

        printf("Digite ária da cidade para carta 2: ");
        scanf("%f",&AriaCar2);
        printf("\n");

        printf("Digite pib da Cidade para carta 2: ");
        scanf("%f",&PibCar2);
        printf("\n");

        printf("Digite quantidade de pontos turisticos da Cidade para carta 2: ");
        scanf("%d",&PontTurCar2);
        printf("\n");






      
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.











    
    
    
    
    

    return 0;
}
