# include <iostream>
using namespace std;

// Space Complexity O(1)

void add(int arr[] , int len){
    int add = 0;
    for (int i = 0 ; i < len ; i++){
        add += arr[i];
    }
    cout << add;
}
int main(){
    int arr[] = {1,2,3,4,5};
    add(arr,5);
    return 0;
}