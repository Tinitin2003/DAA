//  Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and
// implement it using a program to find which alphabet has maximum number of occurrences and
// print it. (Time Complexity = O(n)) (Hint: Use counting sort)
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
                int n,k,i;
    cin>>n;
    char arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count[126]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    int c=-1;
    char ch;
    for(int i=0;i<n;i++)
    {
        if(count[arr[i]]>1 &&count[arr[i]]>c)
        {
            ch=arr[i];
            c=count[arr[i]];
        }
    }
    if(c==-1)
    {
        cout<<"No Duplicates Present"<<endl;
    }
    else
    {
      cout<<ch<<"-"<<c<<endl;
    }

    }
}