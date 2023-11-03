#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of addition problems to do
    
    int results[n]; // Initialize an array to store the results
    
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b); // Read the two integers to add
        
        int result = a + b; // Calculate the sum of the two integers
        results[i] = result; // Store the result in the array
    }
    
    // Print the solutions to the addition problems
    for (int i = 0; i < n; i++) {
        printf("%d\n", results[i]);
    }
    
    return 0;
}

