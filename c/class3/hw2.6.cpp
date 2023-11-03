#include<stdio.h>
#include<time.h> 
#include<stdlib.h>

int main(){
	int x,y,i;
	i = 1;
	srand(time(NULL));
	y = rand()%101;
	y = (int)y;
	
	printf("我想到一个100以内的正整数,你猜猜是多少？");
	
	while(i < 11){
		printf("Please input ur guess:");
		scanf("%d",&x);
		i += 1;
		if(x != y){
			printf("Wrong!\t");
			if(x < y)
				printf("too low\n");
			else printf("too high\n");
		}else {
			printf("Right!");
			break;
		}	
	
	printf("you only have %d chances left",11-i);
		
		
	}
	
	return 0; 
}
