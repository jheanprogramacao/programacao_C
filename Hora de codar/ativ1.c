#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Digite a sua matricula \n");
    scanf("%d", &matricula);

    printf("Nome do aluno : %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %f\n", idade, altura);

    return 0;
}