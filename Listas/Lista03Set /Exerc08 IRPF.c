#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario, deducao;
    
    printf("Escreva o salario-base (Bruto-INSS): ");
    scanf("%f", &salario);
    
    if (salario<=2259.20){
        deducao = 0;
        printf("reducao 0%");
    } else if(salario>2258.19 && salario<=2826.65){
        deducao = salario*0.075;
        printf("reducao 7,5%");
    }else if(salario>2826.65 && salario<=3751.05){
        deducao = salario*0.15;
        printf("reducao 15%");
    }else if(salario>3751.05 && salario<=4664.68){
        deducao = salario*0.225;
        printf("reducao 22,5%");
    }else if(salario>4664.68){
        deducao = salario*0.275;
        printf("reducao 27,5%");
    }
    
    printf("\nValor de desconto: R$%.2f", deducao);
    return 0;
}
