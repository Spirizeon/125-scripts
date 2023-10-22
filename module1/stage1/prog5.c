#include <stdio.h> 

int main(){
	float principal,rate,years,simpleint;
	printf("Enter principal amount: ");
	scanf("%f",&principal);
	printf("\nEnter rate of interest: ");
	scanf("%f",&rate);
	printf("\nEnter number of years: ");
	scanf("%f",&years);
	simpleint = principal * rate * years/100;
	printf("\nSimple interest is: %.2f\n",simpleint);
	return 0;
}	
