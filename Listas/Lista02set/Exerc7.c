#include <stdio.h>
#include <math.h>

int main(){


    double total = 780000.00;
    double primeiro, segundo, terceiro;
 
    primeiro = total * 0.46;
    segundo  = total * 0.32;
    terceiro = total - primeiro - segundo; 
 
    printf("Valor total do concurso: R$ %.2lf\n", total);
    printf("Primeiro ganhador recebe: R$ %.2lf\n", primeiro);
    printf("Segundo ganhador recebe:  R$ %.2lf\n", segundo);
    printf("Terceiro ganhador recebe: R$ %.2lf\n", terceiro);

    return 0;
}
