#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double x1, x2, s, p;

    printf("Please input a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = b * b - 4 * a * c;
    
    if (p >= 0) {
        s = sqrt(p);
        x1 = (-b + s) / (2 * a);
        x2 = (-b - s) / (2 * a);
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    } else {
        printf("No real roots.\n");
    }

    return 0;
}

