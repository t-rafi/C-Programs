#include <stdio.h>

int main() {
    int row,col,matrix[100][100];
    printf("Enter row number: ");
    scanf("%d", &row);
    printf("Enter column number: ");
    scanf("%d", &col);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter element [%d][%d]:  ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
     printf("\nMatrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("% d ", matrix[i][j]);
        }
        printf("\n");
    }
//    printf("\n");

    return 0;
}


