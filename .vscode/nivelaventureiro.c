#include <stdio.h>

int main(){
    /*
    Soma (+)
    Substração (-)
    Multiplicação (*)
    Divisão (\)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o número 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o número 2: \n");
    scanf("%d", &numero2);
    
    //operacao soma
    soma = numero1 + numero2;

    //operacao subtracao
    subtracao = numero1 - numero2; 

    //operacao multiplicacao
    multiplicacao = numero1 * numero2;

    //operacao divisao
    divisao = numero1 / numero2;

    printf("A Soma é: %d\n", soma);
    printf("A Substração é: %d\n", subtracao);
    printf("A Multiplicação é: %d\n", multiplicacao);
    printf("A Divisão é: %d\n", divisao);
    
}
