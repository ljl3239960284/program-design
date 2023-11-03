#include<stdio.h>

int main(){
	double a,b,c,d,r;
	double const p = 3.1415916;

	printf("Please input a,b,c,d and r:");
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&r);

	double first = (a * b)/(c * d)*(3/(1 + (b/(2.5 + c)))) + 4 * p * r * r * r;
	
	printf("answer:%lf",first);

	return 0;
} 
