#include <stdio.h>

int main(){
	float a,b;
	scanf("%f",&a);
	scanf("%f",&b);
	float sum,sub,mult,div;
	sum = a+b;
	sub = a-b;
	mult = a*b;
	div = a/b;
	printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\nQuotient= %.2f\n",sum,sub,mult,div);
	return 0;
} 
