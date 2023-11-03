#include<stdio.h>

int main(){
    double sn = 1,n =3, factorial = 1,sgn = -1,x,power;
    printf("Please input x:");
    scanf("%lf",&x);
    double sum = power = x ;

    while (sn>=1.0E-7){
        factorial *= n*(n-1);
        power *= x*x;
        sn = power/factorial;
        sum += sgn*sn;
        sgn *= -1;
        n += 2;
    }

    printf("sum = %lf",sum);

    return 0;
}
