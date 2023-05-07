#include<iostream>
#define MAX 100
using namespace std;
void swap(int *a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int left,int right,int pivotIndex){
    int pivotValue=arr[pivotIndex];
    swap(arr[pivotIndex],arr[right]);
    int storeIndex=left;
    for(int i=left;i<=right-1;i++){
        if(arr[i]<=pivotValue){
            swap(arr[i],arr[storeIndex]);
            storeIndex++;
        }
    }
    swap(arr[storeIndex],arr[right]);
    return storeIndex;
}
int quickSelect(int arr[],int left,int right,int k){
    if(left==right) return arr[left];
    int pivotIndex=left+(right-left)/2;
    pivotIndex=partition(arr,left,right,pivotIndex);
    if(k==pivotIndex)   return arr[k];
    else if (k<pivotIndex)  return quickSelect(arr,left,pivotIndex-1,k);
    else return quickSelect(arr,pivotIndex+1,right,k);
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n;
    int arr[MAX];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int kthSmallest=quickSelect(arr,0,n-1,k-1);
    cout<<kthSmallest<<endl;
    }
 
}