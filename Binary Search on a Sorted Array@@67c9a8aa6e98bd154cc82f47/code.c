int binarySearch(int arr[], int n , int target){
    int low=0 , high=n-1 ;
    int mid = (high+low)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        mid=low+1;
    }
    else(arr[mid]>target){
        mid=high-1;
    }
    return -1;
}