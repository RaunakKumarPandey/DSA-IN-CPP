#include<iostream>
using namespace std;
void gun(int n){
    if(n==0) return;
    cout<<"Hello CW"<<endl;
    gun(n-1);// function calling itself
}
void fun(){
    cout<<"Hello PW"<<endl;
    gun(4); // function callinng function 
    return;

}
int main(){
    fun();
}
