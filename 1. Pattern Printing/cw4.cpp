#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= n;j++){
            // cout<<char(i+64)<<" ";
            char ch ='A'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}