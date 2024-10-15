#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        
        string s;
        cin>>s;
        
        int count_0 =0, count_1 =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') count_1++;
            else count_0++;
        }
        int count =min(count_0,count_1);
        
        if(count%2==0){
            cout<<"NET"<<endl;
        }
        else cout<<"DA"<<endl;

        t--;
    }
}