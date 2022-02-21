<h1>:heavy_check_mark: Kadane's Algorithm </h1>
<blockquote>Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.</blockquote>

* **Example 1**:<br>

        Input:
        N = 5
        Arr[] = {1,2,3,-2,5}
        Output:
        9
        Explanation:
        Max subarray sum is 9
        of elements (1, 2, 3, -2, 5) which 
        is a contiguous subarray.

* **Example 2**:<br>

        Input:
        N = 4
        Arr[] = {-1,-2,-3,-4}
        Output:
        -1
        Explanation:
        Max subarray sum is -1 
        of element (-1)

**➔ Your Task**

      You don't need to read input or print anything. The task is to complete the function maxSubarraySum() which takes Arr[] and N as input parameters and returns the sum of subarray with maximum sum.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(n)</td> <td align="center">O(1)</td></tr>
</table>

### **Constraints** 
    1 ≤ N ≤ 10^6
    -10^7 ≤ A[i] ≤ 10^7