#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int counted[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        counted[i] = 0; 
    }

    printf("\nOutput:\n");
    for (i = 0; i < n; i++) {
        if (counted[i] == 1) {
            continue; 
        }

        int count = 1; 
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1;
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);
    }

    return 0;
}
