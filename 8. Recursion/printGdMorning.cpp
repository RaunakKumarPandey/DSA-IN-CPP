#include<iostream>
using namespace std;
void printGoodMorning(int n){
    if(n==0) return; // base case
    cout<<"Good Morning"<<endl;
    printGoodMorning(n-1);
}
int main(){
    int n;
    cout<<"Enter n : "<<endl;;
    cin>>n;
    printGoodMorning(n);
}