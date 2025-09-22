#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    for(int i = 0;i<v.size();i++){
   cout<<v[i]<<" ";
}
cout<<endl;
cout<<"Current Size of Vector: "<<v.size()<<endl;
cout<<"Current Capacity of Vector: "<<v.capacity()<<endl;

v.pop_back();// last se ek element ko delete krega and similarly ek size bhi decrease krega but capacity ko change nhi krega.
// tToh capacity change nhi krta hai ek baar hmne space  le liya toh le liya.
v.pop_back();
for(int i = 0;i<v.size();i++){
   cout<<v[i]<<" ";
}
cout<<endl;
cout<<"New Current Size of Vector: "<<v.size()<<endl;
cout<<"New Current Capacity of Vector: "<<v.capacity()<<endl;
}
