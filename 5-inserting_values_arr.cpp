#include <iostream>
using namespace std;
// for inserting values in an existing array
int main(){
    int arr[100]={1,2,3,4,5};
    int n=5,pos=5,val=6;
    for(int i=n;i>pos;--i){
    arr[i]=arr[i-1];}
    arr[pos]=val;
    n++;
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}


