#include<iostream>
#define MAX 100
using namespace std;
int nc=0;
void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(int j=0;j<n2;j++)
        R[j]=arr[mid+1+j];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        nc++;
        if(L[i]<=R[j]){
            arr[k++]=L[i++];
        }else{
            arr[k++]=R[j++];
        }
    }
    while(i<n1) arr[k++]=L[i++];
    while(j<n2) arr[k++]=R[j++];
}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    nc=0;
    cin>>n;
    int arr[MAX];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Comparisions = "<<nc<<endl;
    }
 
}