#include <stdio.h>
void find(char str[20],char maxs[20]){
    char s[10][20]={0};
    int i,j=0,k=0,status[20]={0},count[10]={0},max=0,r=0;;
    for(i=0;i<20;i++){if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){status[i]=1;}}
    for(i=0;i<20;i++){
        if(status[i]==1){
            count[j]++;
            s[j][k]=str[i];
            k++;
        }
        else if(status[i]==0&&status[i+1]==1){j++;k=0;}
    }
    for(i=0;i<10;i++){
        if(max<count[i]){max=count[i];r=i;}
    }
    for(i=0;i<20;i++){maxs[i]=s[r][i];}
}
int main(){
    char string[20]={0},maxs[20]={0};
    gets(string);
    find(string,maxs);
    printf("%s",maxs);
}