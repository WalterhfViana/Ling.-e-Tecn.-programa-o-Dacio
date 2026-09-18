#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	char escala;
	float numero;
	float conversao;
	
	printf("Para qual escala voce quer converter e qual o valor? \n(C)elsius ou (F)ahrenheit: "); 
	scanf("%c %f" ,&escala,&numero);


	if (escala == 'f' || escala == 'F'){ 
 
		conversao = ((numero*1.8)+32);
		printf("valor de %.1fC em fahrenheit eh: %.1fF \n",numero, conversao);
	} 
	else if (escala == 'c' || escala == 'C'){ 

		conversao = ((numero-32)/1.8);
		printf("o valor de %.1fF em celsius eh: %.1fC \n",numero, conversao);
	} else {
		printf("Escala nao selecionada");
	}
	
	
	
	return 0;
}
