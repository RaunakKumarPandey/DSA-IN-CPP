#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //["flower","flow","flight"]
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    for(int i = 0; i<v.size(); i++){
        cout<< v[i] <<endl;
    }
    cout<<endl;
    int n = v.size();
    if(n==1) cout<<v[0]<<endl;
    sort(v.begin(),v.end()); // lexographically
    for(int i = 0; i<v.size(); i++){
        cout<< v[i] <<endl;
    }
    string first = v[0];
    string last = v[n-1];
    string s = "";
    for(int i = 0; i<(min(first.size(),last.size())); i++){
        if(first[i]==last[i]){
            s += first[i];
        }
        else break;
    }
    cout<<s<<endl;
}