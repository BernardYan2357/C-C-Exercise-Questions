/*  
从键盘依次输入一位学生的姓名、平时成绩、期中成绩和期末成绩（成绩均为整数），输出总评成绩（保留2位小数）。
总评成绩 = 平时*20% + 期中*25% + 期末*55%。
提示：学生的姓名和成绩是一组相关的数据，在程序中定义如下结构体类型：
struct SCORE{
char Name[20]; //姓名
int Normal;   //平时成绩
int MidTerm;  //期中成绩
int EndTerm;  //期末成绩
double Total;    //总评成绩
};
【注意】运行效果如下（第1行为输入，第2行为输出），格式错误算结果错误。
Rose 75 85 90
Rose的总评成绩是85.75
*/
#include <stdio.h>
struct SCORE {
    char Name[20];
    int Normal;
    int MidTerm;
    int EndTerm;
    double Total;
};
int main() {
    struct SCORE stu;
    scanf("%s %d %d %d", stu.Name, &stu.Normal, &stu.MidTerm, &stu.EndTerm);
    stu.Total = stu.Normal * 0.2 + stu.MidTerm * 0.25 + stu.EndTerm * 0.55;
    printf("%s的总评成绩是%.2f\n", stu.Name, stu.Total);
    return 0;
}