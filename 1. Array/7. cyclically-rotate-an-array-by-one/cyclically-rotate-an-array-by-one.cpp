//Using reverse method
//Time complexity: O(2n)
//Space complexity: O(1)

void rotate(int arr[], int n)
{
    reverse(arr,arr+n);
    reverse(arr+1,arr+n);
}

//Using iterative method
//Time complexity: O(n)
//Space complexity: O(1)
void rotate(int arr[], int n)
{
    int lastelement=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=lastelement;
}

//Using swapping method
//Time complexity: O(n)
//Space complexity: O(1)
void rotate(int arr[], int n)
{
    int i=0;
    while(i<n){
        swap(arr[i],arr[n-1]);
        i++;
    }
}