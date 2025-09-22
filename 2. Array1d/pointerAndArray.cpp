#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,6,1,7};
    int* ptr = arr; // array ke first element ka address store ho gya hai.
    // iska mtlb ye bikul nhi hai ki hm pura array ptr ko de diye nhi hm bs arr ke first element ke addres ko diye hai.
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl; // yah bhi same baat hai array ke first element ka address store kiya hai.
    // int* ptr1 = arr[0]; //error because arr[0] is a integer so can not store in adress variable.
     int* ptr1 = &arr[0];
     cout<<ptr1<<endl; // aur ye bhi same first element of array ka address store krega .
     cout<<ptr[0]<<endl; // first element of array ko store krega.

     for(int i = 0; i<=4;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     for(int i = 0; i<=4;i++){
        cout<<ptr[i]<<" ";  // one mmore way to an print array.
     }
      cout<<endl;
      // toh isse hme kya pta lgta hai ki kisi pointer ko hm kisi array ke first element ka address de dete hai toh us pointer ko puri power hoti hai uss array ko use krne ki.
      // use means pointer can print upadte delete add elemnt of array. 
      for(int i = 0; i<=4;i++){
        cout<<i[ptr]<<" "; // one mmore way to an print array.
     }
      cout<<endl;

      *ptr = 8; // same as ptr[0] = 8; // 0 index ka value update ho gya hai.
      ptr++;  // ptr is pointing to 2nd element.
      *ptr = 9;
      ptr--; // -- se ptr again reach or start to point 1sst element.

      for(int i = 0; i<=4;i++){
        cout<<*ptr<<" "; // one more way to print an array
        ptr++;
     }
      ptr = arr; //ptr is pointing to 1st element.

 }