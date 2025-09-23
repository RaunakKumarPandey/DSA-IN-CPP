#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){ // sr = starting row, sc = starting collumn, er = ending row, ec = ending collumn
    if(sr>er|| sc>ec) return 0;
    if(sr==er && sc == ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}

// by using only two variable
int maze2 (int row, int col){
    if(row<1||col<1) return 0;
    if(row==1&&col==1) return 1;
    int  rightWays = maze2(row,col-1);
    int downWays = maze2(row-1,col);
    int totalWays = rightWays + downWays;
    return totalWays;
}
void printPath(int sr, int sc, int er, int ec, string s ){
    if(sr>er|| sc>ec) return ;
    if(sr==er && sc == ec) {// destination reached
        cout<<s<<endl;
        return ;
    }
    printPath(sr,sc+1,er,ec,s+'R'); // Right
    printPath(sr+1,sc,er,ec,s+'D'); // Down
    

}
// print path using two variables
    void printPath2(int rows,int cols, string s){
        if(rows<0||cols<0) return;
        if(rows==1&&cols==1){
            cout<<s<<endl;
            return;
        }
        printPath2(rows,cols-1,s+'R');
        printPath2(rows-1,cols,s+'D');   
    }
int main(){
    cout<<maze(1,1,3,3)<<endl;
    printPath(1,1,3,3,"");
    cout<<maze2(3,3)<<endl;
    printPath2(3,3,"");
}