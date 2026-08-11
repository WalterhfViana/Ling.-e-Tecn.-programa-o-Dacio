#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char** argv) {
	
	int a,b,c;
	
	// Pede o primeiro numero
	printf("Escreva o primeiro numero:\n");
	scanf("%d",&a);
	
	// Pede o segundo numero
	printf("Escreva o segundo numero:\n");
	scanf("%d",&b);
	
	//soma os numeros
	c = a+b;
	
	printf ("a soma de %d + %d = %d", a,b,c);
	
	return 0;
}
