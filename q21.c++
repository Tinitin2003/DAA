#include<iostream>
#define MAX 100
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,key,count=0;
    cin>>n;
    int arr[MAX];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
     int low=0,high=n,found=-1;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
                   found=mid;
                   break;
        }else{
            if(arr[mid]<key){
                low=mid+1;
            }else{
                high=mid;
            }
        }
    }
    int left=found-1,right=found+1;
    while(left>=0 && arr[left]==key){
        count++;
        left--;
    }
     while(right<=n-1 && arr[right]==key){
        count++;
        right++;
    }
    cout<<key<<"-"<<count+1<<endl;
    }
}