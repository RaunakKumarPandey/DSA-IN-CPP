#include<iostream>
using namespace std;
void print(int n){
    if(n==1){ 
        cout<<1<<" ";
    return;
}
// // print 1 to n
print(n-1);
cout <<n<<" ";

// print n to 1

// // if(n==0) return; 

//  cout <<n<<" ";
// print(n-1);


   
}
int main(){
    int n; 
    cout<<"Enter n : "<<endl;
    cin>>n;
    print (n);
}


// // Another way
// void print(int i , int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);
// }

// int main(){
//     int n; 
//     cout<<"Enter n : "<<endl;
//     cin>>n;
//     print (1,n);
// }

