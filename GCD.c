//this code determines the GCD (greatest common divisor) between two number
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, gcd;

    printf("Enter the larger number\n");
    scanf("%d", &num1);

    printf("Enter the smaller number\n");
    scanf("%d", &num2);


    while((num1%num2) !=0){
        gcd  = num1 % num2;
        num1 = num2;
        num2 = gcd;
    }

    printf("The GCD between the number is %d", num2);
    return 0;

}
