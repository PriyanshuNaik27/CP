#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   
    while(t>0){
        vector<int> store;
        int n;
        cin>>n;
        int count_2=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            store.push_back(x);
            if(x==2) count_2++;
        }
        if(count_2%2==0){
            int count=0;
            for(int i=0;i<n;i++){
                if(store[i]==2){
                    count++;
                }
                if(count_2/2==count){
                    cout<<i+1<<endl;
                    break ;
                }
            }
        }
        else cout<<"-1"<<endl;
        
        t--;
    }
}