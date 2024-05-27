//this code multiplies two matrices

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, k, r1, c1, r2, c2, sum;

    printf("Enter the dimension of the first matrix\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter the dimension of the second matrix\n");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2){
        printf("The two matrices are not multipliable\n");
    }

    int mat1[r1][c1], mat2[r2][c2], mat3[r1][c2];

    printf("Enter the elements of the first matrix\n");

    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix\n");

        for (i=0;i<r2;i++){
        for (j=0;j<c2;j++){
            scanf("%d", &mat2[i][j]);
        }
    }


    for (i=0;i<r1;i++){
        for (j=0;j<c2;j++){
                mat3[i][j] = 0;
            for (k=0;k<r2;k++){
                mat3[i][j] += mat1[i][k]*mat2[k][j];
            }
        printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
