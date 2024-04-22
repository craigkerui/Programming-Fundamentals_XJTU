#include <stdio.h>
int main(){
    int n,i,j,k=0;
    scanf("%d",&n);
    getchar();
    int a[n][n],minr[n],maxc[n],ans[n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        getchar();
    }//input the matrix
    for(i=0;i<n;i++){
        int min=a[i][0];
        for(j=1;j<n;j++){(a[i][j]<=min)?(min=a[i][j]):(min=min);}
        minr[i]=min;
    }
    for(j=0;j<n;j++){
        int max=a[0][j];
        for(i=1;i<3;i++){(a[i][j]<=max)?(max=max):(max=a[i][j]);}
        maxc[j]=max;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==minr[i]&&a[i][j]==maxc[j]){
                ans[k]=a[i][j];
                printf("%d %d %d\n",i+1,j+1,a[i][j]);
                k++;
                }
        }
    }//judge if a number is a saddle number
    if(k==0){
        printf("None");
        return 0;
    }
}
