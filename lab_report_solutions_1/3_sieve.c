#include<stdio.h>
int main(){
    int p[151],i,j;
    for(i=2;i<151;i++)
        p[i]=0;
    i=2;
    while(i<150){
        if(p[i]==0)
            printf("%d ",i);
        for(j=1;i*j<=150;j++)
            p[i*j]=1;
        i++;
    }
    return 0;
}
