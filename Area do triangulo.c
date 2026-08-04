#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char** argv) {
	
	char saida;
	float base,altura,area;
	
	// Pede o primeiro numero
	std::cout << "Digite o tamanho da base: ";
	std::cin >> base;
	
	// Pede o segundo numero
	std::cout << "Digite a altura: ";
	std::cin >> altura;
	
	//faz a conta
	area = (base*altura)/2;
	
	printf ("Um triangulo de base %.0f e altura %.0f tem area %.1f \n", base, altura , area);
	
	
	return 0;
}
