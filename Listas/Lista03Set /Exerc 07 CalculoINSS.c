#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario, INSS;
    
    printf("Escreva o salario: ");
    scanf("%f", &salario);
    
    if (salario<=1412.00){
        INSS = salario*0.075;
    }else if (salario>1412.00 && salario <=2666.98){
        INSS = salario*0.09;
    }else if (salario>2666.98 && salario<=4000.03){
        INSS = salario*0.12;
    }else if (salario>=4000.04){
        INSS = salario*0.14;
    }
    printf("Valor de desconto do INSS: R$%.2f", INSS);
    return 0;
}
