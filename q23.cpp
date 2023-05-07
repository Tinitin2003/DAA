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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]-arr[j]==key){
                        count++;
            }
        }
    }
    cout<<count<<endl;
    }
 
}