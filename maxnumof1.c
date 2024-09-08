#include <stdio.h>

int main() {
    int m, n;
    
    printf("Enter the number of rows (m) and columns (n): ");
    scanf("%d %d", &m, &n);
    
    int matrix[m][n];
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int maxRowIndex = 0;
    int maxOnes = 0;
    
    for (int i = 0; i < m; i++) {
        int onesCount = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
                onesCount++;
            }
        }
        if (onesCount > maxOnes) {
            maxOnes = onesCount;
            maxRowIndex = i;
        }
    }
    
    printf("The row with the maximum number of 1's is: %d\n", maxRowIndex);
    printf("The maximum number of 1's in that row is: %d\n", maxOnes);
    
    return 0;
}
