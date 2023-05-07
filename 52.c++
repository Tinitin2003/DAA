//  Given an unsorted array of integers, design an algorithm and implement it using a program to find 
// whether two elements exist such that their sum is equal to the given key element. (Time
// Complexity = O(n log n))
#include <iostream>
#include<algorithm>
using namespace std;
void fun()
{
    int n,k,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
     sort(arr,arr+n);
     bool b=false;
     int left=0,right=n-1;
     while(left<right)
     {
        int sum=arr[left]+arr[right];
        if(sum==k)
        {   
            cout<<arr[left]<<" "<<arr[right]<<endl;
            return ;
        }
        else if(sum<k)
           left++;
        else
          right--;
     }
    if(b==false)
      cout<<"No such element exist";


}
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        fun();
    }
}