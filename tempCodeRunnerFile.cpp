#include<iostream>
#define MAX 100
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,i,j,k;
    bool check=false;
    cin>>n;
    int arr[MAX];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for( k=0;k<n;k++){
        for( i=0;i<n;i++){
            for( j=0;j<n;j++){
                if(arr[i]+arr[j]==arr[k] && i!=j && j!=k){
                    check=true;
                    break;
                }
                if(check==true){
                    break;
                }
            }
            if(check==true){
                break;
            }
        }
    }
    if(check==true){
        cout<<i<<","<<j<<","<<k<<endl;
    }else{
        cout<<"No sequence found"<<endl;
    }
    }
}