//this code prints the star pattern of the following
/*
    ********
    *******
    ******
    *****
    ****
    ***
    **
    *

    */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, N;

    printf("Enter the number of rows in the star pattern\n");
    scanf("%d", &N);

    for (i=N;i>=0;i--){
        for (j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

}
