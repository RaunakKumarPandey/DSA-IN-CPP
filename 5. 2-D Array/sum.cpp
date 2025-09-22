#include<iostream>
#include<climits>
#include<algorithm>
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
     // sum
     int sum = 0;
     for(int i = 0; i<=m-1; i++){ // i is row
        for(int j=0; j<=n-1; j++){
            sum += arr[i][j];
        }
     }
     cout<<sum;
    }
     