#include <stdio.h> 

void percentcalc(float marks,float total){
	// this function calculates percentage of marks
	float percer = marks/total * 100;
	printf("\n%.2f percent \n",percer);
}


int main(){
	float m1,m2,m3,m4,m5,total,average;
	scanf("%f",&m1);
	scanf("%f",&m2);
	scanf("%f",&m3);
	scanf("%f",&m4);
	scanf("%f",&m5);
	total = m1 + m2 + m3 + m4 + m5;
	average = total/3;
	printf("\nTotal marks: %.2f\nAverage: %.2f\n",total,average);
	percentcalc(m1,total);
	percentcalc(m2,total);
	percentcalc(m3,total);
	percentcalc(m4,total);
	percentcalc(m5,total);
	return 0;
} 
