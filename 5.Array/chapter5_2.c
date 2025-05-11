/*编写一个程序，输入一个正整数n，输出由*和+组成的边长为n的正方图案。输入输出示意如下：（第1行为输入，第2-6行为输出）
5
****+
***++
**+++
*++++
+++++
*/
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("*");
        }
        for(j=1;j<=i;j++){
            printf("+");
        }
        printf("\n");
    }
    return 0;
}