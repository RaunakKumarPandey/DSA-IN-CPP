#include<iostream>
using namespace std;

int main() {
   // int arr [] = {1, 2, 3, 4, 5};
    char str[] = {'a', 'b', 'c', 'd', 'e'};
    //char str2[] = "abcde";
    for(int i = 0; i<5; i++) {
        cout << str[i] << " ";
        
    }
    cout << endl;
    // char ch = '\0';
    //     cout << (int)ch << " ";
        char str3[10] = {'a', 'b', 'c', 'd', 'e','f'};
        for(int i = 0; str3[i]!='\0'; i++) {
        cout << str3[i] << " ";
    
    }
    cout << endl;
}