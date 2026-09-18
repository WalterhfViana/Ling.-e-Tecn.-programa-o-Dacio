#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ([]){

//exercicio 8
	int x1, x2, y1, y2;
	float dist;
	printf("Entre com os valores para p1(x1,y1)")
	scanf("(%d)", &x1);
	scanf("(%d)", &y1);
	
	printf("Entre com os valores para p1(x2,y2)")
	scanf("(%d)", &x2);
	scanf("(%d)", &y2);
	
	cat1 = pow(x2-x1, 2);
	cat2 = pow(y2-y1, 2);
	
	dist = sqrt(cat1+cat2);
	
	printf("Distancia: %f", dist);
return 0;
}
	
