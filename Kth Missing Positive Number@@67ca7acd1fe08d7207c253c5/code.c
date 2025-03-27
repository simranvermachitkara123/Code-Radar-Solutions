int findKthMissing(int arr[], int n, int k) {
    int count = 0, num = 1, i = 0;
    
    while (count < k) {
        if (i < n && arr[i] == num) {
            i++;  // Number exists in the array, skip it
        } else {
            count++;  // Number is missing, count it
            if (count == k) return num;
        }
        num++;  // Move to the next number
    }
    return -1;
}