#include <stdio.h>
#include <math.h>
 

int main() {

    double valor, notacao;
    int expoente = 0;
 
    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);
 
    notacao = valor;
 
 
    while (notacao >= 10.0) {
        notacao = notacao / 10.0;
        expoente++;
    }
 
 
    while (mantissa < 1.0) {
        notacao = notacao * 10.0;
        expoente--;
    }
 
    printf("Notacao cientifica: %.4lf x 10^%d\n", notacao, expoente);

    return 0;
}
