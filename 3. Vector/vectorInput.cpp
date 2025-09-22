#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
     // method 1 array method i.e for loop.n 
     // But yah method woha galat hoga jha vector ka initiql size nhi diya hoga 
     cout<<"enter a numn";
     for(int i = 0; i<5;i++){
        cin>>v[i];
     }
     for(int i = 0; i<5;i++){
        cout<<v[i]<<" ";
     } 

     // Method 2 // By Taking Extra Variable. // always true
     vector<int> v1;
     cout<<"Enter v1 "; 
     for(int i = 0; i<5;i++){
        int x;
        cin>>x;
        v1.push_back(x);
     }
     for(int i = 0; i<5;i++){
        cin>>v1[i];
     }
     
}