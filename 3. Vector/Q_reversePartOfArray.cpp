//Rotate the given array 'a' by k steps, where k is non-negative. 

// Reverse Part of Array 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& a){
    for(int i = 0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, vector<int>& v1){
    while(i<=j){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
        i++;
        j--; 
    }
    return;
}
void reverse(vector<int>& v1){
    int i = 0;
    int j = v1.size()-1;
    while(i<=j){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
        i++;
        j--; 
    }
    display(v1);

}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3)  ;
    v1.push_back(7);
    v1.push_back(4);

   
    display(v1);
     reversePart(0,2,v1);
    // //reverse
    display(v1);
    reverse(v1);
}