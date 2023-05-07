#include<iostream>
#include<algorithm>
#define MAX 100
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    bool flag=true;
    cin>>n;
    int arr[MAX];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            flag=false;
            cout<<"Yes"<<endl;
            break;
        }
    }
    if(flag){
        cout<<"No"<<endl;
    }

    }

}