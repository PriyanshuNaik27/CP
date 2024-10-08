#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int numberOfTestCase;
    cin>>numberOfTestCase;
    while(numberOfTestCase>0){
        int n,x;
        cin>>n>>x;
        vector<int> station(n+2);
        station[0]=0;
        for(int i=1;i<=n;i++){
            cin>>station[i];
        }
        station[n+1]=x;

        vector<int> dif;
        for(int i=0;i<n;i++){
            dif.push_back(station[i+1]-station[i]);
        }
        dif.push_back(2*(station[n+1]-station[n]));
        sort(dif.begin(),dif.end());
        cout<<dif[n]<<endl; 
        numberOfTestCase--;
    }
    return 0;
}