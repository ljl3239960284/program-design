#include<stdio.h>

int main(){
	int x,y;
	printf("Please input x:");
	scanf("%d",&x);
	
	y = (1 + x)/(1 + (1/(1+x)));
	
	printf("y = %d",y);
	
	return 0;
}
