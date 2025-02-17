//to find the fourth non repeating element 
#include<stdio.h>

int main() {
    int n, ar[10], i, j, count = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Iterate over each element to find non-repeating ones
    for (i = 0; i < n; i++) {
        int isRepeating = 0;

        // Check if ar[i] is repeated in the array
        for (j = 0; j < n; j++) {
            if (ar[i] == ar[j] && i != j) {
                isRepeating = 1;
                break;
            }
        }

        // If it's not repeated, increment the count
        if (!isRepeating) {
            count++;
            // If it's the 4th non-repeating element, print it and exit
            if (count == 4) {
                printf("The 4th non-repeating element is: %d\n", ar[i]);
                return 0;
            }
        }
    }

    // If there are less than 4 non-repeating elements
    if (count < 4) {
        printf("There are less than 4 non-repeating elements in the array.\n");
    }

    return 0;
}
