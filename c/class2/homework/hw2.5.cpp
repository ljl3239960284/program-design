#include<stdio.h>
#include<math.h>

int main(){
	double s,p,a,b,c;
	printf("Please input cricle's a,b,c£º");
	scanf("%lf %lf %lf",&a,&b,&c);
	p = (a + b + c)/2;
	s = sqrt(p * (p - a)*(p - b)*(p - c));
	printf("S = %lf",s);
	
	return 0;
} 
