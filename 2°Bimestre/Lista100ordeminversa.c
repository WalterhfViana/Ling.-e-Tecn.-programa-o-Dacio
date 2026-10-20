#include <stdio.h>
#include <stdlib.h>	
int main() {

    int lista[10],i,x;
 	for (i = 1 ; i<=10 ; i++ ) {
    	printf("Digite o %d inteiro: \n",i);
    	scanf("%d", &lista[i]);}
	printf("ordem inversa:");
	for (i=10; i>0; i--){
    printf("\n%d",lista[i]);}
    x = lista[10];
    printf("\nmaior para menor\n");
    while (i>=0){
		x = compare1(x,lista[i]);
		i--;
  		printf("%d|",x);}
    return 0;
}
