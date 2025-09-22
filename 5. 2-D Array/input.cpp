#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. rows : ";
    cin>>m;
    int n;
    cout<<"enter the no. collumns : ";
    cin>>n;
    int arr[m][n];
    for(int i = 0; i<=m-1; i++){ // i is row
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
     }
     // Print
     for(int i = 0; i<=m-1; i++){ // i is row
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
}