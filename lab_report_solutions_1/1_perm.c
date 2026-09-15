#include<stdio.h>
void permute(int a[],int i,int n);
int main(){
    int arr[]={1,2,3};
    permute(arr,0,3);
    return 0;
}
void permute(int a[],int i,int n){
    int j,temp;
    if(i==n){
        for(j=0;j<n;j++)
            printf("%d ",a[j]);
        printf("\n");
    }
    else{
        for(j=i;j<n;j++){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            permute(a,i+1,n);
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
