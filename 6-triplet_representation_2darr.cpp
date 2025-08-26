// triplet representation
#include <iostream>
using namespace std;
int main(){
    int rows=3,cols=3;
    int mat[3][3]={
        {5,0,0},
        {0,0,8},
        {0,0,0}
    };
    cout<<"triple representation :\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]!=0)
            cout<<i<<" "<<j<<" "<<mat[i][j]<<endl;
            
        }
    }
    return 0;

}