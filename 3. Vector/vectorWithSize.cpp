#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);  // intial size = 5; each element vakue is zero by default.
    cout<<v[2]<<endl;
     vector<int> v1(5,7); // intial size = 5; each element have value 7.
     cout<<v1[2]<<endl;
     vector<int> v2(100,100); // vector v2 have size 100 and each element have value 100.
}