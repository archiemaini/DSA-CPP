// linear search
#include <iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
       if(arr[i]==key){
           return 1;
       }
    }
    return 0;
}
int main(){
    int arr[]={5,6,7,8,11,4,7,3};
    int size=8;
    int key=10;
    
    bool found=linearsearch(arr,size,key);
    if(found){
        cout<<"Key is present";
    }
    else
    cout<<"Key is not present";
}
