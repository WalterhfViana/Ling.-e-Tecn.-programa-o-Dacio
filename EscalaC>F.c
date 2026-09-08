#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	char escala;
	float numero;
	float conversao;
	
	printf("Para qual escala voce quer converter e qual o valor? \n(C)elsius ou (F)ahrenheit: "); /* pedir escala e analisar primeira letra */
	scanf("%c %f" ,&escala,&numero);
//	printf("%c\n", escala);

	if (escala == 'f' || escala == 'F'){ // escala C > F
 
		conversao = ((numero*1.8)+32);
		printf("valor de %.1fC em fahrenheit eh: %.1fF \n",numero, conversao);
	} 
	else if (escala == 'c' || escala == 'C'){ // escala F > C

		conversao = ((numero-32)/1.8);
		printf("o valor de %.1fF em celsius eh: %.1fC \n",numero, conversao);
	} else {
		printf("Escala nao selecionada");
	}
	
	
	
	return 0;
}
