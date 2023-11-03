#include<stdio.h>
int main(){
	int a,b,c,s;
	printf("Please enter the length of the rectangle:");
	scanf("%d",&a);
	printf("Please enter the width of the rectangle:");
	scanf("%d",&b);
	c = 2 * (a + b);
	s = a * b;
	printf("The circumference of the rectangle is:%d\n",c);
	printf("The area of the rectangle is:%d\n",s);
	
	return 0;
}
