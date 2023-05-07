#include<iostream>
#include<cmath>
#define MAX 100
using namespace std;
void jumpSearch(int arr[],int n,int key){
    int left=0,nc=0;
    int right=sqrt(n);
    while(arr[right]<=key && right<n){
        nc++;
        left=right;
        right+=sqrt(n);
        if(right>n-1){
            right=n;
        }
    }
    for(int i=left;i<right;i++){
        nc++;
        if(arr[i]==key){
            cout<<"Present "<<nc<<endl; 
            return;
        }
    }
    cout<<"Not Present "<<nc<<endl; 

}
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
    jumpSearch(arr,n,key);
    }
    return 0;
}