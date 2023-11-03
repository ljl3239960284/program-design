#include<stdio.h>
#include<math.h>

int main(){
	double x1,x2,y,a,b,c;
	printf("Please input a,b,c and use separated by single space:");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double first = sqrt(b * b - (4 * a * c));
	x1 = (-b + first)/(2*a);
	x2 = (-b - first)/(2*a);
	
	printf("x1 = %lf\nx2 = %lf",x1,x2);
	
	return 0; 
}
