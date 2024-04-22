#include <stdio.h>
void DigiTran(int k,char res[10]){
    int digital[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,0},i=0,j=0;
    for(i=9;i>=0&&k!=0;i--){
        digital[i]=k%10;
        k=k/10;
    }
    for(i=0;i<10;i++){
        if(digital[i]==-1){continue;}
        if((digital[i]==1||digital[i]==2)&&i==9){res[j]=65+digital[i];}
        else if((digital[i]==0)||(digital[i]>2)||(digital[i]==2&&digital[i+1]>6)){res[j]=65+digital[i];}
        else {res[j]=65+10*digital[i]+digital[i+1];i++;}
        j++;
    }
}
int main(){
    int num[10]={0},i,j,k=0;

    for(i=0;i<10&&num[i-1]!=-1;i++){scanf("%d",&num[i]);k++;}
    for(i=0;i<k;i++){
        char res[10]={0};
        DigiTran(num[i],res);
        for(j=0;j<k&&res[j]!=0;j++){printf("%c",res[j]);}
        printf(" ");
        }
    
}
