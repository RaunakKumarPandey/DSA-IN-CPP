#include<iostream>
#include<vector>
using namespace std;
// return type vector array bh ho skta hai
// vector<int> return type hai and merge function ka naam hai.
vector<int> merge(vector<int>& arr1,vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m+n);
    int i = 0; // correspond to arr1
    int j = 0; // correspond to arr2
    int k = 0; // correspond to res array

    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
           // k++;
        }
        else{ // arr2[j]<arr1[i];
            res[k] = arr2[j];
            j++;
            //k++;
        }
        // k++ dono mein use ho rha hai toh usko abundance kehte hai 
        k++;
    }
    // for remaining element
    if(i==n){ // arr1 ke saare elements utha chuka hoon
        while(j<m-1){
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    if(j==m){ // arr2 ke saare elements utha chucke hai
        while(i<=n-1){
            res[k] = arr1[i];
            k++;
            i++;
        }
    }
    return res;
}
int main(){
    // int arr1[4] = {1,4,5,8};
    // int arr2[6] = {2,3,6,7,10,12};
    // int arr3[10] ; 
    // vector<int> arr1(4); // 0 0 0 0
     vector<int> arr1;
    
    arr1.push_back(1);
     arr1.push_back(4);
      arr1.push_back(5);
     arr1.push_back(8); 
     for(int i = 0; i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"  ";

    // vector<int> arr2(6);
     vector<int> arr2;
     arr2.push_back(2);
     arr2.push_back(3);
     arr2.push_back(6);
     arr2.push_back(7);
     arr2.push_back(10);
     arr2.push_back(12);
     for(int i = 0; i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<"  ";

    // as return type vector hai toh calling function kisi vector mein store hoga.
    vector<int> v = merge(arr1,arr2);
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"  "; 
    
}
