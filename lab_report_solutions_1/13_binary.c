#include<stdio.h>
int bSearch(int arr[],int n,int t);
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5,t=5;
    printf("Your target is at position %d",bSearch(arr,n,t)+1);
    return 0;
}
int bSearch(int arr[],int n,int t){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==t)
            return mid;
        if(arr[mid]<t)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
