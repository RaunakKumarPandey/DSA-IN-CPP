#include<iostream>
#include<vector>
using namespace std;
void change(int a[]){ // 1D array pass by referene hota hai so size nhi bhi dete hai toh koi error show nhi krta hai.
    a[0] = 9;
}
void change2D(int arr[3][3]){ // 2D array when function mein pass hota hai toh array ka  size dena zaruri hota hai
    arr[0][0] = 100;

}
int main(){
    int a[3] = {1,2,3};
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change2D(arr);
    cout<<arr[0][0]<<endl;
}