//this code determines the summation of the following series:
// 1^1 + 2^2 + 3^3 + 4^ +.....

#include <stdio.h>
#include <math.h>

int main(){

     int  N, sum = 0;
     printf("Enter the last number of the series\n");
     scanf("%d", &N);

     while(N >0){
        sum += pow(N, N);
        N--;
     }

     printf("The summation of the series is %d", sum);
     return 0;


}
