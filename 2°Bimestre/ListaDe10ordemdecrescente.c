
#include <stdio.h>
    
int main()
{
 int i,lista[10],maior,j,ordem[10];
 
    for ( i = 0 ; i < 10 ; i++ ){
        printf("escreva um numero para ser adicionado a lista: ");
        scanf("%d",&lista[i]);}
    for (i=0;i<10;i++){
    printf("|%d| ", lista[i]);}
    maior=0;
    for (int j=10;j>0;j--){
    
        for (i=0;i<10;i++){
            if (lista[maior]>lista[i]){
                maior=maior;
            }else maior = i;}
    ordem[j-1] = lista[maior];
    lista[maior]= 0;
    maior=0;
    }
    printf("\n ordem decrescente");
    for (int j=9;j>=0;j--){ 
        printf("|%d| ",ordem[j]);}
    
    return 0;
}
