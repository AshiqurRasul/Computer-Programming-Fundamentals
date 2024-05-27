//this code computes and prints upto a number


#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, number;
    printf("Enter the Number \n");
    scanf("%d", &number);

    for (i=1;i<=number;i++){
        printf("%d\n", i);
    }

    return 0;


}
