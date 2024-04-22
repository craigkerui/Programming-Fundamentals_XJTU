#include <stdio.h>
int issame(char str[30][10],int a,int b){
    int i=0,j=0;
    for(i=0;i<10;i++){
        if(str[a][i]==str[b][i]){j++;}
    }
    if(j==10) return 1;
    else return 0;
}
void swap(char str[30][10],int count[30],int i,int j){
    char string[10];
    int t;
    t=count[i];count[i]=count[j];count[j]=t;
    for(t=0;t<10;t++){string[t]=str[i][t];}
    for(t=0;t<10;t++){str[i][t]=str[j][t];}
    for(t=0;t<10;t++){str[j][t]=string[t];}
}
// int strcmp(char str1[10],char str2[10]){
//     int i=0;
//     char a,b;
//     for(i=0;i<10;i++){
//         a=str1[i];
//         b=str2[i];
//         if(65<=a&&a<=90){a+=32;}
//         if(65<=b&&b<=90){b+=32;}
//         if((a<b)|(str1[i]==str2[i]+32)){return 1;}
//         else if((a>b)|(str1[i]==str2[i]-32)){return -1;}
//         else if(a==b&&i==9){return 0;}
//     }
// }
int strcmp(char str1[10],char str2[10]){
    int i=0;
    for(i=0;i<10;i++){
        if(str1[i]<str2[i]){return 1;}
        else if(str1[i]>str2[i]){return -1;}
        else if(str1[i]==str2[i]&&i==9){return 0;}
    }
}
int main(){
    char str[30][10]={{}},string[150];
    int i=0,j=0,a=0,b=0,c=0,count[30]={0};
    gets(string);
    for(i=0;i<200&&string[i]!='\0';i++){
        if(65<=string[i]&&string[i]<=90){string[i]+=32;}
        //change capital to lowercase letter
        if(string[i]!=' '){str[a][b]=string[i];b++;}
        else{b=0;a++;}
    }
    for(i=0;i<30;i++){
        if(str[i][0]==0){continue;}
        else{count[i]=1;
            for(a=i+1;a<30;a++){
                if(issame(str,i,a)){str[a][0]=0;count[i]++;}
            }
        }
    }
    for(i=0;i<30;i++){
        for(j=i+1;j<30;j++){
            if((count[i]>count[j])|(count[i]==count[j]&&strcmp(str[i],str[j])==1)){swap(str,count,i,j);}
        }
    }
    for(i=29;i>19&&str[i][0]!=0;i--){printf("%s:%d\n",str[i],count[i]);}
}