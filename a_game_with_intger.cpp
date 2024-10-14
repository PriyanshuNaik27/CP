#include<iostream>
using namespace std;
int main(){
    int numberOfTestCase;
    cin>>numberOfTestCase;
    while(numberOfTestCase>0){
        int n;
        cin>>n;
        if(n%3==0){
            cout<<"Second"<<endl;
        }
        else cout<<"First"<<endl;
        numberOfTestCase--;
    }
}