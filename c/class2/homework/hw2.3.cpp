#include<stdio.h>

int main(){
	float chinese,english,math,sum,avg;
	printf("Please input 3 scores in sequence:\n");
	printf("chinese:");
	scanf("%f",&chinese);
	printf("english:");
	scanf("%f",&english);
	printf("math:");
	scanf("%f",&math);
	
	sum = chinese + english + math;
	avg = sum / 3;
	printf("The total score is %f\n",sum);
	printf("The average score is %f\n",avg);
	
	return 0;
	
}
