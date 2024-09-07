#include <stdio.h>
int main() {
    int n;
     
    printf("Enter the number of elements");
    scanf("%d", &n);
    
   int nums[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int unique = nums[0];
    for (int i = 1; i < n; i++) {
        unique ^= nums[i];
    }
    
    printf("The element that appears only once is: %d\n", unique);
    
    return 0;
}
