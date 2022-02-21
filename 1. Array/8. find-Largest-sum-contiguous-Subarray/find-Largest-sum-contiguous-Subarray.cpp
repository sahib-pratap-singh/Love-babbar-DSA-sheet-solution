//Time complexity: O(n*n)
//Space complexity: O(1)

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long mx=INT_MIN;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                mx=max(mx,sum);
            }
        }
        return mx;
    }
};

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long maxsf=INT_MIN;
        long long sumsf=0;
        int i=0;
        while(i<n){
            sumsf+=arr[i];
            maxsf=max(maxsf,sumsf);
            if(sumsf<0){
                sumsf=0;
            }
            i++;
        }
        return maxsf;
    }
};