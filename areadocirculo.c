#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
	double a,b,pi;
	pi = 3.14159;
	// Pede o primeiro numero
	scanf("%lf", &a); 
	
	
	//soma os numeros
	b = pi*(a*a);
	
	printf ("A=%.4f\n", b);
	
	return 0;
}
