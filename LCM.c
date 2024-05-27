//this code determines the Least Common Multiplier between two numbers

#include <stdio.h>
#include <stdlib.h>

int gcd(int n, int m){

    int i;

    while((n%m) != 0){
        i = n%m;
        n = m;
        m = i;
    }

    return m;
}


int main(){
    //LCM * GCD = multiplication of both number

    int a, b, lcm;
    printf("Enter the both numbers for LCM calculation\n");

    scanf("%d %d", &a, &b);

    lcm = (a*b)/gcd(a, b);

    printf("The Least Common Multiplier of the Two Numbers %d", lcm);
    return 0;

}
