#include <stdio.h>
int main(){
	float principle,rate,time,interest;
	printf("Enter principle amount:");
	scanf("%f",& principle);
	printf("Enter interest rate:");
	scanf("%f",& rate);
	printf("Enter time period(in years):");
	scanf("%f",& time);
	//calculate simple interest
	interest=(principle*rate*time)/100;
	printf("simple interest is: %.2f\n",interest);
	
	return 0;
}