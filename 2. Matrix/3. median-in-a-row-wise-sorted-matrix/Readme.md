<h1>:heavy_check_mark: Median in a row-wise sorted Matrix</h1>
<blockquote>Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.
 </blockquote>

* **Example 1**:<br>

        Input:
        R = 3, C = 3
        M = [[1, 3, 5], 
            [2, 6, 9], 
            [3, 6, 9]]

        Output: 5

        Explanation:
        Sorting matrix elements gives us 
        {1,2,3,3,5,6,6,9,9}. Hence, 5 is median.

* **Example 2**:<br>

        Input:
        R = 3, C = 1
        M = [[1], [2], [3]]
        Output: 2

**➔ Your Task**

      You don't need to read input or print anything. Your task is to complete the function median() which takes the integers R and C along with the 2D matrix as input parameters and returns the median of the matrix.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(32 * R * log(C))</td> <td align="center">O(1)</td></tr>
</table>

### **Constraints** 

        1<= R,C <=150
        1<= matrix[i][j] <=2000