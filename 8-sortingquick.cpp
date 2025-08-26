#include <iostream>
using namespace std;
// // Sorting --> 1.Quick sort- works and divide and conquer rule(st,mid,end)
void sortColors(int nums[],int size){
int low=0;
int mid=1;
// int high=nums.size()-1;
int high=size-1;
while(mid<=high){
    if(nums[mid]==0){
        swap(nums[low],nums[mid]);
        low++;
        mid++;
    }
    else if(nums[mid]==1){
        mid++;
    }     
    else{
        swap(nums[mid],nums[high]);
        high--;
    }
}
}
