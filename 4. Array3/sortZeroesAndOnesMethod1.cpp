// Sort the array of 0's and 1's.
// array jisme 0 and 1 hoga uske element i.e 0 and 1 ko sort krna hai without using sort function.

// // ye toh ho gya sorting ka example with the use of sort function.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(4);
//     v.push_back(1);
//     v.push_back(7);
//     v.push_back(2);
//     v.push_back(3);
//     for(int i = 0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sort(v.begin(),v.end());
//     for(int i = 0; i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// Now come to the question 

// Method 1 :- Two Pass Method.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort01(vector<int>& v1){
    int n = v1.size();
    int noO = 0;
    int noZ = 0;
    for(int i = 0; i<n;i++){
        if(v1[i]==0) noZ++;
        else noO++;
    }
    // filling elements
    for(int i = 0; i<n;i++){
        if(i<noZ) v1[i]=0;
        else v1[i]=1;
    }
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    for(int i = 0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    sort01(v1);
    for(int i = 0; i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
