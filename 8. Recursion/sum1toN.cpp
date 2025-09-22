#include<iostream>
using namespace std;
void sum1toN(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum1toN(sum+n,n-1);
}

// return type method
int sum2(int n ){
    if(n ==0) return 0;
    return n+sum2(n-1);
}
int main(){
    sum1toN(0,10);
    int n ; 
    cout<<"Enter n : ";
    cin>>n;
    cout<<sum2(n);
}