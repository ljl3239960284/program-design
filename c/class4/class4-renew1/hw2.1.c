#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	const int SIZE = 10;
	double a[SIZE];
	int i;
	
	srand(time(0));
	
	for(i = 0;i<SIZE;i++)
		a[i] = (rand()%1000)/10.0;
		printf("%d",a[i])
	for(i = 0;i<SIZE;i++)
		printf("%.1f\n",a[i]);

	
	return 0;	
}
