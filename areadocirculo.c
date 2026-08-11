#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char** argv) {
    
	double a,b;

	// Pede o primeiro numero
	printf("Escreva o raio do circulo: ");
	scanf("%lf", &a); 
	
	
	//soma os numeros
	b = pi*(a*a);
	
	printf ("A=%.4f\n", b);
	
	return 0;
}
