/*  
编写程序，输入两个整数，输出最大值。程序至少要包含一个带参数的宏，用于计算两个数的最大值。在main函数中通过使用这个宏，来实现程序的功能。
【注意】运行效果应如下所示，第一行为输入，第二行为输出。
98 125
125
*/
#include<stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", MAX(x, y));
    return 0;
}