void isPrime(int n){
    if(n<2){
        continue;
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(j%i==0){
            count++;
            }
        }
    }
    if(count == 2){
        printf("1");
    }
    else{
        printf("0");
    }
}