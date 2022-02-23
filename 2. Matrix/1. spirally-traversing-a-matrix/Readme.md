<h1>:heavy_check_mark: Spirally traversing a matrix </h1>
<blockquote>Given a matrix of size r*c. Traverse the matrix in spiral form.</blockquote>

* **Example 1**:<br>

        Input:
        r = 4, c = 4
        matrix[][] = {{1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12},
                {13, 14, 15,16}}
        Output: 
        1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

* **Example 2**:<br>

        Input:
        r = 3, c = 4  
        matrix[][] = {{1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12}}
        Output: 
        1 2 3 4 8 12 11 10 9 5 6 7
        Explanation:
        Applying same technique as shown above, 
        output for the 2nd testcase will be 
        1 2 3 4 8 12 11 10 9 5 6 7.

**➔ Your Task**

      You dont need to read input or print anything. Complete the function spirallyTraverse() that takes matrix, r and c as input parameters and returns a list of integers denoting the spiral traversal of matrix. 

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(r*c)</td> <td align="center">O(r*c)</td></tr>
</table>

### **Constraints** 

        1 <= r, c <= 100
        0 <= matrixi <= 100