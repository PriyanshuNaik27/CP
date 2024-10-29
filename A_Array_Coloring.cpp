#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int odd=0;
        // int even=0;
        // vector<int> arr(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            // arr.push_back(x);
            if(x%2!=0) odd++;
            

        }
        if(odd%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        t--;
    }
}