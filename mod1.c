#include <stdio.h>
float C,F;
int trigger;
void to_fahrenheit(){
	scanf("%f",&C);
	F = 9/5 * C + 32;
	printf("Temperate\nIn Fahrenheit: %.2f\n",F);
}

void to_celsius(){
	scanf("%f",&F);
	C = 5/9 * (F - 32); 
	printf("Temperature\nIn Celsius: %.2f\n",C);
}
int main(){
	printf("Do you wish to convert to:\na)Celsius (press 1)\nb)Fahrenheit (press 2)");
	scanf("%d",&trigger);
	if(trigger == 2){
		to_fahrenheit();
	}
	else if(trigger == 1){
		to_celsius();
	}
	return 0;
} 

