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