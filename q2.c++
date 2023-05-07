#include<iostream>
#define MAX 100
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,key,nc=0;
    cin>>n;
    bool find=true;
    int arr[MAX];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    int low=0,high=n;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            nc++;
            find=false;
            cout<<"Present "<<nc;
            break;
        }else{
            if(arr[mid]<key){
                nc+=2;
                low=mid+1;
            }else{
                nc+=3;
                high=mid;
            }
        }
    }
    if(find){
    cout<<"Not Present "<<nc<<endl;
    }
    }
    return 0;
}