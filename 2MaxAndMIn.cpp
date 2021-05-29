/*Maximum and minimum of an array using minimum number of comparisons
Difficulty Level : Easy
Last Updated : 27 Feb, 2021
Write a C function to return minimum and maximum in an array. Your program should make the minimum number of comparisons.
*/

#include<iostream>
using namespace std;
pair<int,int> maxMin(int *a,int n)
{
    pair<int,int> ans;
    if(n==1)
    {
        ans.first=a[0];
        ans.second=a[0];
        return ans;
    }
    if(a[0]>a[1])
    {
        ans.first=a[1];
        ans.second=a[0];
    }
    else
    {
        ans.first=a[0];
        ans.second=a[1];
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]>ans.second)
        {
            ans.second=a[i];
        }
        if(a[i]<ans.first)
        {
            ans.first=a[i];
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int *a=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pair<int,int> ans=maxMin(a,n);
    cout<<"Min: "<<ans.first<<" "<<"Max: "<<ans.second<<"\n";
}