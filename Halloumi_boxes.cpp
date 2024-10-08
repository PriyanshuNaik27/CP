#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int numberOfTestCase;
    cin>>numberOfTestCase;
    while(numberOfTestCase >0){
        int n;
        int k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(n==k){
            cout<< "yes";
        }
        else if(k==1){
            if(isSorted(arr,n)){
                cout<< "yes";
            }
            else cout<<"NO";
        }
        else if(n>k){
            cout<<"yes";
        }
    }
    numberOfTestCase--;
    return 0;
    
}