#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	int a,b,c;
	float d;
	
	// Pede a base maior
	printf("Escreva tamanho da base maior: ");
	scanf("%d",&a);
	
	
	// Pede a base menor
	
	printf("Escreva o tamanho da base menor: "); 
	scanf("%d",&b);
	
	
	// Pede a altura
	printf("Escreva o tamanho da altura: ");
	scanf("%d",&c);
		
	//converte para float soma multiplica e divide por dois
	d = float(((a+b)*c))/2;
	
	printf ("a a area do trapezio %f", d);
	
	return 0;
}
