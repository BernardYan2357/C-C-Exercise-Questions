/*
完成程序，已有代码如下：
#include <stdio.h>
#include <string.h>
//定义枚举类型，保存性别信息
enum SEX{
GIRL, BOY
};
//定义结构体类型，保存学生信息
struct STU{
char Name[20];             //姓名
char Number[20];           //学号
enum SEX sex;              //性别
};
typedef struct STU STU;    //自定义类型 STU
int main(){
STU a[5];                //定义结构体数组
char t[20];              //存放输入的性别（“男”或“女”）
int i,c=0;               //变量c存放女生人数
//1.输入5位学生信息：姓名、学号、性别

//2.添加代码实现：统计女生人数，存入变量c中

//3.添加代码实现：输出女生人数

return 0;
}
要求输入5位学生的姓名、学号和性别，输出女生人数。输入输出示意如下：（第1-5行为输入，第6行为输出）：
AAA 001 男
BBB 002 女
CCC 003 女
DDD 004 男
EEE 005 女
3
*/
#include <stdio.h>
#include <string.h>
enum SEX{
GIRL,BOY
};
struct STU{
char Name[20];             
char Number[20];           
enum SEX sex;              
};
typedef struct STU STU;
int main(){
    STU a[5];                
    char t[20];              
    int i,c=0;               
    for (i=0;i<5;i++){
        scanf("%s %s %s",a[i].Name,a[i].Number,t);
        if (strcmp(t,"女")==0){
            a[i].sex=GIRL;
            c++;
        }
        else if(strcmp(t,"男")==0){
            //此处必须使用else if，否则会将其他输入的字符都赋值为BOY
            //考评系统会报错
            a[i].sex=BOY;
        }
    }
    printf("%d\n",c);
    return 0;
}