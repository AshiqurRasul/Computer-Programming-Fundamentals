//this code takes two matrices as input and shows the result of the addition of the two matrices

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, r, c;

    printf("Enter the number of rows in the matrix\n");
    scanf("%d", &r);

    printf("Enter the number of columns in the matrix\n");
    scanf("%d", &c);

    int mat1[r][c], mat2[r][c];

    printf("Enter the elements of the first matrix\n");
    for(i=0;i<r;i++){
        for (j=0;j<c;j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix\n");
    for(i=0;i<r;i++){
        for (j=0;j<c;j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Printing the Elements of the Resultant Matrix After Addition\n");
    for(i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("%d\t ", mat1[i][j]+ mat2[i][j]);
        }

        printf("\n");
    }
}
