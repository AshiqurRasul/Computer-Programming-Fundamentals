//this code prints all the prime numbers from 1 to 100
#include <stdio.h>
#include <stdlib.h>

//to make the solution easier, we have written a function in C which can determine if a number is prime or not
// if the number input to the function is prime number, the function returns 1, otherwise the function returns 0

int is_prime(int n){
    int i;
    if (n<4){
        return 1;
    }

    for (i=2;i*i<=n;i++){
        if ((n%i)==0){
            return 0;
        }
    }

    return 1;

}

int main(){
    int N = 100;
    int i;

    for (i=1;i<=N;i++){
        if (is_prime(i)){
            printf("%d\n", i);
        }
    }
    return 0;
}
