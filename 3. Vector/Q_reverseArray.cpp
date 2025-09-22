// Write a proggramme to reverse the array without any extra array.
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
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);
    display(v1);
    // //reverse
    int i = 0;
    int j = v1.size()-1;
    while(i<=j){
        // swap v[i] and v[j]
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
        i++;
        j--;
    }
    display(v1);

    //isko for loop se bhi kr skte hai by using two variable
    for(int i = 0,j=v1.size()-1;i<=j;i++,j--){
        // swap v[i] and v[j]
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
    }
display(v1);

// method 3 // vector mein built in reverse function hai.
reverse(v1.begin(),v1.end());
display(v1);


}