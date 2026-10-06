#include <stdio.h>
int compare1 (int a, int b){
	if (a<b) return b;
	else return a;};
int compare2 (int a, int b){
	if (a>b) return b;
	else return a;};
int main(int argc, char *argv[]) {
    int lista[10],i,x,y;
    i = 0;
    while (i < 10) { 
        scanf("%d", &lista[i]);
        i++;}
	if(i==10){
	i=0;
	printf("Lista: ");}
	while (i<10){
		printf("%d ",lista[i]);
		i++;}
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
