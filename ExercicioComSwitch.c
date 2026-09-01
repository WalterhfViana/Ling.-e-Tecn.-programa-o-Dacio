#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char  letra;
	printf("escreva uma letra: ");
	scanf("%c", &letra);
	
	if (letra == 'a' ||letra == 'e' ||letra == 'i' ||letra == 'o' ||letra == 'u' ){
		if (letra == 'a' ||letra == 'o'){
			printf("aoba");}
		if (letra == 'i' ||letra == 'u'){
			printf("la ele");}
	} else{
		printf("67"); //voce esta feliz professor dacio machado...?
	}
	printf("\n");
	
	switch(letra){
		case 'a':
			printf("A DE AMOR");
			break;
		case 'b':
			printf("B DE BAIXINHO");
			break;
		case 'c':
			printf("C DE CORACAO");
			break;
		case 'd':
			printf("D DE DADINHO");
			break;
		case 'e':
			printf("E DE ESCOLA");
			break;
		case 'f':
			printf("F DE FEIJAO");
			break;
		case 'g':
			printf("G DE GENTE");
			break;
		case 'h':
			printf("H DE HUMANO");
			break;
		case 'i':
			printf("I DE IGUALDADE");
			break;
		case 'j':
			printf("J DE JUVENTUDE");
			break;
		case 'k':
			printf("K DE KUNG-FU");
			break;
		case 'l':
			printf("L DE LIBERDADE");
			break;
		case 'm':
			printf("M DE MACACO");
			break;
		case 'n':
			printf("N DE NARIZ");
			break;
		case 'o':
			printf("O DE OBRIGADO");
			break;
		case 'p':
			printf("P DE PADEIRO");
			break;
		case 'q':
			printf("Q DE QUEIJO");
			break;
		case 'r':
			printf("R DE RODA");
			break;
		case 's':
			printf("S DE SAROBA");
			break;
		case 't':
			printf("T DE TERRA");
			break;
		case 'u':
			printf("U DE UNICESUMAR");
			break;
		case 'v':
			printf("V DE VALOR");
			break;
		case 'w':
			printf("W DE WALTER");
			break;
		case 'x':
			printf("X DE XUXA");
			break;
		case 'y':
			printf("Y DE YAKISOBA");
			break;
		case 'z':
			printf("Z DE ZEBRA");
			break;	
	}
		
	
		
	return 0;
}
