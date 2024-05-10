#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,x1,x2;
    printf("Enter the coefficients\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    printf("The solutions are x1 = %lf  and x2 = %lf", x1, x2);
    return 0;

}