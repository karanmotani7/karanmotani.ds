#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows (Runs 5 times)
    for(i = 1; i <= 5; i++) {
        
        // Inner loop for columns (Runs 'i' times)
        for(j = 1; j <= i; j++) {
            
            // Check if column index is odd or even
            if(j % 2 != 0) {
                printf("1 "); // Print 1 for odd columns (1st, 3rd, 5th...)
            } else {
                printf("0 "); // Print 0 for even columns (2nd, 4th...)
            }
        }
        
        // Move cursor to the next line after finishing a row
        printf("\n");
    }

    return 0;
}