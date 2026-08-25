#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, ar, br;
	printf("a ,b ");
	scanf("%d %d", &a ,&b );
	
	if(a>0 && b>0){
		if(ar = (a%2))/* a multiplo 2 */{ 
			printf("%d nao eh multiplo de 2\n", a);
		}else{
			printf("%d eh multiplo de 2\n", a);}
		if(br = (b%2))/* b multiplo 2 */{
			printf("%d nao eh multiplo de 2\n", b);
		}else{
			printf("%d eh multiplo de 2\n", b);}
		if(a>b) /* caso a seja maior que b*/{
			if (a%b){
			printf("nao sao multiplos entre si\n");
			}else{
			printf("sao multiplos entre si\n");}
			//^^^^^^ para a maior que b^^^^^^//	
			}
		else /* caso b seja maior que a*/{
			if (b%a){
			printf("nao sao multiplos entre si\n");
			}else{
			printf("sao multiplos entre si\n");}
		} /*^^^^^^ para b maior que a ^^^^^^*/

	}else /* caso nao sejam positivos*/{
			if(a>b){
				printf("%d eh maior que %d\n", a,b);
			}else{
				printf("%d eh maior que %d\n",b ,a);}
		};
	
	return 0;
}
