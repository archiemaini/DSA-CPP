// largest row sum and index

#include <iostream>
#include <climits>
using namespace std;
void sumofrows(int arr[3][4]) {
    for (int row = 0; row < 3; row++) {
        int summ = 0;
        for (int col = 0; col < 4; col++) {
            summ += arr[row][col];
        }
        cout << "Sum of row " << row << " = " << summ << endl;
    }
}
int largestrowsum(int arr[3][4],int col,int row){
    int maxi=INT_MIN;
    int rowindex=-1;
    for(int row=0;row<3;row++){
        int summ=0;
        for(int col = 0; col < 4; col++){
            summ+=arr[row][col];
        }
            if(summ>maxi){
                maxi=summ;
                rowindex=row;
            }
    }
    cout<<"max sum of largest row: "<<maxi<<endl;
    return rowindex;
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
    cout << "Row sums:" << endl;
    sumofrows(arr);

    cout << endl;
    int ans= largestrowsum(arr,4,3);
    cout << "Largest row sum index:"<<ans << endl;
    
    
    return 0;
}