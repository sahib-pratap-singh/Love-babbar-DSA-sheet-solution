class Solution {
  public:
    int getMinDiff(int nums[], int n, int k) {
        sort(nums,nums+n);
        int ans=nums[n-1]-nums[0];
        for(int i=0;i<n-1;i++){
            int a=nums[i],b=nums[i+1];
            int high=max(nums[n-1]-k,a+k);
            int low=min(nums[0]+k,b-k);
            if(low>=0)
                ans=min(ans,high-low);
        }
        return ans;
    }
};