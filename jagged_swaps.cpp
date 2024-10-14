#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fun(vector<int>& permut,int size){
    for(int i=1;i<size-1;i++){
            if(permut[i-1]<permut[i] && permut[i]>permut[i+1]){
                swap(permut[i],permut[i+1]);
            }
        }
    for(int i=1;i<size-1;i++){
        if(permut[i-1]<permut[i] && permut[i]>permut[i+1]){
                fun(permut,size);
            }
    }

}
int main(){
    int numberOfTestCase;
    cin>>numberOfTestCase;
    while(numberOfTestCase>0){
        int n;
        cin>>n;
        vector<int> permutation;
        vector<int> sorted;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            permutation.push_back(x);
            sorted.push_back(x);
        }
        fun(permutation,n);
        sort(sorted.begin(),sorted.end());
        cout<<"this is sorted";
        for(int i=0;i<n;i++){
            cout<<sorted[i]<<" ";
        }
        cout<<endl;
        cout<<"this is permutaed";
        for(int i=0;i<n;i++){
            cout<<permutation[i]<<" ";
        }
        
        bool isSorted=true;
        for(int i=0;i<n;i++){
           
            if(permutation[i]!=sorted[i]){
                isSorted =false;
                break;
            }
        }
        if(isSorted==true){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        


        numberOfTestCase--;
    }

}