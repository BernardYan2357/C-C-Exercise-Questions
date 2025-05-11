/*
编写一个程序，已知斐波那契数列如下所示：
1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
输入项的序号n，输出该项的值。输入输出示意如下：（第一行为输入，第二行为输出）
5
5
*/
#include <stdio.h>
#include <math.h>
int main(){
    int n,i,a=1,b=1,c=0;
    scanf("%d",&n);
    if (n==1||n==2){
        printf("%d",1);
    }
    else{
        for (i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
    }
}