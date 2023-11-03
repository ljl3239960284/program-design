#include <stdio.h>
#include <stdlib.h>
#include<math.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double y,x;
	printf("please enter x:");
	scanf("%lf",&x);
	y = (1 + x)/(1+(1/(1+x)));
	printf("%lf\n",y);
	
	return 0;
}
