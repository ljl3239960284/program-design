#include<stdio.h>
#include<math.h>

int main(){
	double x,y;
	printf("Please input x:");
	scanf("%lf",&x);
	
	if(1<=x&&x<2)
		y = 3*x - 5;
	
	if(2<=x&&x<4)
		y = 2* cos(x) + 1;
		
	if(4<=x&&x<6)
		y = sqrt(1 + x*x);
		
	if(x<1 || x>=6)
		y = x*x - 4 + 5;
	
	printf("y = %lf",y);
	
	return 0;
}
