#include<stdio.h>
void bSort(int arr[],int n);
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5,i;
    bSort(arr,n);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
void bSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
