/*编写一个程序，编写程序，以十六进制方式输入一个整数，实现对该数的高16位设置为1，低16位不变，然后输出该数，试分析输出是否正确。输入输出示意如下：（第一行为输入，第二行为输出）
A198E0C6
FFFFE0C6*/
#include <stdio.h>
int main(){
    int a,result;
    scanf_s("%x",&a);
    result = (a & 0xFFFF) | 0xFFFF0000;//将高16位设置为1，低16位不变
  //result = (a & 0xFFFF0000) | 0xFFFF;//将低16位设置为1，高16位不变
    printf("%X\n",result);
    return 0;
}
    