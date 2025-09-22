#include<iostream>
using namespace std;
void greet(){
    cout<<"Good Morning"<<endl;
    cout<<"How are you?"<<endl;
}
int product(int a , int b){ // int a and int b i s arguments iske andr parameters pass krte ahi
    return a*b;
}
int main(){
    int a =2,b=4;
    cout<<product(a,b);
    cout<<endl; // a, nb is argument
    greet();
    //
    //
    //
    //
    greet();

    int s1 = 6;

    int s2 = 8;

    cout<<s1<<" "<<s2<<endl;

    swap(s1,s2);// swaqp is built in c++ function;
    cout<<s1<<" "<<s2<<endl;

    cout<<min(s1,s2); //min is also built in function in c++

    cout<<max(s1,s2);//max is also built in function in c++

    // max min swap do hi parameter pr or do hi value pr work krta hai.
}