#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];
    // sintaxe scanf
    // scanf("formato1" "formato2", &variavel1, &variavel2, ...);

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite uma letra: ");
    scanf(" %c", &opcao);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("O seu nome é: %s\n", nome);
    printf("A sua idade é: %d\n", idade);
    printf("A suau altura é: %f\n", altura);
    printf("Você escolheu a letra: %c\n", opcao);

}