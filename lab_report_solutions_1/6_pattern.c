#include<stdio.h>
int findindex(char s[],char p[]);
int main(){
    char s[100],p[100];
    int idx;
    scanf("%s %s",s,p);
    idx=findindex(s,p);
    if(idx==-1)
        printf("Pattern not found");
    else
        printf("Index: %d",idx);
    return 0;
}
int findindex(char s[],char p[]){
    int i,j,n=0,m=0;
    while(s[n]!='\0')
        n++;
    while(p[m]!='\0')
        m++;
    for(i=0;i<=n-m;i++){
        for(j=0;j<m;j++){
            if(s[i+j]!=p[j])
                break;
        }
        if(j==m)
            return i;
    }
    return -1;
}
