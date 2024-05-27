//this code determines the trace of a matrix

#include <stdio.h>

int main(){

    int i, j, r, trace = 0;

    printf("Enter the dimension of the matrix\n");
    scanf("%d", &r);

    int mat[r][r];

    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++){
        for (j=0;j<r;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for (i=0;i<r;i++){
        trace += mat[i][i];
    }

    printf("The trace of the matrix is %d", trace);
    return 0;
}
