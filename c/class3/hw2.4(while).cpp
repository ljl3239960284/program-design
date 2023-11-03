#include<stdio.h>

int main(){
	double pt = 0.006;
	int n = 0;
	
	while(pt<38500000000){
		pt = pt * 2;
		n++;
	}
	printf("paperThick = %lf\nn = %d",pt,n);
	
	getchar();
	return 0;
}
