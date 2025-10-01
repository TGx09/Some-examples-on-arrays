#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    // Calculate average
    average = sum / n;
    
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", average);
   
    return 0;
}
