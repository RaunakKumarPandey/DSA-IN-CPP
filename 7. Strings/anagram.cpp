#include<iostream>
#include<string>
#include<algorithm> // For std::sort
using namespace std;
int main(){
    string s = "physicswallah";
    string t = "phywallahsics";
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s==t) cout<<"true";
    else cout<<"false";
}