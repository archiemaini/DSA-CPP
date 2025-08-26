// 2ND LARGEST
#include <iostream>
#include <climits>
using namespace std;
int seclargest(int arr[],int size){
    int first=INT_MIN;
    int second=INT_MIN;;
    for(int i=0;i<size;i++){
       if(arr[i]>first){
           second=first;
           first=arr[i];
       }
       else if(arr[i]>second &&arr[i]!=first){
           second=arr[i];
       }
    }
    return second;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int secolargest=seclargest(arr,5);
    if(secolargest!=INT_MIN){
        cout<<"secolargest = "<<secolargest;
    }
    else
    cout<<"nothing";
}