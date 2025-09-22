#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    //input
    for(int i = 0; i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search : "<<endl;
    cin>>x;
    //search
    // for(int i = 0; i<=n-1;i++){
    //     if(arr[i]==x) cout<<"Present"<<endl;
    //     else cout<<" Absent"<<endl; // isme dikkat hai ki jb koi element match krne pr present baar baar aa jaayega if element is present more than one times aur jitna baar else chlega utna baar absent lkha aa jaayega so
    //     // we use bool flag method 
    // }

    bool flag = false; // false -> not present by default maan liye.
    for(int i = 0; i<=n-1;i++){
        if(arr[i]==x)  flag = true;
    }
    if(flag==true) cout<<"element found";
    else cout<<"404 element not found";
}