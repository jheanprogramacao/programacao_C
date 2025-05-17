#include <stdio.h>

int main(){
    int idade = 22;
    float altura = 1.73;
    char opcao = 's';
    char nome[20] = "Santos";

    printf("O nome é: %s\n", nome);
    printf("A idade é: %d\n", idade);
    printf("A altura é: %e\n", altura);
    printf("A opção é: %c\n", opcao);

    /*
    printf("%formato1 %foramto2 %formato3", varaiavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente aa %d.
    %f: Imprime um número de ponto flutuante no formato padrão. 
    %e: Imprime um número de ponto flutuante na notação científica. 
    %c: Imprime um único caractere. 
    %s: Imprime uma cadeia (string) de caracteres. 
    */
}