/*  
创建一个由3个学生数据节点组成的链表，并输出成绩高于平均成绩的学生的信息，要求输入的3个学生的数据中有高于平均成绩的学生。
输入输出示意如下：（第1-3行为输入，第4-5行为输出）  
111 ASD 75
222 BNM 65
333 CXZ 73
333 CXZ 73
111 ASD 75
*/
#include <stdio.h>
#include <stdlib.h>
struct student{ //学生结构体
    int num;
    char name[20];
    double score;
    struct student *next;
};
struct student *create(double *ave){ //创建链表，读入学生信息，计算平均分
    struct student *p,*head;
    double sum=0.0;
    head=NULL;
    for(int i=1;i<=3;i++){ //头插法建立链表
        p=(struct student *)malloc(sizeof(struct student));
        scanf_s("%d %s %lf",&p->num,p->name,20,&p->score);
        sum+=p->score;
        p->next=head;
        head=p;
    } 
    *ave=sum/3.0;
    return head;
}
void output(struct student *head,double ave){ //输出链表中成绩高于平均值的学生的信息
    int i;
    struct student *p=head;
    for(i=0;i<3;i++){
        if(p->score>ave){
            printf("%d %s %.0lf\n",p->num,p->name,p->score);
        }
        p=p->next;
    }
}

int main(){
    struct student *head;
    double av;
    head=create(&av);
    output(head,av);
    return 0;
}