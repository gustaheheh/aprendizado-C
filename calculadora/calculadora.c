#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    // Inicia o programa limpando o terminal e declarando as variáveis
    system("clear");
    
    bool rodando = true;
    int numero1;
    int numero2;
    char operacao[50];
    int escolha;

    while(rodando)
    {
                
        printf("Bem-vindo à calculadora suprema feita em C!\n");
        printf("Qual operação você deseja realizar?\n");

        printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n");

        
        scanf("%d", &escolha);
        
        // Avisa o usuário qual foi a conta escolhida E guarda o nome da conta para na variável "operacao"
        switch (escolha)
        {
        case 1:
            printf("Certo, você escolheu realizar uma Adição.\n");
            strcpy(operacao, "Adicionar");
            break;
        
        case 2:
            printf("Certo, você escolheu realizar uma Subtração.\n");
            strcpy(operacao, "Subtrair");
            break;
        
        case 3:
            printf("Certo, você escolheu realizar uma Multiplicação.\n");
            strcpy(operacao, "Multiplicar");
            break;

        case 4:
            printf("Certo, você escolheu realizar uma Divisão.\n");
            strcpy(operacao, "Dividir");
            break;

        default:
            printf("ERRO: Escolha um valor válido para dar continuidade no programa.\n");
            printf("\n");
            continue;
        }

        // Solicita os números que o usuário deseja calcular
        printf("Quais números você deseja %s? (Informe Abaixo)\n", operacao);

        printf("Primeiro número: ");
        scanf("%d", &numero1);
        printf("Segundo número: ");
        scanf("%d", &numero2);

        // Switch com os resultados de cada operação
        switch(escolha)
        {
        case 1:
            printf("O resultado da Adição entre %d e %d é %d", numero1, numero2, numero1+numero2);
            break;
        
        case 2:
            printf("O resultado da Subtração entre %d e %d é %d", numero1, numero2, numero1-numero2);
            break;
        
        case 3:
            printf("O resultado da Multiplicação entre %d e %d é %d", numero1, numero2, numero1*numero2);
            break;

        case 4:
            printf("O resultado da Divisão entre %d e %d é %d", numero1, numero2, numero1/numero2);
            break;
        }

        // Por fim, a variavel "rodando" fica false, fazendo o programa fechar
        rodando = 0;
    }

}