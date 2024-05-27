//this code sums up a series 1+2+3+4+5+6+.....N = ?, where N is provided by the user
#include <stdio.h>
#include <stdlib.h>

int main(){

     int  N, sum = 0;
     printf("Enter the last number of the series\n");
     scanf("%d", &N);

     while(N >0){
        sum += N;
        N--;
     }

     printf("The summation of the series is %d", sum);
     return 0;


}
