/*
编写一个程序，实现裁判打分功能。输入10个分数，去掉一个最高分和一个最低分，输出剩下的8个数分数的平均分。输入输出示意如下：（第1行为输入，第2行为输出保留小数点后2位）
1 2 3 4 5 6 7.2 8 8 10
5.40
*/
#include <stdio.h>
int main(){
    float score[10];
    float sum,temp,average = 0;
    int i,j;
    for(i=0;i<10;i++){
        scanf("%f",&score[i]);
    }
    //冒泡排序
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(score[i]>score[j]){
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }
    for(i=1;i<9;i++){
        sum += score[i];
    }
    average = sum/8;
    printf("%.2f",average);
    return 0;
}
