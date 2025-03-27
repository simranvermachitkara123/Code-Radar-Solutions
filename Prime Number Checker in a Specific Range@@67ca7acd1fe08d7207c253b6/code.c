// // Function to check if a number is prime using your logic
// int isPrime(int n) {
//     if (n < 2) {
//         return 0;
//     }
//     int count = 0;
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             count++;
//         }
//     }
//     if (count == 2) {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// // Function to print prime numbers in the range [a, b] using a count variable
// void printPrimesInRange(int a, int b) {
//     int count = 0;
//     for (int i = a; i <= b; i++) {
//         if (isPrime(i)) {
//             printf("%d ", i);
//             count++;
//         }
//     }
//     if (count == 0) {
//         printf("No prime numbers");
//     }
// }





int isPrime(int n){
    if(n<2){
        return 0;
    }
    int count = 0;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count == 2 ){
        return 1;
    }
    else{
        return 0;
    }
}
void printPrimesInRange(int a,int b){
    int count=0;
    for(int i=a; i<=b ; i++){
        if(isPrime(i)){
            printf("%d " ,i);
            count++;

        }
    }
    if(count==0){
        printf("No prime numbers");
    }
}


