#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char** argv) {
	
	int a,b,c;
	
	// Pede o primeiro numero
	std::cout << "Digite um numero: ";
	std::cin >> a;
	
	// Pede o segundo numero
	std::cout << "Digite outro numero para ser somado: ";
	std::cin >> b;
	
	//soma os numeros
	c = a+b;
	
	printf ("a soma de %d + %d = %d", a,b,c);
	
	return 0;
}
