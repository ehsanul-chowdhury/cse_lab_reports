#include<stdio.h>
int findsub(char s[],char p[]);
int main(){
    char s[100],p[100];
    int pos;
    scanf("%s %s",s,p);
    pos=findsub(s,p);
    if(pos==0)
        printf("Substring not found");
    else
        printf("Starting position: %d",pos);
    return 0;
}
int findsub(char s[],char p[]){
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
            return i+1;
    }
    return 0;
}
