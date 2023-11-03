#include<stdio.h>

int main(){
	double pt = 0.006;
	int n = 0;
	
	do{	pt = pt * 2;
		n++;
	}while(pt<38500000000);
	
	printf("paperThick = %lf\nn = %d",pt,n);
	
	getchar();
	return 0;
}
