#include <stdio.h>
int main(){
    int n,k=0,a[10]={0};
    char s[10]={0};
    scanf("%d",&n);
    void myint2str(int a,char s[10],int k);
    myint2str(n,s,k);
    printf("%s",s);
}
void myint2str(int a,char s[10],int k){
    if(a/10==0){s[k]=a+'0';}
    else{
        s[k]=a%10+'0';
        int b=a/10;
        myint2str(b,s,k+1);
    }
}