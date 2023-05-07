#include<iostream>
#define MAX 100
using namespace std;
int nc=0,s=0;
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        nc++;
        if(arr[j]<=pivot){
            i++;
            s++;
            swap(arr[i],arr[j]);
        }
    }
    s++;
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        nc=0,s=0;
    int n;
    cin>>n;
    int arr[MAX];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
       cout<<endl<<"comparisions = "<<nc<<endl;
    cout<<"swaps ="<<s<<endl;
    }
 
}