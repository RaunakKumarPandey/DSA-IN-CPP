#include<iostream>
#include<vector>


using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
    // int i = 0;
    // int j = n-1;
    // while(i<j){
    //     if(v[i]<0) i++;
    //     else if(v[j]>=0) j--;
    //     else if(v[i]>=0&& v[j]<0){
    //         int temp = v[i];
    //         v[i] = v[j];
    //         v[j] = temp;
    //         i++;
    //         j--;
    //     }
    // }

    // for(int i = 0; i<n;i++){
    //     cout<<v[i]<<" ";
    // }

for(int i = 0; i<n-1; i++){
    if(v[i]<0) continue;

    for(int j =i-1;j<n;j++ ){
        if(v[i]>v[j]) v[i] =v[j];
    }
}
for(int i = 0; i<n;i++){ 
      cout<<v[i]<<" ";
    }


	
	return 0;
}