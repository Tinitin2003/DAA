#include<iostream>
#define MAX 100
using namespace std;
void insertionSort(int arr[],int n){
    int nc=0,s=0;
    for(int i=1;i<n;i++){
        int key=arr[i]; 
        int j=i-1;
         while(j>=0 && arr[j]>key){
            nc++;
            arr[j+1]=arr[j];
            s++;
            j--;
        }
        arr[j+1]=key;
        s++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"comparisions = "<<nc<<endl;
    cout<<"shift ="<<s<<endl;
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
    insertionSort(arr,n);
    }
 
}