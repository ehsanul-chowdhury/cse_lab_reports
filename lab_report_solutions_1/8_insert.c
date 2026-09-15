#include<stdio.h>
void insert(char s[],char t[],int p);
int main(){
    char s[100],t[100];
    int p;
    scanf("%s %s %d",s,t,&p);
    insert(s,t,p);
    return 0;
}
void insert(char s[],char t[],int p){
    int i,len=0,m=0;
    while(s[len]!='\0')
        len++;
    while(t[m]!='\0')
        m++;
    for(i=len;i>=p-1;i--)
        s[i+m]=s[i];
    for(i=0;i<m;i++)
        s[p-1+i]=t[i];
    printf("%s",s);
}
