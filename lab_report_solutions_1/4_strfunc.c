#include<stdio.h>
int LENGTH(char s[]);
char GETCHAR(char s[],int n);
void PUTCHAR(char s[],int n,char c);
int POS(char s1[],char s2[]);
void CONCAT(char s1[],char s2[]);
void SUBSTRING(char s[],int i,int m,char r[]);
void DELETE(char s[],int i,int m);
void INSERT(char s1[],char s2[],int i);
int COMPARE(char s1[],char s2[]);
int main(){
    char s1[100]="hello",s2[100]="world",r[100];
    printf("Length: %d\n",LENGTH(s1));
    printf("Char at 2: %c\n",GETCHAR(s1,2));
    PUTCHAR(s1,1,'H');
    printf("After putchar: %s\n",s1);
    printf("Pos: %d\n",POS(s1,"llo"));
    printf("Compare: %d\n",COMPARE(s1,s2));
    SUBSTRING(s1,2,3,r);
    printf("Substring: %s\n",r);
    DELETE(s1,2,2);
    printf("After delete: %s\n",s1);
    INSERT(s1,"ey",2);
    printf("After insert: %s\n",s1);
    CONCAT(s1,s2);
    printf("After concat: %s\n",s1);
    return 0;
}
int LENGTH(char s[]){
    int i=0;
    while(s[i]!='\0')
        i++;
    return i;
}
char GETCHAR(char s[],int n){
    return s[n-1];
}
void PUTCHAR(char s[],int n,char c){
    s[n-1]=c;
}
int POS(char s1[],char s2[]){
    int i,j,n=LENGTH(s1),m=LENGTH(s2);
    for(i=0;i<=n-m;i++){
        for(j=0;j<m;j++){
            if(s1[i+j]!=s2[j])
                break;
        }
        if(j==m)
            return i+1;
    }
    return 0;
}
void CONCAT(char s1[],char s2[]){
    int i=LENGTH(s1),j=0;
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
}
void SUBSTRING(char s[],int i,int m,char r[]){
    int k;
    for(k=0;k<m;k++)
        r[k]=s[i-1+k];
    r[m]='\0';
}
void DELETE(char s[],int i,int m){
    int len=LENGTH(s),k;
    for(k=i-1;k+m<=len;k++)
        s[k]=s[k+m];
    s[len-m]='\0';
}
void INSERT(char s1[],char s2[],int i){
    int len=LENGTH(s1),m=LENGTH(s2),k;
    for(k=len;k>=i-1;k--)
        s1[k+m]=s1[k];
    for(k=0;k<m;k++)
        s1[i-1+k]=s2[k];
}
int COMPARE(char s1[],char s2[]){
    int i=0;
    while(s1[i]!='\0'&&s2[i]!='\0'){
        if(s1[i]!=s2[i])
            return s1[i]>s2[i]?1:-1;
        i++;
    }
    if(s1[i]==s2[i])
        return 0;
    return s1[i]=='\0'?-1:1;
}
