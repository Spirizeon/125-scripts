#include <stdio.h>

int main(){
	int num;
	scanf("%5d",&num); // max 5 digits accept
	if(num>10000 && num < 100000){
		printf("remainder on dividing by 3: %d\n",num%3);
	}
	else{
		printf("This is not a 5-digit number, ending program\n");
	} 

	return 0;
} 

