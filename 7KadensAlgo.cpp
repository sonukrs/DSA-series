/*Kadane's Algorithm 
Medium Accuracy: 51.0% Submissions: 81224 Points: 4
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.


Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
Example 2:

Input:
N = 4
arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1 
of element (-1)

Your Task:
You don't need to read input or print anything. The task is to complete the function maxSubarraySum() which takes arr and N as input parameters and returns the sum of subarray with maximum sum.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 106
-107 ≤ A[i] ≤ 107*/

#include<iostream>
using namespace std;
//one apporach is of n^2 for each index sum of subarray
//we will use kaden's algo here
int maxSubarraySum(int a[],int n)
{
    int sum=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        maxi=max(sum,maxi);
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxi;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<maxSubarraySum(a,n);
}