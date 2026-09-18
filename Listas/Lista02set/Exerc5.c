#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.141592;
    double G, R;
 
    printf("Digite o angulo em graus: ");
    scanf("%lf", &G);
 
    R = G * (PI / 180.0);
 
    printf("Angulo em radianos: %.4lf\n", R);

    return 0;
}
