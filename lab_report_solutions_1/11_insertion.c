#include<stdio.h>
void isSort(int a[],int n);
int main(){
    int arr[5]={5,2,4,1,3};
    int n=5,i;
    isSort(arr,n);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
void isSort(int a[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
