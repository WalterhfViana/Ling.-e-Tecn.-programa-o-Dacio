#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char** argv) {
	
	float base,altura,area;
	
	// Pede o primeiro numero
	printf("Digite o tamanho da base:\n");
	scanf("%f",&base);
	
	// Pede o segundo numero
	printf("Digite a altura:\n");
	scanf("%f",&altura);
	
	//faz a conta
	area = (base*altura)/2;
	
	printf ("Um triangulo de base %.0f e altura %.0f tem area %.1f \n", base, altura , area);
	
	
	return 0;
}
