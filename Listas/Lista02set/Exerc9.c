#include <stdio.h>
 
int main() {
 
    int temp,velocidade;
    double litros;
    scanf("%d %d",&temp,&velocidade);
    
    litros = (velocidade*temp)/12.0;
    printf("%.3lf\n",litros);
    
 
    return 0;
}
