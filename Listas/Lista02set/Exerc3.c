#include <stdio.h>
#include <math.h>

int main(){


    
    double valorReais, cotacaoDolar, valorDolar;
 
    printf("Digite o valor em reais: ");
    scanf("%lf", &valorReais);
 
    printf("Digite a cotacao do dolar: ");
    scanf("%lf", &cotacaoDolar);
 
    valorDolar = valorReais / cotacaoDolar;
 
    printf("Valor correspondente em dolares: $ %.2lf\n", valorDolar);

    return 0;
}
