#include <iostream>
#include <math.h>

int main(int argc, char** argv) {
	
	int x1,y1,x2,y2;
	double dist,cat1,cat2;
	printf("entre com os valores para p1(x1,y1)");
	scanf ("%d",&x1);
	scanf ("%d",&y1);
	
	printf("entre com os valores para p2(x2,y2)");
	scanf ("%d",&x2);
	scanf ("%d",&y2);
	
	cat1 = pow(x2-x1, 2);
	cat2 = pow(y2-y1, 2);
	
	dist = sqrt((cat1+cat2));
	printf("%lf",dist);
	return 0;
}
