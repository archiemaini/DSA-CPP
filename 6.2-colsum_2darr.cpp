#include <iostream>
using namespace std;
void sumofcols(int arr[3][4]){
    for(int col=0;col<4;col++){
        int summ=0;
        for(int row=0;row<3;row++){
            summ+=arr[row][col];
        }
        cout<<summ<<" ";
    }
    
}
int main() {
    int arr[3][4]={1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,11 ,12};
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){  
            cout<<arr[row][col]<<", ";
        }
        cout<<endl;
    }
    
    

    cout << endl;
    cout << "Column sums:" << endl;
    sumofcols(arr);
    
    return 0;
}