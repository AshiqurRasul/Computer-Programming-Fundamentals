//this code snippet is to determine the length of a string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100 //defining maximum size of the string to be 100 characters
int main(){

    int len = 0;

    char str[MAX_SIZE];

    printf("Enter the String\n");
    gets(str);

    while(str[len] != '\0'){
        len ++;
    }

    printf("The length of the string %s is %d\n", str, len);

    //however, similar function can be obtained by using predefined string functions in string.h header file

    printf("The length of the string %s is %d\n", str, strlen(str));
    return 0;
}
