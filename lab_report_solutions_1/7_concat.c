#include<stdio.h>
void concat(char s1[],char s2[]);
int main(){
    char s1[200],s2[100];
    scanf("%s %s",s1,s2);
    concat(s1,s2);
    return 0;
}
void concat(char s1[],char s2[]){
    int i=0,j=0;
    while(s1[i]!='\0')
        i++;
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    printf("%s",s1);
}
