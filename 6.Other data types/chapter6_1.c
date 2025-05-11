/* 
编写一个程序，使用以下保存选手姓名、裁判打分和选手得分的结构体：
struct MATCH{
char Name[20]; //选手姓名
int Judge[10]; //裁判打分
double Score; //选手得分
};
要求输入一位选手姓名和10位裁判打分，计算并输出选手的最后得分（去掉一个最高分和一个最低分后再取平均值，结果保留两位小数），输入输出示意如下：（第1行为输入，第2行为输出）：
Mary 85 78 80 76 82 84 76 90 70 95
选手Mary的得分是81.38
*/
#include <stdio.h>
struct MATCH{
   char Name[20];
   int Judge[10];
   double Score;
};
int main(){
    int i,j;
    float sum =0;
    struct MATCH althete;
    scanf("%s",&althete.Name);
    for (i=0;i<10;i++){
        scanf("%d",&althete.Judge[i]);
    }
    for(i=0;i<10;i++){
      for(j=0;j<10;j++){
          if(althete.Judge[i]>althete.Judge[j]){
              int temp = althete.Judge[i];
              althete.Judge[i] = althete.Judge[j];
              althete.Judge[j] = temp;
          }
      }
  }
  for(i=1;i<9;i++){
      sum += althete.Judge[i];
  }
  float average = sum/8;
  printf("选手%s的得分是%.2f",althete.Name,average);
  return 0;
}