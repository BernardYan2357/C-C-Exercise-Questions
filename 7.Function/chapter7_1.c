/*编写函数leap判断是否是闰年（函数返回值为1或0）。
并在main函数中调用leap函数输出“是”或“否”。
输入输出示例如下：（第一行为输入，第二行为输出）。
2022 
否
闰年是什么？
闰年是指在公历中，能被4整除但不能被100整除的年份，或者能被400整除的年份。
闰年有366天，平年有365天。闰年的2月有29天，而平年的2月只有28天。
在闰年中，2月29日是额外的一天，通常被称为“闰日”。
闰年是为了使历法年与天文年保持一致而设定的。
*/
#include <stdio.h>
int year;
int leap(int year){
    if(year%4==0&&year%100!=0){
        return 1;
    }
    else if(year%400==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    scanf("%d",&year);
    if(leap(year)==1){
        printf("是\n");
    }
    else{
        printf("否\n");
    }
    return 0;
}