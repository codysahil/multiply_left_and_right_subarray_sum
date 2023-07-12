int multiply(int arr[], int n)
{
    // Complete the function
    int sum1 = 0;
    int sum2 = 0;
    if(n%2!=0){
        int k = n/2;
        int k1 = floor(k);
        for(int i = 0; i<k1; i++){
            sum1 = sum1 + arr[i];
        }
        for(int i = k; i<n; i++){
            sum2 = sum2 + arr[i];
        }
    }
    else{
        for(int i = 0; i<n/2; i++){
            sum1 = sum1 + arr[i];
        }
        for(int i = n/2; i<n; i++){
            sum2 = sum2 + arr[i];
        }
    }
    int result = sum1*sum2;
}
