#include <iostream>
#include <algorithm> //for asc order sorting
#include <functional> //for dec order sorting
using namespace std;
int binarySearch(int arr[],int n,int tar){
    
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if (arr[mid]==tar){
            return mid;
        }
        else if(arr[mid]<tar){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        
    }
}
int main() {
    
    int arr[]={0,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n); /*used for sorting array in asc order*/
    // sort(arr,arr+n,greater<int>()); //used for sorting arr in dec order
    int tar=4;
    int index= binarySearch(arr,n,tar);
    if(index!=-1)
    cout<<"element found at index: "<<index;
    else
    cout<<"element not found ";
    
    return 0;

}

// binary search for finding 1st and last occ of an element(key)

#include <iostream>
using namespace std;
int firstocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else
            start=mid+1;
    }
    
    return ans;
}
int lasttocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else
            start=mid+1;
    }
    return ans;
}
int main() {
    int arr[]={1,2,3,3,3,3,3,5};
    int size=8;
    int key=3;
    // int first=firstocc(arr,8,3);
    // int last=lasttocc(arr,8,3);
    cout<<"1st occ of 3: "<<firstocc(arr,8,3)<<endl;
    cout<<"last occ of 3: "<<lasttocc(arr,8,3)<<endl;
    cout<<"num of index taken: "<<(lasttocc(arr,8,3)-firstocc(arr,8,3))+1<<endl;
    return 0;
}
