#include <stdio.h>

int main(){
	int num1,num2;
	printf("请依次输入矩形的长和宽，用空号隔开");
	scanf("%d %d", &num1,&num2);
	int c = 2*(num1+num2);
	int s = num1 * num2;
	printf("%d\n",c);
	printf("%d\n",s);	
	return 0;
}
