#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= n;j++){
            // cout<<char(i+j-1+64)<<" ";
            char ch ='A'+i+j-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}