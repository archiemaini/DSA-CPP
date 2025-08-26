#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int add = 0;
    while(x != 0){
        add = add + x%10;
        x = x/10;
    }
    cout << add;
    return 0;
}