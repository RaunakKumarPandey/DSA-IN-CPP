#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of  matrix : ";
    cin>>m;
    int n; 
    cout<<"Enter cols of   matrices : ";
    cin>>n;

    int arr[m][n];
        cout<<"Enter elements of  matrix : ";
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                cin>>arr[i][j];
            }
        }
        cout<<endl;
        // spiral
        int minr = 0, minc = 0;
        int maxr = m-1, maxc = n-1;
        int tne = n*m;
        int count = 0; // if ke jagah count statement ka bhi use kr skte hai.
        while(minr<=maxr&&minc<=maxc){
            // for right // minr => fixed, minc to maxc && minr++ hoga;
            for(int j = minc; j<=maxc && count<tne ;j++){
                cout<<arr[minr][j]<<" ";
                count++;
            }
            minr++;
            // if(minr>maxr || minc>maxc) break;
            // down // maxc => fixed // minr to maxr
            for(int i = minr; i<=maxr && count<tne ; i++){
                cout<<arr[i][maxc]<<" ";
                count++;
                
            }
            maxc--;
            //  if(minr>maxr || minc>maxc) break;
            // left // maxr => fixed // maxc to minc
            for(int j = maxc; j>=minc && count<tne ; j--){
                cout<<arr[maxr][j]<<" ";
                count++;
            }
            maxr--;
            //  if(minr>maxr || minc>maxc) break;
            // up
            for(int i = maxr; i>=minr && count<tne ; i--){
                cout<<arr[i][minc]<<" ";
                count++;
            }
            minc++;

        }
}
