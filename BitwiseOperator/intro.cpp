#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;

    cout<<" a&b "<< (a&b)<< endl; // AND
    cout<<" a|b "<< (a|b)<< endl;// OR
    cout<<" ~a "<< (~a)<< endl;//NOR

    cout<<" a^b "<< (a^b)<< endl;//XOR

    cout<< (17>>1)<<endl;  // left shift
    cout<< (17>>2)<<endl;  // left shift
    cout<< (17<<1)<<endl;  // Right shift
    cout<< (21<<2)<<endl;  // Right shift

}