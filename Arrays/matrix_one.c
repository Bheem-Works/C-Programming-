#include <stdio.h>

int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    int i, j;
    
    // Print matrix elements
    printf("\nThe 4x3 matrix is:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
