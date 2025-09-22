#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. rows/collumns : ";
    cin>>m;
    
    int arr[m][m];
    for(int i = 0; i<=m-1; i++){ // i is row
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
     }
     for(int i = 0; i<=m-1; i++){ // i is row
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
     }
     cout<<endl;
     // transpose in the same matrix
     for(int i = 0; i<=m-1; i++){ // i is row
        for(int j=i+1; j<=m-1; j++){ // j is collumns
            // swaping  of i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr [j][i];
            arr[j][i] = temp;
        }
     }
     // print 
     for(int i = 0; i<=m-1; i++){
        for(int j = 0 ; j<=m-1 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
    }