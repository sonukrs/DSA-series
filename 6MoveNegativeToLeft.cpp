/*
Move all negative numbers to beginning and positive to end with constant extra space
Difficulty Level : Easy
Last Updated : 05 May, 2021
An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
*/

#include<iostream>
using namespace std;
// O(n) time and O(n)space
void negativeLeft(int a[],int n)
{
    int b[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b[k++]=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[k++]=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}
//time complexity o(n) && space o(1)
void negativeLeft2(int a[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]<0)
        {
            i++;
        }
        else if(a[j]>0)
        {
            j--;
        }
        else if(a[i]>0 && a[j]<0)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
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
    //negativeLeft(a,n);
    negativeLeft2(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
