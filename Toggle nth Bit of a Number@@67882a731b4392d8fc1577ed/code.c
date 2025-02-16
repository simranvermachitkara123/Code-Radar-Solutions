// Your code here...
#include <stdio.h>

int main() {
    int num, n;
    
    // Input the number and the bit position
    scanf("%d %d", &num, &n);
    
    // Toggle the nth bit using XOR operation
    num ^= (1 << n);
    
    // Print the result
    printf("%d\n", num);
    
    return 0;
}
