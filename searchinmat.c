#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int matrix[n][n];
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int key;
    scanf("%d", &key);
    
    int found = 0;
    for (int i = 0; i < n * n; i++) {
        int row = i % n;
        int col = i / n;
        
        if (row < n && col < n) {
            if (matrix[row][col] == key) {
                printf("Present\n");
                found = 1;
                break;
            } else if (matrix[row][col] > key) {
                break;
            }
        }
    }
    
    if (!found) {
        printf("Not Present\n");
    }
    
    return 0;
}
