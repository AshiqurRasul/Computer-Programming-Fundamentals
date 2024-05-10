#include <stdio.h>

int main(){
    double a;
    printf("Enter the number\n");
    scanf("%lf", &a);
    if (a==0){
        printf("The number is zero\n");
    }
    else if (a>0)
        {printf("The number is positive\n");}
    else{
        printf("The number is negative\n");
    }
    return 0;
}