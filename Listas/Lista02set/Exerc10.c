#include <stdio.h>
#include <math.h>

int main(){


   	int Menor,a,b,c,MaiorTemp,maior;

	printf("insira tres valores: ");
	scanf("%d %d %d",&a,&b,&c);
	
	MaiorTemp = ((a+b+abs(a-b))/2);
	maior = ((MaiorTemp+c+abs(MaiorTemp-c))/2);
	printf("o maior e: %d" , maior);

	return 0;
}
