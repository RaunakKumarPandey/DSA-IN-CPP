#include<iostream>
#include<vector>
using namespace std;
int main (){
   // vector<int> v(5); // 5 size ka vector bn jaayega aur 0 store ho jaayega
   vector<int> v1(5,2);// 5 sie ka vector bn gya and each element 2 aa gya .
   cout<<v1[0]<<endl;
   cout<<v1[1]<<endl;
   cout<<v1[2]<<endl;
   cout<<v1[3]<<endl;
   cout<<v1[4]<<endl;

   vector< vector<int> > v2(3,vector<int> (4));// v vector mein 3 new vector honge aur each vector mein 4 collumn honge.
   for(int i = 0; i<3; i++){
    for(int j = 0; j<4; j++){
        cout<<v2[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;
   vector< vector<int> > v3(3,vector<int> (4,2));//2 2 2 2 2 2 2 2 2 2 2 2 
   cout<<v3[0][2];
   for(int i = 0; i<3; i++){
    for(int j = 0; j<4; j++){
        cout<<v3[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;
   cout<<v2.size()<<endl;
   cout<<v2[3].size()<<endl;
   cout<<v3.size()<<endl;
   cout<<v3[3].size()<<endl;
}