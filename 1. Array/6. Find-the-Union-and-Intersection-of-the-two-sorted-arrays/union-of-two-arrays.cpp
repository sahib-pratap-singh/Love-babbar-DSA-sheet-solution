//Using set
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> unioncount;
        for(int i=0;i<n;i++){
            unioncount.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            unioncount.insert(b[i]);
        }
        return unioncount.size();
    }
};

//Another method we can use is using hashmap
//Time complexity: O(n+m)
//Space complexity: O(n+m)

//We can also use Sorting 
//Sort both array and the search as we do using merge in merger sort
//Time complexity: O(nlogn + mlogm)
//Space complexity: O(1)

//We can also use simple Vector
//Store all elements of first array
//For storing next array first check that element should not be present
//Time complexity: O(n+m)
//Space complexity: O(n+m)