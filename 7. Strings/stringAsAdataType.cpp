#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "raghav garg";
    cout << str << endl;
    cout<<str[0] << endl;// just like array indexing
    string s;
   // cin>>s; // Only if the given string has no spaces
   getline(cin, s); // To read a string with spaces
    cout<<s;
}