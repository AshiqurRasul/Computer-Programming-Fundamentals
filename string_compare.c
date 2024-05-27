//this code determines if two strings are identical or not

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

int str_len(char str[MAX_SIZE]){
    int len = 0;

    while(str[len] != '\0'){
        len ++;
    }
    return len;
}



int main(){

    int len, i;
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];

    printf("Enter the first string\n");
    gets(str1);

    printf("Enter the second string\n");
    gets(str2);

    len = str_len(str1);
    if (len != str_len(str2)){
        printf("These two strings are not identical\n");
        return 0;
    }

    for (i=0;i<len;i++){
        if (str1[i] != str2[i]){
            printf("These two strings are not identical\n");
            return 0;
        }
    }

    printf("These two strings are identical\n");
}
