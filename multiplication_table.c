//this code prints the multiplication table of a user provided number
#include <stdio.h>

int main(){

    int i, N;
    printf("Enter the number\n");
    scanf("%d", &N);

    printf("Printing the Multiplication Table\n");
    for (i=1;i<=10;i++){
        printf("%d X %d = %d\n", N, i, N*i);
    }
    return 0;
}
