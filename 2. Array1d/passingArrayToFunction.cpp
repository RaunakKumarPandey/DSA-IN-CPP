// array pass by refrences hota hai.

#include<iostream>
using namespace std;
void display(int a[], int size){ // int* a == int a[]
    // int size = sizeof(a)/sizeof(a[0]); //warning here size of (a) will  return the size of the pointer, not array itself because array pass by refrence hota hai . so hm alag se size of array bhi pass karenge.

    for(int i = 0; i<=size-1;i++){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
    return;
}
void change(int b[], int size){ // int* b == int b[]
    b[0] = 100;
}
int main(){
    int arr[] = {1,4,2,7,46};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing the element of array in another function.
    // updation, pass by value/reference ?
    display(arr,size);
    change(arr, size);
    display(arr,size); // modified array // function mein array ko update krne se yaha pr change ho raha hai this proves that array passes by refrences not by value.
}