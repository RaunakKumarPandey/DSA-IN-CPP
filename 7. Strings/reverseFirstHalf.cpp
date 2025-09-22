#include<iostream>
#include<string>
#include<algorithm> // For std::reverse
using namespace std;
int main(){
    string s;
    getline(cin, s); // Read the entire line including spaces
    int length = s.length();
    reverse(s.begin(), s.begin() + length / 2); // Reverse the first half of the string
    cout << s << endl;
}