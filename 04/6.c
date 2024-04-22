#include <stdio.h>
int strcmp(char str1[20],char str2[20]){
    char s1[20],s2[20];
    int result=0,i=0;
    for(i=0;i<20;i++){
        (str1[i]>=65&&str1[i]<=90)?(s1[i]=str1[i]+32):(s1[i]=str1[i]);
        (str2[i]>=65&&str2[i]<=90)?(s2[i]=str2[i]+32):(s2[i]=str2[i]);
        
    }
    char *p1=s1,*p2=s2;
    for(i=0;i<20;i++){
        if(*(p1+i)>*(p2+i)){result=1;break;}
        else if(*(p1+i)<*(p2+i)){result=-1;break;}
        else if(*(p1+i)==*(p2+i)&&i==19){result=0;}
    }
    return result;
}
void swap(char str1[20],char str2[20]){
    char s[20];
    int t;
    for(t=0;t<20;t++){s[t]=str1[t];}
    for(t=0;t<20;t++){str1[t]=str2[t];}
    for(t=0;t<20;t++){str2[t]=s[t];}
}
void sortstring(char **r,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(strcmp(*(r+i),*(r+j))==1){
                swap(*(r+i),*(r+j));
            }
        }
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    getchar();
    char str[10][20]={0};
    for(i=0;i<n;i++){gets(str[i]);}
    char *p[10]={str[0],str[1],str[2],str[3],str[4],str[5],str[6],str[7],str[8],str[9]};
    char **pt=p;
    sortstring(pt,n);
    for(i=0;i<n;i++){puts(*pt);pt++;}
}