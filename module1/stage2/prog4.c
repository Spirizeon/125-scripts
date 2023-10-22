#include <stdio.h>

int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int sum,sub,mult,div,mod;
	sum = a+b;
	sub = a-b;
	mult = a*b;
	div = a/b;
	mod = a%b;
	printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient= %d\nModulus = %d\n",sum,sub,mult,div,mod);
	return 0;
} 
