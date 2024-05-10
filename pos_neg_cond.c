#include <stdio.h>

int main(){
    double a;
    printf("Enter the number\n");
    scanf("%lf", &a);
    (a>=0)?((a>0)?printf("positive\n"):printf("zero")):printf("negative\n");
}