#include<stdio.h>
#include<math.h>

int main(){
	double x,y;
	printf("Please input x:");
	scanf("%lf",&x);
	int key = (int)x;
	
	switch (key){
		case 1:
			y = 3 * x -5;
			break;
		case 2:
			y = 2 * cos(x) + 1;
			break;
		case 3:
			y = 2 * cos(x) + 1;
			break;
		case 4:
			y = sqrt(1 + x * x);
			break;
		case 5:
			y = sqrt(1 + x * x);
			break;
		default:
			y = x*x - 4 * x + 5;
			
	}
		
	printf("%lf",y);
	
	return 0;
}
