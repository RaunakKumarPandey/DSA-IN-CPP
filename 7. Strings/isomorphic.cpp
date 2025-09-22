#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    string s; 
    string t;
    cout<<"Enter string s :";
    getline(cin,s);
    cout<<"Enter string t :";
    getline(cin,t);
    if(s.length()!=t.length()) {cout<<"False";
   return 0;
}
    vector <int> v1(256,-1);
    vector <int> v2(256,-1);
    for(int i = 0; i<s.length();i++){
        char c1 = s[i],c2 = t[i];
        if(v1[c1]==-1&&v2[c2]==-1){
            v1[c1]=c2;
            v2[c2]=c1;
        }
       else{
           if(v1[c1]!=c2||v2[c2]!=c1){
                cout<<"False";
                return 0;
            }
        }
    }
    cout<<"True";
    return 0;

}
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// int main() {
//     string s, t;
//     cout << "Enter string s: ";
//     getline(cin, s);
//     cout << "Enter string t: ";
//     getline(cin, t);

//     if (s.length() != t.length()) {
//         cout << "False";
//         return 0;
//     }

//     vector<int> v1(256, -1);
//     vector<int> v2(256, -1);

//     for (int i = 0; i < s.length(); i++) {
//         char c1 = s[i], c2 = t[i];
//         if (v1[c1] == -1 && v2[c2] == -1) {
//             v1[c1] = c2;
//             v2[c2] = c1;
//         } else {
//             if (v1[c1] != c2 || v2[c2] != c1) { // FIXED HERE
//                 cout << "False";
//                 return 0;
//             }
//         }
//     }

//     cout << "True";
//     return 0;
// }
