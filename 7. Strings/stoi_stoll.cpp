#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "123456";
    int x = stoi(str); // string to integer
    cout<<x+1<<endl;

    int a = 1234567;
    string s = to_string(a); // integer to string
    cout<<s+"1"<<endl;

    string str1 = "1234567891234";
    long long x1 = stoll(str1);
    cout<<x<<endl;
}
