#include<iostream>
#include <chrono>
#define MAX 100
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,key,nc=0;
    bool find=true;
    cin>>n;
    int arr[MAX];
    for(int i=0;i<n;i++){
        arr[i] = (rand() % n) + 1;
    }
    cin>>key;
    auto start = chrono::high_resolution_clock::now();
    for(int i=0;i<n;i++){
        nc++;
        if(arr[i]==key){
            auto end = chrono::high_resolution_clock::now();
            auto time = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
            cout<<"Time taken for linear search: "<<time<<" nanoseconds\n";
            find=false;
            cout<<"Present "<<nc<<endl;
            break;
        }
    }
    if(find){
        auto end = chrono::high_resolution_clock::now();
            auto time = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
            cout<<"Time taken for linear search: "<<time<<" nanoseconds\n";
          cout<<"Not Present "<<nc<<endl;
    }
    }
}