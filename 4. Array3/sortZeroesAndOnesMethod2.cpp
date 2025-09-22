// Method 2 :- Two Pointer Method 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort01m2(vector<int>& v1){
    int n = v1.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v1[i]==0) i++;
        if(v1[j]==1) j--;
        if(i>j) break; // without this outcome is 0 0 1 0 1 1 1 1; // iss problem ko dusre method se bhi solve kr skte hai ki swaping ko phle aur i++ and j-- wale if ko baad mein rakh kr. // 3rd method use else if instead of if.
        if(v1[i]==1&&v1[j]==0){
            // int temp = v1[i];
            // v1[i] = v1[j];
            // v1[j] = temp;
            //direct value de do as we know the value.
            v1[i] = 0;
            v1[j] = 1;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
     v1.push_back(1);
     v1.push_back(0);
    for(int i = 0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    sort01m2(v1);
    for(int i = 0; i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
