// Pass By Reference by using & i.e ampercant.

#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& a){ // a -> 9 10 6 1
    a[0] = 100;    // yah update v vector array mein nhi hoga as vector pass by value hota hai.
    // But it can solve by the use of & ampercant. 
    cout<<"change Function" << endl;
     for (int i = 0; i<a.size();i++){
        cout<<a.at(i)<<" "; 
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    for (int i = 0; i<v.size();i++){
        cout<<v.at(i)<<" "; 
    }
    cout<<endl;
    change(v);
     for (int i = 0; i<v.size();i++){
        cout<<v.at(i)<<" "; 
    }
}