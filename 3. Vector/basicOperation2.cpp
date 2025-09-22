#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v; // you need not mention the size.
// giving value to vector.
// for insertin/input do not use [].
v.push_back(6);
cout<<"Current Size of Vector: "<<v.size()<<endl;// gives current size of vector it is inbuilt function vector.
cout<<"Current Capacity of Vector: "<<v.capacity()<<endl;// gives current capacity of vector it is inbuilt function vector.
v.push_back(1);
cout<<"Current Size of Vector: "<<v.size()<<endl;
cout<<"Current Capacity of Vector: "<<v.capacity()<<endl;
v.push_back(9);
cout<<"Current Size of Vector: "<<v.size()<<endl;
cout<<"Current Capacity of Vector: "<<v.capacity()<<endl;
v.push_back(0);
cout<<"Current Size of Vector: "<<v.size()<<endl;
cout<<"Current Capacity of Vector: "<<v.capacity()<<endl;
// to print v Dynamic array.
// if you want to update/access  can use [].
cout<<v[0]<<" ";
cout<<v[1]<<" ";
cout<<v[2]<<" ";
cout<<v[3]<<" ";
}