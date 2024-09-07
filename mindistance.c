#include <stdio.h>
#include <stdlib.h>  // For malloc() and free()
#include <limits.h>  // For INT_MAX

// Function to find the minimum distance between two elements
int findMinDistance(int arr[], int n, int a, int b) {
    int last_pos_a = -1;
    int last_pos_b = -1;
    int min_distance = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            last_pos_a = i;
        }
        if (arr[i] == b) {
            last_pos_b = i;
        }
        
        if (last_pos_a != -1 && last_pos_b != -1) {
            int distance = last_pos_a > last_pos_b ? last_pos_a - last_pos_b : last_pos_b - last_pos_a;
            if (distance < min_distance) {
                min_distance = distance;
            }
        }
    }
    
    return min_distance == INT_MAX ? -1 : min_distance;
}

int main() {
    int n, a, b;
    
    // Get the size of the array from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Dynamically allocate memory for the array
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Exit with error code
    }
    
    // Get the array elements from user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Get the values of a and b from user
    printf("Enter the two values to find the minimum distance between: ");
    scanf("%d %d", &a, &b);
    
    // Find and print the minimum distance
    int result = findMinDistance(arr, n, a, b);
    if (result != -1) {
        printf("Minimum distance between %d and %d is: %d\n", a, b, result);
    } else {
        printf("One or both of the numbers %d and %d are not in the array.\n", a, b);
    }
    
    // Free the allocated memory
    free(arr);
    
    return 0;
}
