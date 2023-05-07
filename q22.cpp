#include<iostream>
#include<algorithm>
#define MAX 100
using namespace std;
void findTripletIndices(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (binary_search(arr, arr + n, sum))
            {
                int k = lower_bound(arr, arr + n, sum) - arr;
                cout << i << ", " << j << ", " << k << endl;
                return;
            }
        }
    }
    cout << "No Sequence found" << endl;
}
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
    findTripletIndices(arr,n);

}
}