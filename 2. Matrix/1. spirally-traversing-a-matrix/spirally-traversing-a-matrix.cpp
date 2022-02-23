//Recursion
//Time complexity:O(r*c)
//Space complexity:O(r*c)
void traverse(vector<vector<int> > matrix,vector<int> &result, int i, int j, int m, int n)
{
    // If i or j lies outside the matrix
    if (i >= m or j >= n)
        return;

    // Print First Row
    for (int p = j; p < n; p++)
        result.push_back(matrix[i][p]);

    // Print Last Column
    for (int p = i + 1; p < m; p++)
        result.push_back(matrix[p][n-1]);

    // Print Last Row, if Last and
    // First Row are not same
    if ((m - 1) != i)
        for (int p = n - 2; p >= j; p--)
            result.push_back(matrix[m-1][p]);

    // Print First Column,  if Last and
    // First Column are not same
    if ((n - 1) != j)
        for (int p = m - 2; p > i; p--)
            result.push_back(matrix[p][j]);

    traverse(matrix,result, i + 1, j + 1, m - 1, n - 1);
}
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> result;
        traverse(matrix,result,0,0,r,c);
        return result;
    }
};

//Iterative
//Time complexity:O(r*c)
//Space complexity:O(1)
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> res;
        int rowBegin = 0;
        int rowEnd = matrix.size()-1;
        int colBegin = 0;
        int colEnd = matrix[0].size() - 1;
        
        while (rowBegin <= rowEnd && colBegin <= colEnd) {
            // Traverse Right
            for (int j = colBegin; j <= colEnd; j ++) {
                res.push_back(matrix[rowBegin][j]);
            }
            rowBegin++;
            
            // Traverse Down
            for (int j = rowBegin; j <= rowEnd; j ++) {
                res.push_back(matrix[j][colEnd]);
            }
            colEnd--;
            
            if (rowBegin <= rowEnd) {
                // Traverse Left
                for (int j = colEnd; j >= colBegin; j --) {
                    res.push_back(matrix[rowEnd][j]);
                }
            }
            rowEnd--;
            
            if (colBegin <= colEnd) {
                // Traver Up
                for (int j = rowEnd; j >= rowBegin; j --) {
                    res.push_back(matrix[j][colBegin]);
                }
            }
            colBegin ++;
        }
        
        return res;
    }
};