#include <stdio.h>
#include <stdlib.h>
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotateArray(int arr[], int d, int n) {
    if (d == 0 || d == n) return;  
    
    d %= n;
    reverse(arr, 0, d - 1);   
    reverse(arr, d, n - 1);       
    reverse(arr, 0, n - 1);       
}

int main() {
    int n, d;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of rotations: ");
    scanf("%d", &d);
    rotateArray(arr, d, n);
    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d%c", arr[i], i == n - 1 ? '\n' : ' ');
    }
     free(arr);
    return 0;
}
