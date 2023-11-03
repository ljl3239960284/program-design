#include<stdio.h>

int main(){
	double a,b,c,a1,b1,t;

	printf("Please input a,b,c:");
	scanf("%lf %lf %lf",&a,&b,&c); 
	
	if(a>b){
		t = a;
		a = b;
		b = t;
	
	}

	
	if(b> c){
		t = b;
		b = c;
		c = t;
	}

	if(a>b){
		t = a;
		a = b;
		b = t;
	}

	
	printf("a = %lf\nb = %lf\nc = %lf\n",a,b,c);
	
	return 0;
} 
