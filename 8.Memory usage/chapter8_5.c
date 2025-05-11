/*
完成程序，输入8个学生的成绩，求平均分并输出。程序运行输入输出示意如下：（第1行为输入，第2行为输出）
85 76 69 85 91 72 64 87
ave= 78.625
*/
#include <stdio.h>
#include <stdlib.h>
#define   N   8
struct  slist{
    double s;  //存储学生成绩
    struct slist *next;  //指向下一个节点的指针
};
typedef  struct slist  STREC;  //定义类型别名

double  fun(STREC *h){
    double aver = 0; //存储总成绩
    int count = 0;  //计数器，统计节点数量
    STREC *current = h->next; //从头节点的下一个节点开始遍历
    while (current != NULL) {  //遍历链表
        aver += current->s;  //累加成绩
        count++;  //增加计数
        current = current->next;  //移动到下一个节点
    }
    if (count > 0) {
        aver = aver / count;  //计算平均分
    }
    return aver; 
}

STREC * creat(double *s){  //创建链表函数，s为学生成绩数组的指针
    STREC  *h,*p,*q;  //定义链表头指针和两个节点指针
    int i=0;
    h=p=(STREC*)malloc(sizeof(STREC));
    p->s=0;  //头节点的成绩设为0
    while(i<N){  //循环输入学生成绩
        q=(STREC*)malloc(sizeof(STREC));  //申请一个新节点
        if(q==NULL){  //判断申请是否成功
            exit(0);
        }
        q->s=s[i];  //将输入的成绩赋值给新节点
        i++;
        p->next=q;  //将新节点链接到链表中,尾插法
        p=q;  //将p指向新节点
    }
    p->next=0;  //将链表的最后一个节点的next指针置为NULL
    return  h;
}
int main(){
    double  s[N],ave;
    int i;
    for(i=0;i<N;++i)
        scanf_s("%lf",&s[i]);  //输入8个学生的成绩
        STREC  *h;  //定义链表头指针
        h=creat(s); 
        ave=fun(h); //求链表h中所有学生的平均分
        printf_s("ave= %6.3f\n",ave);  //输出平均分，保留三位小数
}