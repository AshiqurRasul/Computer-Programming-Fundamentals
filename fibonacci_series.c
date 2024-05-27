//this code prints the fibonacci series upto Nth term
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i=0, j=1, sum=0, N;
    printf("Enter the number of terms you want print the fibonacci series\n");
    scanf("%d", &N);
    N = N-2;
    printf("Printing the Fibonacci Series\n");
    printf("%d\n", i);
    printf("%d\n", j);

    while(N >0){
        sum = i+j;
        i = j;
        j = sum;
        printf("%d\n", j);
        N--;
    }
    return 0;
}
