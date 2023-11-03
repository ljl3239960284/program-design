#include<stdio.h>

int main(){
	double r,h,s,v;
	double const p = 3.1415926;
	printf("Please input r = ");
	scanf("%lf",&r);
	printf("Please input h = ");
	scanf("%lf",&h);
	
	s = 2 * (p * r * r) + ((2 * p * r) * h);
	v = (p * r * r) * h;
	
	printf("v = %lf\n",v);
	printf("s = %lf",s);
	
	return 0;
}
