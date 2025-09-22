#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    int n = v.size();
    for (int i = 0; i<n;i++){
        cout<<v.at(i)<<" "; 
       
    }
     cout<<endl;
     // sort
     sort(v.begin(),v.end());

 for (int i = 0; i<n;i++){
        cout<<v.at(i)<<" "; 
       
    }

}