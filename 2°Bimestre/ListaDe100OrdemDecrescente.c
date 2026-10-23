
#include <stdio.h>
    
int main()
{
 int i,lista[100],maior,j,ordem[100];
 
    for ( i = 0 ; i < 100 ; i++ ){
        printf("%d numero para ser adicionado a lista: ",i+1);
        scanf("%d",&lista[i]);}
    for (i=0;i<100;i++){
    printf("|%d| ", lista[i]);}
    maior=0;
    for (int j=100;j>0;j--){
    
        for (i=0;i<100;i++){
            if (lista[maior]>lista[i]){
                maior=maior;
            }else maior = i;}
    ordem[j-1] = lista[maior];
    lista[maior]= 0;
    maior=0;
    }
    printf("\n ordem decrescente");
    for (int j=99;j>=0;j--){ 
        printf("|%d| ",ordem[j]);}
    
    return 0;
}
