/*  
编写一个C/C++语言程序，输入若干个学生的信息（学号0代表结束）,输出其中所有女同学的信息（按学号从小到大输出）。
要求:合理使用函数和链表，已知学生信息定义如下：
struct student
{
    int num;
    char name[20];
    int sex;
    int age;
    student* next;
};
【注意】输入每位学生的信息各占一行，输入的学生各项信息间用半角空格分隔；
输出学生各列信息间用一个半角空格分隔，输入输出格式示意如下（（前6行为输入，后2行为输出）：
3 张三 1 17
4 李四 1 18
2 小红 0 18
1 王五 1 19
6 小丽 0 19
0
2 小红 0 18
6 小丽 0 19
*/
#include<iostream>
using namespace std;
struct student{
    int num;
    char name[20];
    int sex;
    int age;
    student* next;
};
void printList(student* head) {
    student* p = head;
    struct student girl[100];
    int i=0,j=0;
    while (p!=NULL) {
        if(p->sex==0){
            girl[i++]=*p;
        }
        p=p->next;
    }
    for(int m=0;m<i-1;m++){
        for(int n=0;n<i-1-m;n++){
            if(girl[n].num > girl[n+1].num){
                student temp=girl[n];
                girl[n]=girl[n+1];
                girl[n+1]=temp;
            }
        }
    }
    for (int j = 0; j < i; j++) {
        cout<<girl[j].num<<" "<<girl[j].name<<" "<<girl[j].sex<<" "<<girl[j].age<<endl;
    }
}
int main(){
    struct student *p,*head=NULL;
    while(true){
        p=(struct student*)malloc(sizeof(struct student));
        cin>>p->num;
        if(p->num==0){
            free(p);
            break;
        }
        cin>>p->name>>p->sex>>p->age;
        p->next=head;
        head=p; //使用头插法实现反向输出
    }
    printList(head);
    while(head){
        p=head;
        head=head->next;
        free(p);
    } //释放链表内存
    return 0;
}
