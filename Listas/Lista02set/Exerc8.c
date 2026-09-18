#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	int a, b, c, maiorTemp, maior;
	printf("insira tres valores:");
	scanf("%d, %d, %d", &a, &b, &c);
	

	maiorTemp = ((a+b+abs(a-b))/2);
	printf("o maior entre |%d|%d|%d| = %d", a,b,c, maiorTemp);
	
	return 0;
}
