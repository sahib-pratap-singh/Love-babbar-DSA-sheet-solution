<h1>:heavy_check_mark: Minimize the Heights II </h1>
<blockquote>Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
Find out the minimum possible difference of the height of shortest and longest towers after you have modified each tower.

You can find a slight modification of the problem here.
Note: It is compulsory to increase or decrease (if possible) by K to each tower.</blockquote>

* **Example 1**:<br>

        Input:
        K = 2, N = 4
        Arr[] = {1, 5, 8, 10}
        Output:
        5
        Explanation:
        The array can be modified as 
        {3, 3, 6, 8}. The difference between 
        the largest and the smallest is 8-3 = 5.

* **Example 2**:<br>

        Input:
        K = 3, N = 5
        Arr[] = {3, 9, 12, 16, 20}
        Output:
        11
        Explanation:
        The array can be modified as
        {6, 12, 9, 13, 17}. The difference between 
        the largest and the smallest is 17-6 = 11. 

**➔ Your Task**

      You don't need to read input or print anything. Your task is to complete the function getMinDiff() which takes the arr[], n and k as input parameters and returns an integer denoting the minimum difference.



<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(n*log(n))</td> <td align="center">O(n)</td></tr>
</table>

### **Constraints** 
    1 ≤ K ≤ 10^4
    1 ≤ N ≤ 10^5
    1 ≤ Arr[i] ≤ 10^5