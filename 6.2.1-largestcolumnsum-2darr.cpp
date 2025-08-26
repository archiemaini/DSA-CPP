
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x,y;
  cin >> x >> y;
  int num[x][y];
    for (int i = 0 ; i < x ; i++ ){
      for (int j = 0 ; j < y ; j++){
        cin >> num[i][j];
      }
    };
  int add = 0;
  int res = 0;
  int idx = 0;
    for (int i = 0 ; i < x ; i++ ){
      for (int j = 0 ; j < y ; j++){
        add += num[j][i];
        if (add > res){
          res = add;
          idx = i+1;
        }
      }
      add = 0;
    };
    cout << idx << endl;
}
