#include <stdio.h>
int main(){
    struct Student{
        int cls;
        int no;
        float score[4];
    }stu[3];
    struct Student *p=NULL;
    for(p=stu;p<stu+3;p++){
        scanf("%d,%d,%f,%f,%f",&p->cls,&p->no,&p->score[0],&p->score[1],&p->score[2]);
        p->score[3]=p->score[0]+p->score[1]+p->score[2];
    }
    int i,j,temp1=0;
    float temp2=0;
    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            if((stu[i].cls>stu[j].cls)||(stu[i].cls==stu[j].cls&&stu[i].score[3]<stu[j].score[3])){
                temp1=stu[i].cls;stu[i].cls=stu[j].cls;stu[j].cls=temp1;
                temp1=stu[i].no;stu[i].no=stu[j].no;stu[j].no=temp1;
                temp2=stu[i].score[3];stu[i].score[3]=stu[j].score[3];stu[j].score[3]=temp2;
            }
        }
    }
    for(p=stu;p<stu+3;p++){
        printf("%d,%d,%.1f\n",p->cls,p->no,p->score[3]);
    }

}