#include <stdio.h>
#include <math.h>

int main (){

    double K, M;
 
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &K);
 
    M = K / 3.6;
 
    printf("Velocidade em m/s: %.2lf\n", M);

    return 0;
}
