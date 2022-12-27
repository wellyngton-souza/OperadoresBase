#include <stdio.h>
#include <stdlib.h>

/*  Comandos maquina 
\n => quebra linha 
\t => tab
*/

/*  comandos interno
    printf() => Printa o texto no console
    scanf() => Lê o valor digitado
*/

int main() {
    int A, B, C;
    int operacao;

    printf("\n Calculadora");
    printf("\n Escolha a sua operação matematica");

    printf("\n digite o valor 1:\t");
    scanf("%d", &A);

    printf("\n digite o valor 2:\t");
    scanf("%d", &B);

    printf("\n Digite 1 para Somar");
    printf("\n Digite 2 para Subtrair");
    printf("\n Digite 3 para Multiplicar");
    printf("\n Digite 4 para Dividir ");

    scanf("%d", &operacao);
    
    if(operacao == 1){
        C = A + B;
    }

    if(operacao == 2){
        C = A - B;
    }

    if(operacao == 3){
        C = A * B;
    }

    if(operacao == 4){
        C = A / B;
    }

    printf("O seu resultado foi: %d", C);

    scanf("%d", &A);

    return 0;
}