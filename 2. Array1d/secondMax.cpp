#include<iostream>
#include<climits>
using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of array : ";
//     cin>>n;
//     int arr[n];
//     //input
//     for(int i = 0; i<=n-1;
//     i++){
//         cin>>arr[i];
//     }
//     //int max = arr[0];
//     int max = INT_MIN;
//     for(int i = 0 ;
//     i<=n-1;i++){
//         if(max<arr[i]) max = arr[i];
//     }

//     int sec_max = INT_MIN;
//     for(int i = 0;i<=n-1;i++){
//         if(arr[i]!=max && sec_max<arr[i]) sec_max = arr[i];
//     }
//     cout<<max<<endl;
//     cout<<sec_max<<endl;
//     return 0;
// }

//Revison
int main(){
    cout<<"Enter Size of arr : ";
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int mx = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>mx) mx = arr[i];
    }
    int Smx = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>Smx&&arr[i]!=mx) Smx = arr[i];
    }
    cout<<Smx<<endl;
}