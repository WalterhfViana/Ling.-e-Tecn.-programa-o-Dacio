#include <stdio.h>
#include <math.h>

int main()
{
	double valor,a,b,c;
	
	// pede o numero 
    printf("Escreva um numero: " );
    scanf("%lf",&valor);
    
    
    int tamanho = snprintf(NULL, 0,"%lf",valor); //tamanho do numero 
    int notacao = tamanho-8; // qual expoente elevar 10 - 8 (oque vem depois da virgula)
    float ndividido = valor/pow(10,notacao); // calcula o numero depois da conversão
	 
/*
    printf("%d\n", tamanho);
	printf("%.2lf\n",valor); tabela para ver valores
	printf("%d\n",notacao);
	printf("%f\n",ndividido);
*/

	
	printf("notacao cientifica =  %.2f x 10^%d", ndividido,notacao);
    return 0;
}
