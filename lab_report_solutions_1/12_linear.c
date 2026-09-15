#include<stdio.h>
int lsearch(int arr[],int n,int t);
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5,t=5;
    printf("Your target is at position %d",lsearch(arr,n,t)+1);
    return 0;
}
int lsearch(int arr[],int n,int t){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==t)
            break;
    }
    return i;
}
