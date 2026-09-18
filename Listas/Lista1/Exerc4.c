#include <stdio.h>
 
int main() {
  
    double salario,vendas,bonus;
    scanf("%lf",&salario); 
    scanf("%lf",&vendas);
    
    bonus = salario + (vendas*0.15);
    printf("TOTAL = R$ %.2lf\n",bonus);
 
    return 0;
}
