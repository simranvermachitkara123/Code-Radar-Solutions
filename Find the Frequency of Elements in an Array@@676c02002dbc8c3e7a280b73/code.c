#include <stdio.h>

int main() {
    int n, i, j, count;
    scanf("%d", &n);
    int arr[n], visited[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;  // Initialize the visited array to 0
    }
    // Finding frequency of each element
    for (i = 0; i < n; i++) {
        if (visited[i] == 1)  // Skip already counted elements
            continue;

        count = 1;  // At least one occurrence of arr[i]

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // Mark duplicate as visited
            }
        }

        // Print frequency of arr[i]
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
