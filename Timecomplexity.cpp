#include <iostream>
using namespace std;

void printFirstElement(int arr[],int n){
  cout << arr[0] << endl;
  // Time Complexity O(1)
}

void printAll(int arr[],int n){
  for (int i = 0 ; i < n ; i++){
    cout << arr[i] << endl;
  }
  // Time Complexity O(N)
}

void printPair(int arr[],int n){
  for (int i = 0 ; i < n ; i++){
    for (int j = 0 ; j < n ; j++){
      cout << "( " << arr[i] << " , " << arr[j] << " ) " << endl;
    }
  }
  // Time Complexity 0(N^2)
}
int main(){
  int arr[] = {5,10,15,20};
  printFirstElement(arr,4);
  

  int arr1[] = {1,2,3,4};
  printAll (arr1,4);

  int arr2[] = {1,2,3,4};
  printPair (arr2,4);
  return 0;
}