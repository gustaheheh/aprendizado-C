#include <stdio.h>
#include <string.h>

int main()
{

    int numero;
    
    printf("Bem-vindo à calculadora feita em C!\n");
    printf("Qual número você vai escolher para a multiplicação?\n");

    int valido = scanf("%d", &numero);

    if(valido == 1 && numero >= 1){
        for(int i = 0; i <= 10; i++)
        {

            int resultado = numero * i;
            printf("%d x %d = %d\n", numero, i, resultado);
        
        }
    } else {
        printf("ERRO: Você DEVE digitar um número válido para a operação.");
    }

    return 0;

}