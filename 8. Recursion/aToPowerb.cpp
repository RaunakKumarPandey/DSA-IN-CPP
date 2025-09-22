#include<iostream>
using namespace std;

// by loop

int power(int a,int b){
    if(a==0&&b==0){
        cout<<"0 raised to power 0 is not defined";
        return -100;
    }
    if(a==0) return 0;
    int p =1;
    for(int i = 1; i<=b;i++){
        p *= a;
    }
    return p;
}

// by recursively

int powerRec(int p , int q){
    if(q==0) return 1;
    return p*powerRec(p,q-1);
}

int main(){
    int a,b;
    cout<<"Enter a and b :" ;
    cin>>a>>b;
    cout<<power(a,b);
    int p;
    cout<<"Enter base :";
    int q;
    cout<<"Enter exponent :";
    cin>>b;
    cout<<a<<"raised to the power "<<b<<" is "<<powerRec(p,q);
}