#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c;
	double s,p;
	
	printf("Please input a,b,c:");
	scanf("%lf %lf %lf",&a,&b,&c);	
 
 	p =(a +b+c) / 2;	
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("s=%lf",s);
    
    return 0;
}
