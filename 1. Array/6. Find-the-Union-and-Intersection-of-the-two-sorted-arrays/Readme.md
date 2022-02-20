<h1>:heavy_check_mark: Union of two arrays</h1>
<blockquote>Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.</blockquote>

* **Example 1**:<br>

        Input:
        5 3
        1 2 3 4 5
        1 2 3
        Output: 
        5
        Explanation: 
        1, 2, 3, 4 and 5 are the
        elements which comes in the union set
        of both arrays. So count is 5.

* **Example 2**:<br>

        Input:
        6 2 
        85 25 1 32 54 6
        85 2 
        Output: 
        7
        Explanation: 
        85, 25, 1, 32, 54, 6, and
        2 are the elements which comes in the
        union set of both arrays. So count is 7.

**➔ Your Task**

      Complete doUnion funciton that takes a, n, b, m as parameters and returns the count of union elements of the two arrays. The printing is done by the driver code.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O((n+m)log(n+m))</td> <td align="center">O(n+m)</td></tr>
</table>

### **Constraints** 
    1 ≤ n, m ≤ 10^5
    0 ≤ a[i], b[i] < 10^5