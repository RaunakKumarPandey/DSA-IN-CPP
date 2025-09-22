#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6); // size:1, capacity:1.
    v.push_back(1); // 2 2
    v.push_back(9); // 3 4
    v.push_back(10); // 4 4
    v.push_back(9); // 5 8
    v.push_back(10); // 6 8
    v.push_back(1); // 7 8
    v.push_back(9); // 8 8
    v.push_back(10); // 9 16
    v.push_back(9); // 10 16
    v.push_back(10); // 11 16
   
cout<<endl;
cout<<"Current Size of Vector: "<<v.size()<<endl;
cout<<"Current Capacity of Vector: "<<v.capacity()<<endl;


v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
// pop_back() function se size change hoga but capacity will not change.

cout<<endl;
cout<<"New Current Size of Vector: "<<v.size()<<endl;
cout<<"New Current Capacity of Vector: "<<v.capacity()<<endl;

}