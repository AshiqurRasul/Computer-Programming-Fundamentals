//this code determines the factorial of a number

#include <stdio.h>
#include <stdlib.h>

int main(){

     int  N;
     double fact = 1;//because factorial can become a large number, that's why the result is stored in a 8 byte datatype
     printf("Enter the last number of the series\n");
     scanf("%d", &N);

     if (N==0){
        fact = 1;
        printf("The factorial of the number is %lf", fact);
        return 0;
     }

     while(N >0){
        fact *= N;
        N--;
     }

     printf("Factorial of the number is %lf", fact); //%lf is the format specifier for double data type
     return 0;


}

