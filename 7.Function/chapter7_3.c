/*  
编写递归函数int fun(int n)，用于计算并返回斐波拉契数列的第n项，在main函数中输入一个正整数，调用fun函数后，输出斐波拉契数列的第n项。
斐波拉契数列如下： 
1、1、2、3、5、8、13、21...... 
输入输出示例如下：（第一行为输入，第二行为输出）。
7 
13
*/
#include <stdio.h>
int fun(int n){
    if(n==1||n==2)
        return 1;
    else
        return fun(n-1)+fun(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fun(n));
    return 0;
}