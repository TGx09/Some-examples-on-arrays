#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];    // Two arrays of same size
    
    // Input elements for first array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Copy elements to second array
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    
    // Print both arrays
    printf("\nFirst array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nCopied array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}