//We can use brute force approach that will take O(N*N) time.

//We can also use Sorting
//Time complexity:O(Nlog(n))
//Space complexity: O(1)

//Using hashing
//Time complexity:O(N)
//Space complexity: O(N)

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      unordered_map<int,int> mp;
      for(int i=0;i<n;i++){
          mp[arr[i]]++;
      }
      int ans=0;
      for(int i=0;i<n;i++){
          int cnt=1;
          int val=arr[i]+1;
          if(mp.count(val-2)){
              continue;
          }
          while(mp.count(val)){
              cnt++;
              val++;
          }
          ans=max(ans,cnt);
      }
      return ans;
    }
};