#include<stdio.h>
#include<math.h>

int main(){
	
	double a,b,c,x1,x2,diat;
	printf("Please input a,b,c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if(a == 0){  //�ж�a==0�� 
		
		if (b == 0){  //�ж�b==0��
			
			if(c == 0){  //�ж�c==0�� 
				printf("infinity solustions");
			} else printf("no solution"); 
		
		}else{
			x1 = x2 = -(c/b);
			printf("x1 = %lf\nx2 = %lf",x1,x2); 
			}
	
	}else{
		diat = b * b - 4 * a * c;
		
		if(diat>=0){
			x1 = (-b + sqrt(diat))/(2*a);
			x2 = (-b - sqrt(diat))/(2*a);
			printf("x1 = %lf\nx2 = %lf\n",x1,x2);
			
		}else{
			printf("only exists comples solutions");
		}
		
	}
	
	
	return 0;
}
