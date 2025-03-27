int isPrime(int n){
    if(n<2){
        return 0;
    }
    int count=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            count++;
        }
        }
    }
    if(count == 2){
        return 1;
    }
    else{
        return 0;
    }
}