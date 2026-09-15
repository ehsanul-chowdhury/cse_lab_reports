#include<stdio.h>
int first(int a[],int n,int x);
int last(int a[],int n,int x);
int main(){
    int arr[8]={1,2,2,2,3,4,5,5};
    int n=8,t=2;
    int f=first(arr,n,t);
    int l=last(arr,n,t);
    if(f==-1){
        printf("%d not found\n",t);
        printf("Total count: 0\n");
    }
    else{
        printf("First position: %d\n",f+1);
        printf("Last position: %d\n",l+1);
        printf("Total count: %d\n",l-f+1);
    }
    return 0;
}
int first(int a[],int n,int x){
    int low=0,high=n-1,res=-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(x<a[mid])
            high=mid-1;
        else if(x>a[mid])
            low=mid+1;
        else{
            res=mid;
            high=mid-1;
        }
    }
    return res;
}
int last(int a[],int n,int x){
    int low=0,high=n-1,res=-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(x<a[mid])
            high=mid-1;
        else if(x>a[mid])
            low=mid+1;
        else{
            res=mid;
            low=mid+1;
        }
    }
    return res;
}
