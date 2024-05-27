//this code determines the summation of the following series: 1+3+5+7 +....N = ?

#include <stdio.h>
#include <stdlib.h>

int main(){

     int i, N, sum = 0;
     printf("Enter the last number of the series\n");
     scanf("%d", &N);

     for (i=1;i<=N;i+=2){
        sum += i;
     }

     printf("The summation of the series is %d", sum);
     return 0;


}
