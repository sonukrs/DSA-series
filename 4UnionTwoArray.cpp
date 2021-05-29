/*Union of two arrays 
Basic Accuracy: 52.81% Submissions: 35038 Points: 1
Given two arrays a[] and b[] of size n and n respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in union.

Example 1:

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
Example 2:

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
Your Task:
Complete doUnion funciton that takes a, n, b, m as parameters and returns the count of union elements of the two arrays.The printing is done by the driver code.

Constraints:
1 ≤ n, m ≤ 105
1 ≤ a[i], b[i] < 105

Expected Time Complexity : O((n+m)log(n+m))
Expected Auxilliary Space : O(n+m)*/
#include<bits/stdc++.h>
using namespace std;
int doUnion(int a[], int n, int b[], int m)
{
    unordered_map<int,int> m1;
    for(int i=0;i<n;i++)
    {
        m1[a[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        m1[b[i]]++;
    }
    return m1.size();
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<doUnion(a,n,b,m);
}