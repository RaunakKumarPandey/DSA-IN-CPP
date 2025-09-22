//Rotate the given array 'a' by k steps, where k is non-negative. 
#include<iostream>
#include<vector>
using namespace std;
 void  display(vector<int>& v){
    int n = v.size();
    for(int i = 0; i<n;i++){
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    return ;
 }
  void reversePart(int i, int j, vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
  }
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    display(v);
    // int k =2;
    int k = 4;
    // int k= 20 // segmentation fault as k>n index out of limit bound.// but k can be >= n as rotation possible as many time as we want.
    // so for k>n use k = k%n as k = n gives same array as given.
    // rotate
    int n = v.size();// 7
    reversePart(0,n-k-1,v);
    display(v);
    reversePart(n-k,n-1,v);
    display(v);
    reversePart(0,n-1,v);
    display(v);
}