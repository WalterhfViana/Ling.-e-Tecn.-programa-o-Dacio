#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 
//pede numero
	int n,ante,suce;
	printf("insira o valor de n:\n");
	scanf("%d", &n);


//Faz a conta e mostra os numeros
	printf("ante %d, N %d, suce %d", n-1, n , n+1);


/*
exercicio
// ((a+b+abs*(a-b))/2) Formula

	
	int Menor,a,b,c,MaiorTemp,maior;
//numero
	printf("insira tres valores: ");
	scanf("%d %d %d",&a,&b,&c);
	
//contas
	MaiorTemp = ((a+b+abs(a-b))/2);
	maior = ((MaiorTemp+c+abs(MaiorTemp-c))/2);
	printf("o maior e: %d" , maior);
*/
	return 0;
}
