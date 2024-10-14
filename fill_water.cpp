#include<iostream>
#include<string>
using namespace std;
int main(){
    int numberOfTestCase;
    cin>>numberOfTestCase;
    while(numberOfTestCase>0){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        int ans=0;
        while(i<n){
            if(s[i]=='.'){
                int count=0;
                while(i<n && s[i]=='.'){
                    count++;
                    i++; 
                }
                if(count>=3){
                        ans=2;
                        break;
                    }
                    else{
                        ans+=count;
                    }
            }
            else{i++;}
        }
        
        cout<<ans<<endl;
        numberOfTestCase--;
    }
}