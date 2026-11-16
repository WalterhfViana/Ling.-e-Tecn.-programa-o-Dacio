#include <stdio.h>
#include <stdlib.h>
/* DACIO SE VC ESTIVER VENDO ISSO SAIBA QUE SE EU TIVESSE ESCUTANDO MUSICA TERIA FEITO ESSE EXERCICIO, OK?
>:O
>:O
>:O
>:O
>:O
SO TROCAR OS 10 NA LISTA E NO CODIGO POR 100 Q VAI DAR CERTO
*/
int divisor (int a,int b){

	if ( (a%b)== 0){
		return b;
	} else if( (a%b) * (a/b ) == a ){
		return b;
		};
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lista[10],i,j;
	for (i=0;i<10;i++){
	printf("escreva o %d numero: ",i+1);
	scanf("%d",&lista[i]);
	}
	printf("Lista: ");
	for (i=0;i<10;i++){
	printf("%d|",lista[i]);
	}
	for (j=0;j<10;j++){
		printf("\n Divisores de %d: ",lista[j]);
		for (i=1;i<=lista[j];i++){
			if (divisor(lista[j],i)==i) printf(" %d|",divisor(lista[j],i));}
	}
	
	return 0;
}
