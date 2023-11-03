#include<stdio.h>

int main(){
    const double PL = 3.14159;
    double radius;
    double perimeter,area;
    printf("Please input radius:");
    scanf("%lf",&radius);
    perimeter = 2 * PL * radius;
    area = PL * radius * radius;

    printf("perimeter = %lf\n",perimeter);
    printf("area = %lf\n",area);

    return 0;
}
