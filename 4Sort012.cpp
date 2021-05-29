/*Sort an array of 0s, 1s and 2s 
Easy Accuracy: 51.36% Submissions: 76040 Points: 2
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated 
into ascending order.

Your Task:
You don't need to read input or print anything. Your task is to complete the function sort012() that takes an array arr and N as input parameters and sorts the array in-place.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2*/
#include<iostream>
using namespace std;
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) count0++;
            if(a[i]==1) count1++;
            if(a[i]==2) count2++;
        }
        for(int i=0;i<count0;i++)
        {
            a[i]=0;
        }
        for(int i=count0;i<count0+count1;i++)
        {
            a[i]=1;
        }
        for(int i=count1+count2;i<n;i++)
        {
            a[i]=2;
        }
    }
    
};
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Solution obj;
    obj.sort012(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}