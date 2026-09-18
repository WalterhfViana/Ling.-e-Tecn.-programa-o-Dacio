#include <stdio.h>
 
int main() {
 
    int I, A, M, D;
    scanf("%d",&I);
    
    A = I / 365;
    M = (I - A*365)/30;
    D = I - A*365 - M*30;
   
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",A,M,D);
   
    return 0;
}
    
    
