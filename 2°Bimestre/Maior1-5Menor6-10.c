#include <stdio.h>
int compare1 (int a, int b){
	if (a<b) return b;
	else return a;
};
int compare2 (int a, int b){
	if (a>b) return b;
	else return a;
};

int main(int argc, char *argv[]) {
    int lista[10], tamanho, i,ordem,a,b,x,y;
    tamanho = sizeof(lista) / sizeof(lista[0]); 
    i = 0;
    ordem = 10;
    while (i < tamanho) { 
        scanf("%d", &lista[i]);
        i++;}
    
	if(i==10){
	ordem=0;
	printf("Lista: ");}
	
	while (ordem<tamanho){
		printf("%d ",lista[ordem]);
		ordem++;}
	i=1;
	
	x = lista[0];
	while (i<5){
		x = compare1(x,lista[i]);
		i++;}
	
	y = lista[5];
	while (i<10){
		y = compare2(y,lista[i]);
		i++;}
		
	printf("\nMaior dos 5 primeiros: %d",x);
	printf("\nMenor dos 5 ultimos: %d",y );		
	    
    return 0;
}
