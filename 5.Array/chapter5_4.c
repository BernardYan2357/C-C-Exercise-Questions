/*
编写一个程序，输入两个字符串s1、s2（每个字符串为一行，字符串中间可能有空格），
不使用strcat_s函数，将两个字符连接并输出。输入输出示意如下：（第1-2行为输入，第3行为输出）
Hello suzhou
!
Hello suzhou!
*/
#include <stdio.h>
#include <string.h>
int main(){
    int i;
    char s1[100],s2[100],s3[200]={0};
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    //去掉换行符!
    for (i=0;i<strlen(s1);i++){
        if (s1[i]=='\n'){
            s1[i]='\0';
        }
    }
    for (i=0;i<strlen(s2);i++){
        if (s2[i]=='\n'){
            s2[i]='\0';
        }
    }
    //连接字符串   
    for (i=0;i<strlen(s1);i++){
        s3[i]=s1[i];
    }
    for (i=0;i<strlen(s2);i++){
        s3[strlen(s1)+i]=s2[i];
    }
    printf("%s",s3);
    return 0;
}