// vector is dynamic array i.e have not fixed size.
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v; // you need not mention the size.
// giving value to vector.

//v[0] = 6; // error dega as 0 index is not available as initially vector is empty or Zero Siz e.
// v[1] = 1; // segmentation fault dega as push back size and capacity dono check krta hai but v[1] iss trah ka syntax direct value de deta hai.
// for insertin/input do not use [].
v.push_back(6);
v.push_back(1);
v.push_back(9);
v.push_back(0);
// to print v Dynamic array.
// if you want to update/access  can use [].
cout<<v[0]<<" ";
cout<<v[1]<<" ";
cout<<v[2]<<" ";
cout<<v[3]<<" ";
}