//We can store the matrix in 1-d array and then sort it and then find the median
//Time complexity: O(N)
//Space complexity: O(N)

//Using binary search
//Time complexity: O(r * log(c))
//Space complexity: O(1)
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int start=INT_MAX;
        int last=INT_MIN;
        int desired=(r*c+1)/2;
        for(int i=0;i<r;i++){
            if(matrix[i][0]<start){
                start=matrix[i][0];
            }
            if(matrix[i][c-1]>last){
                last=matrix[i][c-1];
            }
        }
        while(start<last){
            int mid=start+(last-start)/2;
            int count=0;
            for(int i=0;i<r;i++){
                count+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            }
            if(count<desired){
                start=mid+1;
            }
            else{
                last=mid;
            }
        }
        return start;
    }
};
