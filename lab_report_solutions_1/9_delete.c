#include<stdio.h>
void deleteStr(char s[],int p,int n);
int main(){
    char s[100];
    int p,n;
    scanf("%s %d %d",s,&p,&n);
    deleteStr(s,p,n);
    return 0;
}
void deleteStr(char s[],int p,int n){
    int i=0,len=0;
    while(s[len]!='\0')
        len++;
    for(i=p-1;i+n<=len;i++)
        s[i]=s[i+n];
    printf("%s",s);
}
