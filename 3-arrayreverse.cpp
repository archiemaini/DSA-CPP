// array reversal
#include <iostream>
using namespace std;
void reversearray(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
       int temp=arr[left];
       arr[left]=arr[right];
       arr[right]=temp;
       left++;
       right--;
    }
    
}
int main(){
    int arr[]={5,6,7,8,11,4,7,3};
    int size=8;
    reversearray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}