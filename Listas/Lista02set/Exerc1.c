#include <stdio.h>
#include <math.h>

int main (){

    int idade, anoAtual, anoNascimento;
 
    printf("Digite a idade: ");
    scanf("%d", &idade);
 
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
 
    anoNascimento = anoAtual - idade;
 
    printf("Ano de nascimento: %d\n", anoNascimento);

    return 0;
}
