/*
编写一个程序，使用以下学生信息结构体：
struct student{
int num;
char name[20];
int sex;
float score;
};
要求输入学生人数n，然后输入n个学生信息，分别统计并输出男、女(sex=0女、sex=1男)同学的最低成绩（假设这n个学生中男女生都有，计算结果精确到小数点后1位）。输入输出示意如下：（第1-6行为输入，第7-8行为输出）：
5
1001 Tom 1 95
1002 Jack 1 99
1003 Lily 0 100
1004 Cherry 0 92
1005 Tim 1 88
男生最低分:88.0
女生最低分:92.0

*/
#include <stdio.h>
struct student{
    int num;
    char name[20];
    int sex;
    float score;
};
int main(){
int i,n;
scanf("%d", &n);
float minsocre_girl=100;
float minsocre_boy=100;
struct student stu[n];
for (i=0;i<n;i++){
    scanf("%d %s %d %f",&stu[i].num,stu[i].name,&stu[i].sex,&stu[i].score);
    //这里stu[i].name是字符串，字符串名即代表地址，无需&符号
    if (stu[i].sex==0){
        if (stu[i].score<minsocre_girl){
            minsocre_girl=stu[i].score;
        }
    }
    else if (stu[i].sex==1){
        if(stu[i].score<minsocre_boy){
            minsocre_boy=stu[i].score;
        }
    }
}
printf("男生最低分:%.1f\n",minsocre_boy);
printf("女生最低分:%.1f\n",minsocre_girl);
return 0;
}