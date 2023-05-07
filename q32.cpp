#include<iostream>
#define MAX 100
using namespace std;
void selectionSort(int arr[],int n){
    int nc=0,s=0;
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            nc++;
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        s++;
        swap(arr[min_idx],arr[i]);
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"comparisions = "<<nc<<endl;
    cout<<"swaps ="<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[MAX];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    }
 
}